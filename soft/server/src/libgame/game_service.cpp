#include "game_service.h"
#include <ace/Guard_T.h>
#include "gameinc.h"

GameService::GameService()
: timer_(0)
, tick_(0)
, head_(0)
, tail_(0)
, header_(0)
, next_(0)
, gif_(0)
{
}

GameService::~GameService()
{
}

int GameService::init(mmg::GameInterface *gif)
{
	gif_ = gif;
	tick_ = boost::lexical_cast<int>(game::env()->get_game_value("tick"));
	timer_ = game::timer()->schedule(boost::bind(&GameService::update, this, _1), tick_, "com");

	return 0;
}

int GameService::fini()
{
	if (-1 != timer_)
	{
		game::timer()->cancel(timer_);
		timer_ = -1;
	}
	return 0;
}

int GameService::add_msg(Packet *pck)
{
	ACE_Guard<ACE_Thread_Mutex> t(chain_);

	if (head_ == NULL)
	{
		tail_ = head_ = pck;
	}
	else
	{
		tail_ = tail_->add_tail(pck);
	}

	return 0;
}

int GameService::update(const ACE_Time_Value &cur)
{
	uint64_t n1 = game::timer()->now();

	while (game::timer()->now() - n1 < tick_)
	{
		if (!next_)
		{
			if (header_)
			{
				Packet::clear(header_);
			}
			if (fetch (header_) == -1)
			{
				break;
			}
			next_ = header_;
		}
		on_filter(next_);
		next_ = next_->next ();	
	}

	game::pool()->doupcall();

	game::pool()->donamecall();

	return 0;
}

int GameService::fetch(Packet*& pck)
{
	ACE_Guard<ACE_Thread_Mutex> t(chain_);

	pck = head_;
	tail_ = head_ = NULL;

	return pck == NULL ? -1 : 0;
}

void GameService::on_filter(Packet* pck)
{
	if (!gif_)
	{
		return;
	}
	gif_->dispath_packet_handle(pck);
}

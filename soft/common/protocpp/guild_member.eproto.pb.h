// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: guild_member.eproto

#ifndef PROTOBUF_INCLUDED_guild_5fmember_2eeproto
#define PROTOBUF_INCLUDED_guild_5fmember_2eeproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_guild_5fmember_2eeproto 

namespace protobuf_guild_5fmember_2eeproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_guild_5fmember_2eeproto
namespace dhc {
class guild_member_t;
class guild_member_tDefaultTypeInternal;
extern guild_member_tDefaultTypeInternal _guild_member_t_default_instance_;
}  // namespace dhc
namespace google {
namespace protobuf {
template<> ::dhc::guild_member_t* Arena::CreateMaybeMessage<::dhc::guild_member_t>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace dhc {

// ===================================================================

class guild_member_t : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dhc.guild_member_t) */ {
 public:
  guild_member_t();
  virtual ~guild_member_t();

  guild_member_t(const guild_member_t& from);

  inline guild_member_t& operator=(const guild_member_t& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  guild_member_t(guild_member_t&& from) noexcept
    : guild_member_t() {
    *this = ::std::move(from);
  }

  inline guild_member_t& operator=(guild_member_t&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const guild_member_t& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const guild_member_t* internal_default_instance() {
    return reinterpret_cast<const guild_member_t*>(
               &_guild_member_t_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(guild_member_t* other);
  friend void swap(guild_member_t& a, guild_member_t& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline guild_member_t* New() const final {
    return CreateMaybeMessage<guild_member_t>(NULL);
  }

  guild_member_t* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<guild_member_t>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const guild_member_t& from);
  void MergeFrom(const guild_member_t& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(guild_member_t* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 honors = 13;
  int honors_size() const;
  void clear_honors();
  static const int kHonorsFieldNumber = 13;
  ::google::protobuf::int32 honors(int index) const;
  void set_honors(int index, ::google::protobuf::int32 value);
  void add_honors(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      honors() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_honors();

  // repeated int32 mission_rewards = 17;
  int mission_rewards_size() const;
  void clear_mission_rewards();
  static const int kMissionRewardsFieldNumber = 17;
  ::google::protobuf::int32 mission_rewards(int index) const;
  void set_mission_rewards(int index, ::google::protobuf::int32 value);
  void add_mission_rewards(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      mission_rewards() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_mission_rewards();

  // repeated int32 gongpo_rewards = 22;
  int gongpo_rewards_size() const;
  void clear_gongpo_rewards();
  static const int kGongpoRewardsFieldNumber = 22;
  ::google::protobuf::int32 gongpo_rewards(int index) const;
  void set_gongpo_rewards(int index, ::google::protobuf::int32 value);
  void add_gongpo_rewards(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      gongpo_rewards() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_gongpo_rewards();

  // string player_name = 5;
  void clear_player_name();
  static const int kPlayerNameFieldNumber = 5;
  const ::std::string& player_name() const;
  void set_player_name(const ::std::string& value);
  #if LANG_CXX11
  void set_player_name(::std::string&& value);
  #endif
  void set_player_name(const char* value);
  void set_player_name(const char* value, size_t size);
  ::std::string* mutable_player_name();
  ::std::string* release_player_name();
  void set_allocated_player_name(::std::string* player_name);

  // uint64 guid = 1;
  void clear_guid();
  static const int kGuidFieldNumber = 1;
  ::google::protobuf::uint64 guid() const;
  void set_guid(::google::protobuf::uint64 value);

  // uint64 guild_guid = 2;
  void clear_guild_guid();
  static const int kGuildGuidFieldNumber = 2;
  ::google::protobuf::uint64 guild_guid() const;
  void set_guild_guid(::google::protobuf::uint64 value);

  // uint64 player_guid = 3;
  void clear_player_guid();
  static const int kPlayerGuidFieldNumber = 3;
  ::google::protobuf::uint64 player_guid() const;
  void set_player_guid(::google::protobuf::uint64 value);

  // int32 player_iocn_id = 4;
  void clear_player_iocn_id();
  static const int kPlayerIocnIdFieldNumber = 4;
  ::google::protobuf::int32 player_iocn_id() const;
  void set_player_iocn_id(::google::protobuf::int32 value);

  // int32 player_level = 6;
  void clear_player_level();
  static const int kPlayerLevelFieldNumber = 6;
  ::google::protobuf::int32 player_level() const;
  void set_player_level(::google::protobuf::int32 value);

  // int32 bf = 7;
  void clear_bf();
  static const int kBfFieldNumber = 7;
  ::google::protobuf::int32 bf() const;
  void set_bf(::google::protobuf::int32 value);

  // int32 zhiwu = 8;
  void clear_zhiwu();
  static const int kZhiwuFieldNumber = 8;
  ::google::protobuf::int32 zhiwu() const;
  void set_zhiwu(::google::protobuf::int32 value);

  // uint64 last_sign_time = 10;
  void clear_last_sign_time();
  static const int kLastSignTimeFieldNumber = 10;
  ::google::protobuf::uint64 last_sign_time() const;
  void set_last_sign_time(::google::protobuf::uint64 value);

  // int32 sign_flag = 9;
  void clear_sign_flag();
  static const int kSignFlagFieldNumber = 9;
  ::google::protobuf::int32 sign_flag() const;
  void set_sign_flag(::google::protobuf::int32 value);

  // int32 contribution = 12;
  void clear_contribution();
  static const int kContributionFieldNumber = 12;
  ::google::protobuf::int32 contribution() const;
  void set_contribution(::google::protobuf::int32 value);

  // uint64 join_time = 11;
  void clear_join_time();
  static const int kJoinTimeFieldNumber = 11;
  ::google::protobuf::uint64 join_time() const;
  void set_join_time(::google::protobuf::uint64 value);

  // int32 mnum = 14;
  void clear_mnum();
  static const int kMnumFieldNumber = 14;
  ::google::protobuf::int32 mnum() const;
  void set_mnum(::google::protobuf::int32 value);

  // int32 mbnum = 15;
  void clear_mbnum();
  static const int kMbnumFieldNumber = 15;
  ::google::protobuf::int32 mbnum() const;
  void set_mbnum(::google::protobuf::int32 value);

  // uint64 last_mbtime = 16;
  void clear_last_mbtime();
  static const int kLastMbtimeFieldNumber = 16;
  ::google::protobuf::uint64 last_mbtime() const;
  void set_last_mbtime(::google::protobuf::uint64 value);

  // int32 msg_count = 18;
  void clear_msg_count();
  static const int kMsgCountFieldNumber = 18;
  ::google::protobuf::int32 msg_count() const;
  void set_msg_count(::google::protobuf::int32 value);

  // int32 player_vip = 19;
  void clear_player_vip();
  static const int kPlayerVipFieldNumber = 19;
  ::google::protobuf::int32 player_vip() const;
  void set_player_vip(::google::protobuf::int32 value);

  // uint64 offline_time = 21;
  void clear_offline_time();
  static const int kOfflineTimeFieldNumber = 21;
  ::google::protobuf::uint64 offline_time() const;
  void set_offline_time(::google::protobuf::uint64 value);

  // int32 player_achieve = 20;
  void clear_player_achieve();
  static const int kPlayerAchieveFieldNumber = 20;
  ::google::protobuf::int32 player_achieve() const;
  void set_player_achieve(::google::protobuf::int32 value);

  // int32 map_star = 23;
  void clear_map_star();
  static const int kMapStarFieldNumber = 23;
  ::google::protobuf::int32 map_star() const;
  void set_map_star(::google::protobuf::int32 value);

  // int32 nalflag = 24;
  void clear_nalflag();
  static const int kNalflagFieldNumber = 24;
  ::google::protobuf::int32 nalflag() const;
  void set_nalflag(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:dhc.guild_member_t)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > honors_;
  mutable int _honors_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > mission_rewards_;
  mutable int _mission_rewards_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > gongpo_rewards_;
  mutable int _gongpo_rewards_cached_byte_size_;
  ::google::protobuf::internal::ArenaStringPtr player_name_;
  ::google::protobuf::uint64 guid_;
  ::google::protobuf::uint64 guild_guid_;
  ::google::protobuf::uint64 player_guid_;
  ::google::protobuf::int32 player_iocn_id_;
  ::google::protobuf::int32 player_level_;
  ::google::protobuf::int32 bf_;
  ::google::protobuf::int32 zhiwu_;
  ::google::protobuf::uint64 last_sign_time_;
  ::google::protobuf::int32 sign_flag_;
  ::google::protobuf::int32 contribution_;
  ::google::protobuf::uint64 join_time_;
  ::google::protobuf::int32 mnum_;
  ::google::protobuf::int32 mbnum_;
  ::google::protobuf::uint64 last_mbtime_;
  ::google::protobuf::int32 msg_count_;
  ::google::protobuf::int32 player_vip_;
  ::google::protobuf::uint64 offline_time_;
  ::google::protobuf::int32 player_achieve_;
  ::google::protobuf::int32 map_star_;
  ::google::protobuf::int32 nalflag_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_guild_5fmember_2eeproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// guild_member_t

// uint64 guid = 1;
inline void guild_member_t::clear_guid() {
  set_changed();
  guid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 guild_member_t::guid() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.guid)
  return guid_;
}
inline void guild_member_t::set_guid(::google::protobuf::uint64 value) {
  set_changed();
  
  guid_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.guid)
}

// uint64 guild_guid = 2;
inline void guild_member_t::clear_guild_guid() {
  set_changed();
  guild_guid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 guild_member_t::guild_guid() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.guild_guid)
  return guild_guid_;
}
inline void guild_member_t::set_guild_guid(::google::protobuf::uint64 value) {
  set_changed();
  
  guild_guid_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.guild_guid)
}

// uint64 player_guid = 3;
inline void guild_member_t::clear_player_guid() {
  set_changed();
  player_guid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 guild_member_t::player_guid() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.player_guid)
  return player_guid_;
}
inline void guild_member_t::set_player_guid(::google::protobuf::uint64 value) {
  set_changed();
  
  player_guid_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.player_guid)
}

// int32 player_iocn_id = 4;
inline void guild_member_t::clear_player_iocn_id() {
  set_changed();
  player_iocn_id_ = 0;
}
inline ::google::protobuf::int32 guild_member_t::player_iocn_id() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.player_iocn_id)
  return player_iocn_id_;
}
inline void guild_member_t::set_player_iocn_id(::google::protobuf::int32 value) {
  set_changed();
  
  player_iocn_id_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.player_iocn_id)
}

// string player_name = 5;
inline void guild_member_t::clear_player_name() {
  set_changed();
  player_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& guild_member_t::player_name() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.player_name)
  return player_name_.GetNoArena();
}
inline void guild_member_t::set_player_name(const ::std::string& value) {
  set_changed();
  
  player_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.player_name)
}
#if LANG_CXX11
inline void guild_member_t::set_player_name(::std::string&& value) {
  set_changed();
  
  player_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dhc.guild_member_t.player_name)
}
#endif
inline void guild_member_t::set_player_name(const char* value) {
  set_changed();
  GOOGLE_DCHECK(value != NULL);
  
  player_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dhc.guild_member_t.player_name)
}
inline void guild_member_t::set_player_name(const char* value, size_t size) {
  set_changed();
  
  player_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dhc.guild_member_t.player_name)
}
inline ::std::string* guild_member_t::mutable_player_name() {
  set_changed();
  
  // @@protoc_insertion_point(field_mutable:dhc.guild_member_t.player_name)
  return player_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* guild_member_t::release_player_name() {
  set_changed();
  // @@protoc_insertion_point(field_release:dhc.guild_member_t.player_name)
  
  return player_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void guild_member_t::set_allocated_player_name(::std::string* player_name) {
  set_changed();
  if (player_name != NULL) {
    
  } else {
    
  }
  player_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), player_name);
  // @@protoc_insertion_point(field_set_allocated:dhc.guild_member_t.player_name)
}

// int32 player_level = 6;
inline void guild_member_t::clear_player_level() {
  set_changed();
  player_level_ = 0;
}
inline ::google::protobuf::int32 guild_member_t::player_level() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.player_level)
  return player_level_;
}
inline void guild_member_t::set_player_level(::google::protobuf::int32 value) {
  set_changed();
  
  player_level_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.player_level)
}

// int32 bf = 7;
inline void guild_member_t::clear_bf() {
  set_changed();
  bf_ = 0;
}
inline ::google::protobuf::int32 guild_member_t::bf() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.bf)
  return bf_;
}
inline void guild_member_t::set_bf(::google::protobuf::int32 value) {
  set_changed();
  
  bf_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.bf)
}

// int32 zhiwu = 8;
inline void guild_member_t::clear_zhiwu() {
  set_changed();
  zhiwu_ = 0;
}
inline ::google::protobuf::int32 guild_member_t::zhiwu() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.zhiwu)
  return zhiwu_;
}
inline void guild_member_t::set_zhiwu(::google::protobuf::int32 value) {
  set_changed();
  
  zhiwu_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.zhiwu)
}

// int32 sign_flag = 9;
inline void guild_member_t::clear_sign_flag() {
  set_changed();
  sign_flag_ = 0;
}
inline ::google::protobuf::int32 guild_member_t::sign_flag() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.sign_flag)
  return sign_flag_;
}
inline void guild_member_t::set_sign_flag(::google::protobuf::int32 value) {
  set_changed();
  
  sign_flag_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.sign_flag)
}

// uint64 last_sign_time = 10;
inline void guild_member_t::clear_last_sign_time() {
  set_changed();
  last_sign_time_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 guild_member_t::last_sign_time() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.last_sign_time)
  return last_sign_time_;
}
inline void guild_member_t::set_last_sign_time(::google::protobuf::uint64 value) {
  set_changed();
  
  last_sign_time_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.last_sign_time)
}

// uint64 join_time = 11;
inline void guild_member_t::clear_join_time() {
  set_changed();
  join_time_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 guild_member_t::join_time() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.join_time)
  return join_time_;
}
inline void guild_member_t::set_join_time(::google::protobuf::uint64 value) {
  set_changed();
  
  join_time_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.join_time)
}

// int32 contribution = 12;
inline void guild_member_t::clear_contribution() {
  set_changed();
  contribution_ = 0;
}
inline ::google::protobuf::int32 guild_member_t::contribution() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.contribution)
  return contribution_;
}
inline void guild_member_t::set_contribution(::google::protobuf::int32 value) {
  set_changed();
  
  contribution_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.contribution)
}

// repeated int32 honors = 13;
inline int guild_member_t::honors_size() const {
  return honors_.size();
}
inline void guild_member_t::clear_honors() {
  set_changed();
  honors_.Clear();
}
inline ::google::protobuf::int32 guild_member_t::honors(int index) const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.honors)
  return honors_.Get(index);
}
inline void guild_member_t::set_honors(int index, ::google::protobuf::int32 value) {
  set_changed();
  honors_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.honors)
}
inline void guild_member_t::add_honors(::google::protobuf::int32 value) {
  set_changed();
  honors_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.guild_member_t.honors)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
guild_member_t::honors() const {
  // @@protoc_insertion_point(field_list:dhc.guild_member_t.honors)
  return honors_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
guild_member_t::mutable_honors() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.guild_member_t.honors)
  return &honors_;
}

// int32 mnum = 14;
inline void guild_member_t::clear_mnum() {
  set_changed();
  mnum_ = 0;
}
inline ::google::protobuf::int32 guild_member_t::mnum() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.mnum)
  return mnum_;
}
inline void guild_member_t::set_mnum(::google::protobuf::int32 value) {
  set_changed();
  
  mnum_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.mnum)
}

// int32 mbnum = 15;
inline void guild_member_t::clear_mbnum() {
  set_changed();
  mbnum_ = 0;
}
inline ::google::protobuf::int32 guild_member_t::mbnum() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.mbnum)
  return mbnum_;
}
inline void guild_member_t::set_mbnum(::google::protobuf::int32 value) {
  set_changed();
  
  mbnum_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.mbnum)
}

// uint64 last_mbtime = 16;
inline void guild_member_t::clear_last_mbtime() {
  set_changed();
  last_mbtime_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 guild_member_t::last_mbtime() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.last_mbtime)
  return last_mbtime_;
}
inline void guild_member_t::set_last_mbtime(::google::protobuf::uint64 value) {
  set_changed();
  
  last_mbtime_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.last_mbtime)
}

// repeated int32 mission_rewards = 17;
inline int guild_member_t::mission_rewards_size() const {
  return mission_rewards_.size();
}
inline void guild_member_t::clear_mission_rewards() {
  set_changed();
  mission_rewards_.Clear();
}
inline ::google::protobuf::int32 guild_member_t::mission_rewards(int index) const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.mission_rewards)
  return mission_rewards_.Get(index);
}
inline void guild_member_t::set_mission_rewards(int index, ::google::protobuf::int32 value) {
  set_changed();
  mission_rewards_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.mission_rewards)
}
inline void guild_member_t::add_mission_rewards(::google::protobuf::int32 value) {
  set_changed();
  mission_rewards_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.guild_member_t.mission_rewards)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
guild_member_t::mission_rewards() const {
  // @@protoc_insertion_point(field_list:dhc.guild_member_t.mission_rewards)
  return mission_rewards_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
guild_member_t::mutable_mission_rewards() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.guild_member_t.mission_rewards)
  return &mission_rewards_;
}

// int32 msg_count = 18;
inline void guild_member_t::clear_msg_count() {
  set_changed();
  msg_count_ = 0;
}
inline ::google::protobuf::int32 guild_member_t::msg_count() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.msg_count)
  return msg_count_;
}
inline void guild_member_t::set_msg_count(::google::protobuf::int32 value) {
  set_changed();
  
  msg_count_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.msg_count)
}

// int32 player_vip = 19;
inline void guild_member_t::clear_player_vip() {
  set_changed();
  player_vip_ = 0;
}
inline ::google::protobuf::int32 guild_member_t::player_vip() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.player_vip)
  return player_vip_;
}
inline void guild_member_t::set_player_vip(::google::protobuf::int32 value) {
  set_changed();
  
  player_vip_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.player_vip)
}

// int32 player_achieve = 20;
inline void guild_member_t::clear_player_achieve() {
  set_changed();
  player_achieve_ = 0;
}
inline ::google::protobuf::int32 guild_member_t::player_achieve() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.player_achieve)
  return player_achieve_;
}
inline void guild_member_t::set_player_achieve(::google::protobuf::int32 value) {
  set_changed();
  
  player_achieve_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.player_achieve)
}

// uint64 offline_time = 21;
inline void guild_member_t::clear_offline_time() {
  set_changed();
  offline_time_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 guild_member_t::offline_time() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.offline_time)
  return offline_time_;
}
inline void guild_member_t::set_offline_time(::google::protobuf::uint64 value) {
  set_changed();
  
  offline_time_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.offline_time)
}

// repeated int32 gongpo_rewards = 22;
inline int guild_member_t::gongpo_rewards_size() const {
  return gongpo_rewards_.size();
}
inline void guild_member_t::clear_gongpo_rewards() {
  set_changed();
  gongpo_rewards_.Clear();
}
inline ::google::protobuf::int32 guild_member_t::gongpo_rewards(int index) const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.gongpo_rewards)
  return gongpo_rewards_.Get(index);
}
inline void guild_member_t::set_gongpo_rewards(int index, ::google::protobuf::int32 value) {
  set_changed();
  gongpo_rewards_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.gongpo_rewards)
}
inline void guild_member_t::add_gongpo_rewards(::google::protobuf::int32 value) {
  set_changed();
  gongpo_rewards_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.guild_member_t.gongpo_rewards)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
guild_member_t::gongpo_rewards() const {
  // @@protoc_insertion_point(field_list:dhc.guild_member_t.gongpo_rewards)
  return gongpo_rewards_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
guild_member_t::mutable_gongpo_rewards() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.guild_member_t.gongpo_rewards)
  return &gongpo_rewards_;
}

// int32 map_star = 23;
inline void guild_member_t::clear_map_star() {
  set_changed();
  map_star_ = 0;
}
inline ::google::protobuf::int32 guild_member_t::map_star() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.map_star)
  return map_star_;
}
inline void guild_member_t::set_map_star(::google::protobuf::int32 value) {
  set_changed();
  
  map_star_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.map_star)
}

// int32 nalflag = 24;
inline void guild_member_t::clear_nalflag() {
  set_changed();
  nalflag_ = 0;
}
inline ::google::protobuf::int32 guild_member_t::nalflag() const {
  // @@protoc_insertion_point(field_get:dhc.guild_member_t.nalflag)
  return nalflag_;
}
inline void guild_member_t::set_nalflag(::google::protobuf::int32 value) {
  set_changed();
  
  nalflag_ = value;
  // @@protoc_insertion_point(field_set:dhc.guild_member_t.nalflag)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace dhc

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_guild_5fmember_2eeproto

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: global.eproto

#ifndef PROTOBUF_INCLUDED_global_2eeproto
#define PROTOBUF_INCLUDED_global_2eeproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_global_2eeproto 

namespace protobuf_global_2eeproto {
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
}  // namespace protobuf_global_2eeproto
namespace dhc {
class global_t;
class global_tDefaultTypeInternal;
extern global_tDefaultTypeInternal _global_t_default_instance_;
}  // namespace dhc
namespace google {
namespace protobuf {
template<> ::dhc::global_t* Arena::CreateMaybeMessage<::dhc::global_t>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace dhc {

// ===================================================================

class global_t : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dhc.global_t) */ {
 public:
  global_t();
  virtual ~global_t();

  global_t(const global_t& from);

  inline global_t& operator=(const global_t& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  global_t(global_t&& from) noexcept
    : global_t() {
    *this = ::std::move(from);
  }

  inline global_t& operator=(global_t&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const global_t& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const global_t* internal_default_instance() {
    return reinterpret_cast<const global_t*>(
               &_global_t_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(global_t* other);
  friend void swap(global_t& a, global_t& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline global_t* New() const final {
    return CreateMaybeMessage<global_t>(NULL);
  }

  global_t* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<global_t>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const global_t& from);
  void MergeFrom(const global_t& from);
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
  void InternalSwap(global_t* other);
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

  // repeated int32 huodong_ids = 2;
  int huodong_ids_size() const;
  void clear_huodong_ids();
  static const int kHuodongIdsFieldNumber = 2;
  ::google::protobuf::int32 huodong_ids(int index) const;
  void set_huodong_ids(int index, ::google::protobuf::int32 value);
  void add_huodong_ids(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      huodong_ids() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_huodong_ids();

  // repeated uint64 huodong_start_times = 3;
  int huodong_start_times_size() const;
  void clear_huodong_start_times();
  static const int kHuodongStartTimesFieldNumber = 3;
  ::google::protobuf::uint64 huodong_start_times(int index) const;
  void set_huodong_start_times(int index, ::google::protobuf::uint64 value);
  void add_huodong_start_times(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      huodong_start_times() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_huodong_start_times();

  // repeated uint64 huodong_end_times = 4;
  int huodong_end_times_size() const;
  void clear_huodong_end_times();
  static const int kHuodongEndTimesFieldNumber = 4;
  ::google::protobuf::uint64 huodong_end_times(int index) const;
  void set_huodong_end_times(int index, ::google::protobuf::uint64 value);
  void add_huodong_end_times(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      huodong_end_times() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_huodong_end_times();

  // repeated int32 pttq_vip_id = 6;
  int pttq_vip_id_size() const;
  void clear_pttq_vip_id();
  static const int kPttqVipIdFieldNumber = 6;
  ::google::protobuf::int32 pttq_vip_id(int index) const;
  void set_pttq_vip_id(int index, ::google::protobuf::int32 value);
  void add_pttq_vip_id(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      pttq_vip_id() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_pttq_vip_id();

  // repeated string pttq_player_name = 7;
  int pttq_player_name_size() const;
  void clear_pttq_player_name();
  static const int kPttqPlayerNameFieldNumber = 7;
  const ::std::string& pttq_player_name(int index) const;
  ::std::string* mutable_pttq_player_name(int index);
  void set_pttq_player_name(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_pttq_player_name(int index, ::std::string&& value);
  #endif
  void set_pttq_player_name(int index, const char* value);
  void set_pttq_player_name(int index, const char* value, size_t size);
  ::std::string* add_pttq_player_name();
  void add_pttq_player_name(const ::std::string& value);
  #if LANG_CXX11
  void add_pttq_player_name(::std::string&& value);
  #endif
  void add_pttq_player_name(const char* value);
  void add_pttq_player_name(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& pttq_player_name() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_pttq_player_name();

  // repeated int32 kaifu_xg_id = 8;
  int kaifu_xg_id_size() const;
  void clear_kaifu_xg_id();
  static const int kKaifuXgIdFieldNumber = 8;
  ::google::protobuf::int32 kaifu_xg_id(int index) const;
  void set_kaifu_xg_id(int index, ::google::protobuf::int32 value);
  void add_kaifu_xg_id(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      kaifu_xg_id() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_kaifu_xg_id();

  // repeated int32 kaifu_xg_count = 9;
  int kaifu_xg_count_size() const;
  void clear_kaifu_xg_count();
  static const int kKaifuXgCountFieldNumber = 9;
  ::google::protobuf::int32 kaifu_xg_count(int index) const;
  void set_kaifu_xg_count(int index, ::google::protobuf::int32 value);
  void add_kaifu_xg_count(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      kaifu_xg_count() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_kaifu_xg_count();

  // repeated string zzs_rank_names = 10;
  int zzs_rank_names_size() const;
  void clear_zzs_rank_names();
  static const int kZzsRankNamesFieldNumber = 10;
  const ::std::string& zzs_rank_names(int index) const;
  ::std::string* mutable_zzs_rank_names(int index);
  void set_zzs_rank_names(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_zzs_rank_names(int index, ::std::string&& value);
  #endif
  void set_zzs_rank_names(int index, const char* value);
  void set_zzs_rank_names(int index, const char* value, size_t size);
  ::std::string* add_zzs_rank_names();
  void add_zzs_rank_names(const ::std::string& value);
  #if LANG_CXX11
  void add_zzs_rank_names(::std::string&& value);
  #endif
  void add_zzs_rank_names(const char* value);
  void add_zzs_rank_names(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& zzs_rank_names() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_zzs_rank_names();

  // repeated int32 zzs_rank_jewel = 11;
  int zzs_rank_jewel_size() const;
  void clear_zzs_rank_jewel();
  static const int kZzsRankJewelFieldNumber = 11;
  ::google::protobuf::int32 zzs_rank_jewel(int index) const;
  void set_zzs_rank_jewel(int index, ::google::protobuf::int32 value);
  void add_zzs_rank_jewel(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      zzs_rank_jewel() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_zzs_rank_jewel();

  // repeated uint64 guild_pvp_ranks = 23;
  int guild_pvp_ranks_size() const;
  void clear_guild_pvp_ranks();
  static const int kGuildPvpRanksFieldNumber = 23;
  ::google::protobuf::uint64 guild_pvp_ranks(int index) const;
  void set_guild_pvp_ranks(int index, ::google::protobuf::uint64 value);
  void add_guild_pvp_ranks(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      guild_pvp_ranks() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_guild_pvp_ranks();

  // uint64 guid = 1;
  void clear_guid();
  static const int kGuidFieldNumber = 1;
  ::google::protobuf::uint64 guid() const;
  void set_guid(::google::protobuf::uint64 value);

  // int32 huodong_count = 5;
  void clear_huodong_count();
  static const int kHuodongCountFieldNumber = 5;
  ::google::protobuf::int32 huodong_count() const;
  void set_huodong_count(::google::protobuf::int32 value);

  // int32 czjh_count = 20;
  void clear_czjh_count();
  static const int kCzjhCountFieldNumber = 20;
  ::google::protobuf::int32 czjh_count() const;
  void set_czjh_count(::google::protobuf::int32 value);

  // uint64 ore_rank_time = 18;
  void clear_ore_rank_time();
  static const int kOreRankTimeFieldNumber = 18;
  ::google::protobuf::uint64 ore_rank_time() const;
  void set_ore_rank_time(::google::protobuf::uint64 value);

  // uint64 guild_refresh_time = 19;
  void clear_guild_refresh_time();
  static const int kGuildRefreshTimeFieldNumber = 19;
  ::google::protobuf::uint64 guild_refresh_time() const;
  void set_guild_refresh_time(::google::protobuf::uint64 value);

  // int32 guild_pvp_zhou = 21;
  void clear_guild_pvp_zhou();
  static const int kGuildPvpZhouFieldNumber = 21;
  ::google::protobuf::int32 guild_pvp_zhou() const;
  void set_guild_pvp_zhou(::google::protobuf::int32 value);

  // int32 guild_pvp_suc = 22;
  void clear_guild_pvp_suc();
  static const int kGuildPvpSucFieldNumber = 22;
  ::google::protobuf::int32 guild_pvp_suc() const;
  void set_guild_pvp_suc(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:dhc.global_t)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > huodong_ids_;
  mutable int _huodong_ids_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > huodong_start_times_;
  mutable int _huodong_start_times_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > huodong_end_times_;
  mutable int _huodong_end_times_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > pttq_vip_id_;
  mutable int _pttq_vip_id_cached_byte_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> pttq_player_name_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > kaifu_xg_id_;
  mutable int _kaifu_xg_id_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > kaifu_xg_count_;
  mutable int _kaifu_xg_count_cached_byte_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> zzs_rank_names_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > zzs_rank_jewel_;
  mutable int _zzs_rank_jewel_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > guild_pvp_ranks_;
  mutable int _guild_pvp_ranks_cached_byte_size_;
  ::google::protobuf::uint64 guid_;
  ::google::protobuf::int32 huodong_count_;
  ::google::protobuf::int32 czjh_count_;
  ::google::protobuf::uint64 ore_rank_time_;
  ::google::protobuf::uint64 guild_refresh_time_;
  ::google::protobuf::int32 guild_pvp_zhou_;
  ::google::protobuf::int32 guild_pvp_suc_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_global_2eeproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// global_t

// uint64 guid = 1;
inline void global_t::clear_guid() {
  set_changed();
  guid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 global_t::guid() const {
  // @@protoc_insertion_point(field_get:dhc.global_t.guid)
  return guid_;
}
inline void global_t::set_guid(::google::protobuf::uint64 value) {
  set_changed();
  
  guid_ = value;
  // @@protoc_insertion_point(field_set:dhc.global_t.guid)
}

// repeated int32 huodong_ids = 2;
inline int global_t::huodong_ids_size() const {
  return huodong_ids_.size();
}
inline void global_t::clear_huodong_ids() {
  set_changed();
  huodong_ids_.Clear();
}
inline ::google::protobuf::int32 global_t::huodong_ids(int index) const {
  // @@protoc_insertion_point(field_get:dhc.global_t.huodong_ids)
  return huodong_ids_.Get(index);
}
inline void global_t::set_huodong_ids(int index, ::google::protobuf::int32 value) {
  set_changed();
  huodong_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.global_t.huodong_ids)
}
inline void global_t::add_huodong_ids(::google::protobuf::int32 value) {
  set_changed();
  huodong_ids_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.global_t.huodong_ids)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
global_t::huodong_ids() const {
  // @@protoc_insertion_point(field_list:dhc.global_t.huodong_ids)
  return huodong_ids_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
global_t::mutable_huodong_ids() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.global_t.huodong_ids)
  return &huodong_ids_;
}

// repeated uint64 huodong_start_times = 3;
inline int global_t::huodong_start_times_size() const {
  return huodong_start_times_.size();
}
inline void global_t::clear_huodong_start_times() {
  set_changed();
  huodong_start_times_.Clear();
}
inline ::google::protobuf::uint64 global_t::huodong_start_times(int index) const {
  // @@protoc_insertion_point(field_get:dhc.global_t.huodong_start_times)
  return huodong_start_times_.Get(index);
}
inline void global_t::set_huodong_start_times(int index, ::google::protobuf::uint64 value) {
  set_changed();
  huodong_start_times_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.global_t.huodong_start_times)
}
inline void global_t::add_huodong_start_times(::google::protobuf::uint64 value) {
  set_changed();
  huodong_start_times_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.global_t.huodong_start_times)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
global_t::huodong_start_times() const {
  // @@protoc_insertion_point(field_list:dhc.global_t.huodong_start_times)
  return huodong_start_times_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
global_t::mutable_huodong_start_times() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.global_t.huodong_start_times)
  return &huodong_start_times_;
}

// repeated uint64 huodong_end_times = 4;
inline int global_t::huodong_end_times_size() const {
  return huodong_end_times_.size();
}
inline void global_t::clear_huodong_end_times() {
  set_changed();
  huodong_end_times_.Clear();
}
inline ::google::protobuf::uint64 global_t::huodong_end_times(int index) const {
  // @@protoc_insertion_point(field_get:dhc.global_t.huodong_end_times)
  return huodong_end_times_.Get(index);
}
inline void global_t::set_huodong_end_times(int index, ::google::protobuf::uint64 value) {
  set_changed();
  huodong_end_times_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.global_t.huodong_end_times)
}
inline void global_t::add_huodong_end_times(::google::protobuf::uint64 value) {
  set_changed();
  huodong_end_times_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.global_t.huodong_end_times)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
global_t::huodong_end_times() const {
  // @@protoc_insertion_point(field_list:dhc.global_t.huodong_end_times)
  return huodong_end_times_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
global_t::mutable_huodong_end_times() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.global_t.huodong_end_times)
  return &huodong_end_times_;
}

// int32 huodong_count = 5;
inline void global_t::clear_huodong_count() {
  set_changed();
  huodong_count_ = 0;
}
inline ::google::protobuf::int32 global_t::huodong_count() const {
  // @@protoc_insertion_point(field_get:dhc.global_t.huodong_count)
  return huodong_count_;
}
inline void global_t::set_huodong_count(::google::protobuf::int32 value) {
  set_changed();
  
  huodong_count_ = value;
  // @@protoc_insertion_point(field_set:dhc.global_t.huodong_count)
}

// repeated int32 pttq_vip_id = 6;
inline int global_t::pttq_vip_id_size() const {
  return pttq_vip_id_.size();
}
inline void global_t::clear_pttq_vip_id() {
  set_changed();
  pttq_vip_id_.Clear();
}
inline ::google::protobuf::int32 global_t::pttq_vip_id(int index) const {
  // @@protoc_insertion_point(field_get:dhc.global_t.pttq_vip_id)
  return pttq_vip_id_.Get(index);
}
inline void global_t::set_pttq_vip_id(int index, ::google::protobuf::int32 value) {
  set_changed();
  pttq_vip_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.global_t.pttq_vip_id)
}
inline void global_t::add_pttq_vip_id(::google::protobuf::int32 value) {
  set_changed();
  pttq_vip_id_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.global_t.pttq_vip_id)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
global_t::pttq_vip_id() const {
  // @@protoc_insertion_point(field_list:dhc.global_t.pttq_vip_id)
  return pttq_vip_id_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
global_t::mutable_pttq_vip_id() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.global_t.pttq_vip_id)
  return &pttq_vip_id_;
}

// repeated string pttq_player_name = 7;
inline int global_t::pttq_player_name_size() const {
  return pttq_player_name_.size();
}
inline void global_t::clear_pttq_player_name() {
  set_changed();
  pttq_player_name_.Clear();
}
inline const ::std::string& global_t::pttq_player_name(int index) const {
  // @@protoc_insertion_point(field_get:dhc.global_t.pttq_player_name)
  return pttq_player_name_.Get(index);
}
inline ::std::string* global_t::mutable_pttq_player_name(int index) {
  set_changed();
  // @@protoc_insertion_point(field_mutable:dhc.global_t.pttq_player_name)
  return pttq_player_name_.Mutable(index);
}
inline void global_t::set_pttq_player_name(int index, const ::std::string& value) {
  set_changed();
  // @@protoc_insertion_point(field_set:dhc.global_t.pttq_player_name)
  pttq_player_name_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void global_t::set_pttq_player_name(int index, ::std::string&& value) {
  set_changed();
  // @@protoc_insertion_point(field_set:dhc.global_t.pttq_player_name)
  pttq_player_name_.Mutable(index)->assign(std::move(value));
}
#endif
inline void global_t::set_pttq_player_name(int index, const char* value) {
  set_changed();
  GOOGLE_DCHECK(value != NULL);
  pttq_player_name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:dhc.global_t.pttq_player_name)
}
inline void global_t::set_pttq_player_name(int index, const char* value, size_t size) {
  set_changed();
  pttq_player_name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:dhc.global_t.pttq_player_name)
}
inline ::std::string* global_t::add_pttq_player_name() {
  set_changed();
  // @@protoc_insertion_point(field_add_mutable:dhc.global_t.pttq_player_name)
  return pttq_player_name_.Add();
}
inline void global_t::add_pttq_player_name(const ::std::string& value) {
  set_changed();
  pttq_player_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:dhc.global_t.pttq_player_name)
}
#if LANG_CXX11
inline void global_t::add_pttq_player_name(::std::string&& value) {
  set_changed();
  pttq_player_name_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:dhc.global_t.pttq_player_name)
}
#endif
inline void global_t::add_pttq_player_name(const char* value) {
  set_changed();
  GOOGLE_DCHECK(value != NULL);
  pttq_player_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:dhc.global_t.pttq_player_name)
}
inline void global_t::add_pttq_player_name(const char* value, size_t size) {
  set_changed();
  pttq_player_name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:dhc.global_t.pttq_player_name)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
global_t::pttq_player_name() const {
  // @@protoc_insertion_point(field_list:dhc.global_t.pttq_player_name)
  return pttq_player_name_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
global_t::mutable_pttq_player_name() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.global_t.pttq_player_name)
  return &pttq_player_name_;
}

// repeated int32 kaifu_xg_id = 8;
inline int global_t::kaifu_xg_id_size() const {
  return kaifu_xg_id_.size();
}
inline void global_t::clear_kaifu_xg_id() {
  set_changed();
  kaifu_xg_id_.Clear();
}
inline ::google::protobuf::int32 global_t::kaifu_xg_id(int index) const {
  // @@protoc_insertion_point(field_get:dhc.global_t.kaifu_xg_id)
  return kaifu_xg_id_.Get(index);
}
inline void global_t::set_kaifu_xg_id(int index, ::google::protobuf::int32 value) {
  set_changed();
  kaifu_xg_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.global_t.kaifu_xg_id)
}
inline void global_t::add_kaifu_xg_id(::google::protobuf::int32 value) {
  set_changed();
  kaifu_xg_id_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.global_t.kaifu_xg_id)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
global_t::kaifu_xg_id() const {
  // @@protoc_insertion_point(field_list:dhc.global_t.kaifu_xg_id)
  return kaifu_xg_id_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
global_t::mutable_kaifu_xg_id() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.global_t.kaifu_xg_id)
  return &kaifu_xg_id_;
}

// repeated int32 kaifu_xg_count = 9;
inline int global_t::kaifu_xg_count_size() const {
  return kaifu_xg_count_.size();
}
inline void global_t::clear_kaifu_xg_count() {
  set_changed();
  kaifu_xg_count_.Clear();
}
inline ::google::protobuf::int32 global_t::kaifu_xg_count(int index) const {
  // @@protoc_insertion_point(field_get:dhc.global_t.kaifu_xg_count)
  return kaifu_xg_count_.Get(index);
}
inline void global_t::set_kaifu_xg_count(int index, ::google::protobuf::int32 value) {
  set_changed();
  kaifu_xg_count_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.global_t.kaifu_xg_count)
}
inline void global_t::add_kaifu_xg_count(::google::protobuf::int32 value) {
  set_changed();
  kaifu_xg_count_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.global_t.kaifu_xg_count)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
global_t::kaifu_xg_count() const {
  // @@protoc_insertion_point(field_list:dhc.global_t.kaifu_xg_count)
  return kaifu_xg_count_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
global_t::mutable_kaifu_xg_count() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.global_t.kaifu_xg_count)
  return &kaifu_xg_count_;
}

// repeated string zzs_rank_names = 10;
inline int global_t::zzs_rank_names_size() const {
  return zzs_rank_names_.size();
}
inline void global_t::clear_zzs_rank_names() {
  set_changed();
  zzs_rank_names_.Clear();
}
inline const ::std::string& global_t::zzs_rank_names(int index) const {
  // @@protoc_insertion_point(field_get:dhc.global_t.zzs_rank_names)
  return zzs_rank_names_.Get(index);
}
inline ::std::string* global_t::mutable_zzs_rank_names(int index) {
  set_changed();
  // @@protoc_insertion_point(field_mutable:dhc.global_t.zzs_rank_names)
  return zzs_rank_names_.Mutable(index);
}
inline void global_t::set_zzs_rank_names(int index, const ::std::string& value) {
  set_changed();
  // @@protoc_insertion_point(field_set:dhc.global_t.zzs_rank_names)
  zzs_rank_names_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void global_t::set_zzs_rank_names(int index, ::std::string&& value) {
  set_changed();
  // @@protoc_insertion_point(field_set:dhc.global_t.zzs_rank_names)
  zzs_rank_names_.Mutable(index)->assign(std::move(value));
}
#endif
inline void global_t::set_zzs_rank_names(int index, const char* value) {
  set_changed();
  GOOGLE_DCHECK(value != NULL);
  zzs_rank_names_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:dhc.global_t.zzs_rank_names)
}
inline void global_t::set_zzs_rank_names(int index, const char* value, size_t size) {
  set_changed();
  zzs_rank_names_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:dhc.global_t.zzs_rank_names)
}
inline ::std::string* global_t::add_zzs_rank_names() {
  set_changed();
  // @@protoc_insertion_point(field_add_mutable:dhc.global_t.zzs_rank_names)
  return zzs_rank_names_.Add();
}
inline void global_t::add_zzs_rank_names(const ::std::string& value) {
  set_changed();
  zzs_rank_names_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:dhc.global_t.zzs_rank_names)
}
#if LANG_CXX11
inline void global_t::add_zzs_rank_names(::std::string&& value) {
  set_changed();
  zzs_rank_names_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:dhc.global_t.zzs_rank_names)
}
#endif
inline void global_t::add_zzs_rank_names(const char* value) {
  set_changed();
  GOOGLE_DCHECK(value != NULL);
  zzs_rank_names_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:dhc.global_t.zzs_rank_names)
}
inline void global_t::add_zzs_rank_names(const char* value, size_t size) {
  set_changed();
  zzs_rank_names_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:dhc.global_t.zzs_rank_names)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
global_t::zzs_rank_names() const {
  // @@protoc_insertion_point(field_list:dhc.global_t.zzs_rank_names)
  return zzs_rank_names_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
global_t::mutable_zzs_rank_names() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.global_t.zzs_rank_names)
  return &zzs_rank_names_;
}

// repeated int32 zzs_rank_jewel = 11;
inline int global_t::zzs_rank_jewel_size() const {
  return zzs_rank_jewel_.size();
}
inline void global_t::clear_zzs_rank_jewel() {
  set_changed();
  zzs_rank_jewel_.Clear();
}
inline ::google::protobuf::int32 global_t::zzs_rank_jewel(int index) const {
  // @@protoc_insertion_point(field_get:dhc.global_t.zzs_rank_jewel)
  return zzs_rank_jewel_.Get(index);
}
inline void global_t::set_zzs_rank_jewel(int index, ::google::protobuf::int32 value) {
  set_changed();
  zzs_rank_jewel_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.global_t.zzs_rank_jewel)
}
inline void global_t::add_zzs_rank_jewel(::google::protobuf::int32 value) {
  set_changed();
  zzs_rank_jewel_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.global_t.zzs_rank_jewel)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
global_t::zzs_rank_jewel() const {
  // @@protoc_insertion_point(field_list:dhc.global_t.zzs_rank_jewel)
  return zzs_rank_jewel_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
global_t::mutable_zzs_rank_jewel() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.global_t.zzs_rank_jewel)
  return &zzs_rank_jewel_;
}

// uint64 ore_rank_time = 18;
inline void global_t::clear_ore_rank_time() {
  set_changed();
  ore_rank_time_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 global_t::ore_rank_time() const {
  // @@protoc_insertion_point(field_get:dhc.global_t.ore_rank_time)
  return ore_rank_time_;
}
inline void global_t::set_ore_rank_time(::google::protobuf::uint64 value) {
  set_changed();
  
  ore_rank_time_ = value;
  // @@protoc_insertion_point(field_set:dhc.global_t.ore_rank_time)
}

// uint64 guild_refresh_time = 19;
inline void global_t::clear_guild_refresh_time() {
  set_changed();
  guild_refresh_time_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 global_t::guild_refresh_time() const {
  // @@protoc_insertion_point(field_get:dhc.global_t.guild_refresh_time)
  return guild_refresh_time_;
}
inline void global_t::set_guild_refresh_time(::google::protobuf::uint64 value) {
  set_changed();
  
  guild_refresh_time_ = value;
  // @@protoc_insertion_point(field_set:dhc.global_t.guild_refresh_time)
}

// int32 czjh_count = 20;
inline void global_t::clear_czjh_count() {
  set_changed();
  czjh_count_ = 0;
}
inline ::google::protobuf::int32 global_t::czjh_count() const {
  // @@protoc_insertion_point(field_get:dhc.global_t.czjh_count)
  return czjh_count_;
}
inline void global_t::set_czjh_count(::google::protobuf::int32 value) {
  set_changed();
  
  czjh_count_ = value;
  // @@protoc_insertion_point(field_set:dhc.global_t.czjh_count)
}

// int32 guild_pvp_zhou = 21;
inline void global_t::clear_guild_pvp_zhou() {
  set_changed();
  guild_pvp_zhou_ = 0;
}
inline ::google::protobuf::int32 global_t::guild_pvp_zhou() const {
  // @@protoc_insertion_point(field_get:dhc.global_t.guild_pvp_zhou)
  return guild_pvp_zhou_;
}
inline void global_t::set_guild_pvp_zhou(::google::protobuf::int32 value) {
  set_changed();
  
  guild_pvp_zhou_ = value;
  // @@protoc_insertion_point(field_set:dhc.global_t.guild_pvp_zhou)
}

// int32 guild_pvp_suc = 22;
inline void global_t::clear_guild_pvp_suc() {
  set_changed();
  guild_pvp_suc_ = 0;
}
inline ::google::protobuf::int32 global_t::guild_pvp_suc() const {
  // @@protoc_insertion_point(field_get:dhc.global_t.guild_pvp_suc)
  return guild_pvp_suc_;
}
inline void global_t::set_guild_pvp_suc(::google::protobuf::int32 value) {
  set_changed();
  
  guild_pvp_suc_ = value;
  // @@protoc_insertion_point(field_set:dhc.global_t.guild_pvp_suc)
}

// repeated uint64 guild_pvp_ranks = 23;
inline int global_t::guild_pvp_ranks_size() const {
  return guild_pvp_ranks_.size();
}
inline void global_t::clear_guild_pvp_ranks() {
  set_changed();
  guild_pvp_ranks_.Clear();
}
inline ::google::protobuf::uint64 global_t::guild_pvp_ranks(int index) const {
  // @@protoc_insertion_point(field_get:dhc.global_t.guild_pvp_ranks)
  return guild_pvp_ranks_.Get(index);
}
inline void global_t::set_guild_pvp_ranks(int index, ::google::protobuf::uint64 value) {
  set_changed();
  guild_pvp_ranks_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.global_t.guild_pvp_ranks)
}
inline void global_t::add_guild_pvp_ranks(::google::protobuf::uint64 value) {
  set_changed();
  guild_pvp_ranks_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.global_t.guild_pvp_ranks)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
global_t::guild_pvp_ranks() const {
  // @@protoc_insertion_point(field_list:dhc.global_t.guild_pvp_ranks)
  return guild_pvp_ranks_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
global_t::mutable_guild_pvp_ranks() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.global_t.guild_pvp_ranks)
  return &guild_pvp_ranks_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace dhc

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_global_2eeproto

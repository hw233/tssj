// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pet.eproto

#include "pet.eproto.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace dhc {
class pet_tDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<pet_t>
      _instance;
} _pet_t_default_instance_;
}  // namespace dhc
namespace protobuf_pet_2eeproto {
static void InitDefaultspet_t() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::dhc::_pet_t_default_instance_;
    new (ptr) ::dhc::pet_t();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::dhc::pet_t::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_pet_t =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultspet_t}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_pet_t.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::pet_t, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::pet_t, guid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::pet_t, player_guid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::pet_t, role_guid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::pet_t, template_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::pet_t, level_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::pet_t, jinjie_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::pet_t, star_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::pet_t, exp_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::pet_t, jinjie_slot_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::dhc::pet_t)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::dhc::_pet_t_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "pet.eproto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\npet.eproto\022\003dhc\"\241\001\n\005pet_t\022\014\n\004guid\030\001 \001("
      "\004\022\023\n\013player_guid\030\002 \001(\004\022\021\n\trole_guid\030\003 \001("
      "\004\022\023\n\013template_id\030\004 \001(\005\022\r\n\005level\030\005 \001(\005\022\016\n"
      "\006jinjie\030\006 \001(\005\022\014\n\004star\030\007 \001(\005\022\013\n\003exp\030\010 \001(\005"
      "\022\023\n\013jinjie_slot\030\t \003(\005b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 189);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "pet.eproto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_pet_2eeproto
namespace dhc {

// ===================================================================

void pet_t::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int pet_t::kGuidFieldNumber;
const int pet_t::kPlayerGuidFieldNumber;
const int pet_t::kRoleGuidFieldNumber;
const int pet_t::kTemplateIdFieldNumber;
const int pet_t::kLevelFieldNumber;
const int pet_t::kJinjieFieldNumber;
const int pet_t::kStarFieldNumber;
const int pet_t::kExpFieldNumber;
const int pet_t::kJinjieSlotFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

pet_t::pet_t()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_pet_2eeproto::scc_info_pet_t.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:dhc.pet_t)
}
pet_t::pet_t(const pet_t& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      jinjie_slot_(from.jinjie_slot_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&guid_, &from.guid_,
    static_cast<size_t>(reinterpret_cast<char*>(&exp_) -
    reinterpret_cast<char*>(&guid_)) + sizeof(exp_));
  // @@protoc_insertion_point(copy_constructor:dhc.pet_t)
}

void pet_t::SharedCtor() {
  ::memset(&guid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&exp_) -
      reinterpret_cast<char*>(&guid_)) + sizeof(exp_));
}

pet_t::~pet_t() {
  // @@protoc_insertion_point(destructor:dhc.pet_t)
  SharedDtor();
}

void pet_t::SharedDtor() {
}

void pet_t::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* pet_t::descriptor() {
  ::protobuf_pet_2eeproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_pet_2eeproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const pet_t& pet_t::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_pet_2eeproto::scc_info_pet_t.base);
  return *internal_default_instance();
}


void pet_t::Clear() {
// @@protoc_insertion_point(message_clear_start:dhc.pet_t)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  set_changed();
  jinjie_slot_.Clear();
  ::memset(&guid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&exp_) -
      reinterpret_cast<char*>(&guid_)) + sizeof(exp_));
  _internal_metadata_.Clear();
}

bool pet_t::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dhc.pet_t)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 guid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 player_guid = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &player_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 role_guid = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &role_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 template_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &template_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 level = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 jinjie = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &jinjie_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 star = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &star_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 exp = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &exp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated int32 jinjie_slot = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_jinjie_slot())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 74u, input, this->mutable_jinjie_slot())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:dhc.pet_t)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dhc.pet_t)
  return false;
#undef DO_
}

void pet_t::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dhc.pet_t)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 guid = 1;
  if (this->guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->guid(), output);
  }

  // uint64 player_guid = 2;
  if (this->player_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->player_guid(), output);
  }

  // uint64 role_guid = 3;
  if (this->role_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->role_guid(), output);
  }

  // int32 template_id = 4;
  if (this->template_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->template_id(), output);
  }

  // int32 level = 5;
  if (this->level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->level(), output);
  }

  // int32 jinjie = 6;
  if (this->jinjie() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->jinjie(), output);
  }

  // int32 star = 7;
  if (this->star() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->star(), output);
  }

  // int32 exp = 8;
  if (this->exp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->exp(), output);
  }

  // repeated int32 jinjie_slot = 9;
  if (this->jinjie_slot_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(9, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _jinjie_slot_cached_byte_size_));
  }
  for (int i = 0, n = this->jinjie_slot_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->jinjie_slot(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:dhc.pet_t)
}

::google::protobuf::uint8* pet_t::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:dhc.pet_t)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 guid = 1;
  if (this->guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->guid(), target);
  }

  // uint64 player_guid = 2;
  if (this->player_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->player_guid(), target);
  }

  // uint64 role_guid = 3;
  if (this->role_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->role_guid(), target);
  }

  // int32 template_id = 4;
  if (this->template_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->template_id(), target);
  }

  // int32 level = 5;
  if (this->level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->level(), target);
  }

  // int32 jinjie = 6;
  if (this->jinjie() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->jinjie(), target);
  }

  // int32 star = 7;
  if (this->star() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->star(), target);
  }

  // int32 exp = 8;
  if (this->exp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->exp(), target);
  }

  // repeated int32 jinjie_slot = 9;
  if (this->jinjie_slot_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      9,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _jinjie_slot_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->jinjie_slot_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dhc.pet_t)
  return target;
}

size_t pet_t::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dhc.pet_t)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated int32 jinjie_slot = 9;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->jinjie_slot_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _jinjie_slot_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint64 guid = 1;
  if (this->guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->guid());
  }

  // uint64 player_guid = 2;
  if (this->player_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->player_guid());
  }

  // uint64 role_guid = 3;
  if (this->role_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->role_guid());
  }

  // int32 template_id = 4;
  if (this->template_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->template_id());
  }

  // int32 level = 5;
  if (this->level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->level());
  }

  // int32 jinjie = 6;
  if (this->jinjie() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->jinjie());
  }

  // int32 star = 7;
  if (this->star() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->star());
  }

  // int32 exp = 8;
  if (this->exp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->exp());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void pet_t::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dhc.pet_t)
  GOOGLE_DCHECK_NE(&from, this);
  const pet_t* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const pet_t>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dhc.pet_t)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dhc.pet_t)
    MergeFrom(*source);
  }
}

void pet_t::MergeFrom(const pet_t& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dhc.pet_t)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  jinjie_slot_.MergeFrom(from.jinjie_slot_);
  if (from.guid() != 0) {
    set_guid(from.guid());
  }
  if (from.player_guid() != 0) {
    set_player_guid(from.player_guid());
  }
  if (from.role_guid() != 0) {
    set_role_guid(from.role_guid());
  }
  if (from.template_id() != 0) {
    set_template_id(from.template_id());
  }
  if (from.level() != 0) {
    set_level(from.level());
  }
  if (from.jinjie() != 0) {
    set_jinjie(from.jinjie());
  }
  if (from.star() != 0) {
    set_star(from.star());
  }
  if (from.exp() != 0) {
    set_exp(from.exp());
  }
}

void pet_t::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dhc.pet_t)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void pet_t::CopyFrom(const pet_t& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dhc.pet_t)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool pet_t::IsInitialized() const {
  return true;
}

void pet_t::Swap(pet_t* other) {
  if (other == this) return;
  InternalSwap(other);
}
void pet_t::InternalSwap(pet_t* other) {
  using std::swap;
  jinjie_slot_.InternalSwap(&other->jinjie_slot_);
  swap(guid_, other->guid_);
  swap(player_guid_, other->player_guid_);
  swap(role_guid_, other->role_guid_);
  swap(template_id_, other->template_id_);
  swap(level_, other->level_);
  swap(jinjie_, other->jinjie_);
  swap(star_, other->star_);
  swap(exp_, other->exp_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata pet_t::GetMetadata() const {
  protobuf_pet_2eeproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_pet_2eeproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace dhc
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::dhc::pet_t* Arena::CreateMaybeMessage< ::dhc::pet_t >(Arena* arena) {
  return Arena::CreateInternal< ::dhc::pet_t >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

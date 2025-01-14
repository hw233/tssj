// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rob_t.eproto

#include "rob_t.eproto.pb.h"

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
class rob_tDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<rob_t>
      _instance;
} _rob_t_default_instance_;
}  // namespace dhc
namespace protobuf_rob_5ft_2eeproto {
static void InitDefaultsrob_t() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::dhc::_rob_t_default_instance_;
    new (ptr) ::dhc::rob_t();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::dhc::rob_t::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_rob_t =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsrob_t}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_rob_t.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::rob_t, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::rob_t, guid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::rob_t, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::rob_t, username_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::rob_t, serverid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::rob_t, extra_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::rob_t, gm_level_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::rob_t, fenghao_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::rob_t, device_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::rob_t, version_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::rob_t, last_device_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::rob_t, last_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::dhc::rob_t, gag_time_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::dhc::rob_t)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::dhc::_rob_t_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "rob_t.eproto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\014rob_t.eproto\022\003dhc\"\331\001\n\005rob_t\022\014\n\004guid\030\001 "
      "\001(\004\022\014\n\004type\030\002 \001(\005\022\020\n\010username\030\003 \001(\t\022\020\n\010s"
      "erverid\030\004 \001(\t\022\r\n\005extra\030\005 \001(\t\022\020\n\010gm_level"
      "\030\006 \001(\005\022\024\n\014fenghao_time\030\007 \001(\004\022\016\n\006device\030\010"
      " \001(\t\022\017\n\007version\030\t \001(\005\022\023\n\013last_device\030\n \001"
      "(\t\022\021\n\tlast_time\030\013 \001(\004\022\020\n\010gag_time\030\014 \001(\004b"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 247);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rob_t.eproto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_rob_5ft_2eeproto
namespace dhc {

// ===================================================================

void rob_t::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int rob_t::kGuidFieldNumber;
const int rob_t::kTypeFieldNumber;
const int rob_t::kUsernameFieldNumber;
const int rob_t::kServeridFieldNumber;
const int rob_t::kExtraFieldNumber;
const int rob_t::kGmLevelFieldNumber;
const int rob_t::kFenghaoTimeFieldNumber;
const int rob_t::kDeviceFieldNumber;
const int rob_t::kVersionFieldNumber;
const int rob_t::kLastDeviceFieldNumber;
const int rob_t::kLastTimeFieldNumber;
const int rob_t::kGagTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

rob_t::rob_t()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_rob_5ft_2eeproto::scc_info_rob_t.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:dhc.rob_t)
}
rob_t::rob_t(const rob_t& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.username().size() > 0) {
    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  serverid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.serverid().size() > 0) {
    serverid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serverid_);
  }
  extra_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.extra().size() > 0) {
    extra_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.extra_);
  }
  device_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.device().size() > 0) {
    device_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.device_);
  }
  last_device_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.last_device().size() > 0) {
    last_device_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.last_device_);
  }
  ::memcpy(&guid_, &from.guid_,
    static_cast<size_t>(reinterpret_cast<char*>(&version_) -
    reinterpret_cast<char*>(&guid_)) + sizeof(version_));
  // @@protoc_insertion_point(copy_constructor:dhc.rob_t)
}

void rob_t::SharedCtor() {
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serverid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  extra_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  device_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  last_device_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&guid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&version_) -
      reinterpret_cast<char*>(&guid_)) + sizeof(version_));
}

rob_t::~rob_t() {
  // @@protoc_insertion_point(destructor:dhc.rob_t)
  SharedDtor();
}

void rob_t::SharedDtor() {
  username_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serverid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  extra_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  device_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  last_device_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void rob_t::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* rob_t::descriptor() {
  ::protobuf_rob_5ft_2eeproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_rob_5ft_2eeproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const rob_t& rob_t::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_rob_5ft_2eeproto::scc_info_rob_t.base);
  return *internal_default_instance();
}


void rob_t::Clear() {
// @@protoc_insertion_point(message_clear_start:dhc.rob_t)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  set_changed();
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  set_changed();
  serverid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  set_changed();
  extra_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  set_changed();
  device_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  set_changed();
  last_device_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&guid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&version_) -
      reinterpret_cast<char*>(&guid_)) + sizeof(version_));
  _internal_metadata_.Clear();
}

bool rob_t::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dhc.rob_t)
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

      // int32 type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string username = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->username().data(), static_cast<int>(this->username().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "dhc.rob_t.username"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string serverid = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_serverid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->serverid().data(), static_cast<int>(this->serverid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "dhc.rob_t.serverid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string extra = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_extra()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->extra().data(), static_cast<int>(this->extra().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "dhc.rob_t.extra"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 gm_level = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &gm_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 fenghao_time = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &fenghao_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string device = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_device()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->device().data(), static_cast<int>(this->device().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "dhc.rob_t.device"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 version = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string last_device = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_last_device()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->last_device().data(), static_cast<int>(this->last_device().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "dhc.rob_t.last_device"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 last_time = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &last_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 gag_time = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &gag_time_)));
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
  // @@protoc_insertion_point(parse_success:dhc.rob_t)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dhc.rob_t)
  return false;
#undef DO_
}

void rob_t::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dhc.rob_t)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 guid = 1;
  if (this->guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->guid(), output);
  }

  // int32 type = 2;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->type(), output);
  }

  // string username = 3;
  if (this->username().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), static_cast<int>(this->username().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dhc.rob_t.username");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->username(), output);
  }

  // string serverid = 4;
  if (this->serverid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->serverid().data(), static_cast<int>(this->serverid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dhc.rob_t.serverid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->serverid(), output);
  }

  // string extra = 5;
  if (this->extra().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->extra().data(), static_cast<int>(this->extra().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dhc.rob_t.extra");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->extra(), output);
  }

  // int32 gm_level = 6;
  if (this->gm_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->gm_level(), output);
  }

  // uint64 fenghao_time = 7;
  if (this->fenghao_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(7, this->fenghao_time(), output);
  }

  // string device = 8;
  if (this->device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device().data(), static_cast<int>(this->device().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dhc.rob_t.device");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->device(), output);
  }

  // int32 version = 9;
  if (this->version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->version(), output);
  }

  // string last_device = 10;
  if (this->last_device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->last_device().data(), static_cast<int>(this->last_device().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dhc.rob_t.last_device");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->last_device(), output);
  }

  // uint64 last_time = 11;
  if (this->last_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(11, this->last_time(), output);
  }

  // uint64 gag_time = 12;
  if (this->gag_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(12, this->gag_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:dhc.rob_t)
}

::google::protobuf::uint8* rob_t::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:dhc.rob_t)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 guid = 1;
  if (this->guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->guid(), target);
  }

  // int32 type = 2;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->type(), target);
  }

  // string username = 3;
  if (this->username().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), static_cast<int>(this->username().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dhc.rob_t.username");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->username(), target);
  }

  // string serverid = 4;
  if (this->serverid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->serverid().data(), static_cast<int>(this->serverid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dhc.rob_t.serverid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->serverid(), target);
  }

  // string extra = 5;
  if (this->extra().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->extra().data(), static_cast<int>(this->extra().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dhc.rob_t.extra");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->extra(), target);
  }

  // int32 gm_level = 6;
  if (this->gm_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->gm_level(), target);
  }

  // uint64 fenghao_time = 7;
  if (this->fenghao_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(7, this->fenghao_time(), target);
  }

  // string device = 8;
  if (this->device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device().data(), static_cast<int>(this->device().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dhc.rob_t.device");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->device(), target);
  }

  // int32 version = 9;
  if (this->version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->version(), target);
  }

  // string last_device = 10;
  if (this->last_device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->last_device().data(), static_cast<int>(this->last_device().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dhc.rob_t.last_device");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->last_device(), target);
  }

  // uint64 last_time = 11;
  if (this->last_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(11, this->last_time(), target);
  }

  // uint64 gag_time = 12;
  if (this->gag_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(12, this->gag_time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dhc.rob_t)
  return target;
}

size_t rob_t::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dhc.rob_t)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string username = 3;
  if (this->username().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->username());
  }

  // string serverid = 4;
  if (this->serverid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->serverid());
  }

  // string extra = 5;
  if (this->extra().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->extra());
  }

  // string device = 8;
  if (this->device().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->device());
  }

  // string last_device = 10;
  if (this->last_device().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->last_device());
  }

  // uint64 guid = 1;
  if (this->guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->guid());
  }

  // int32 type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type());
  }

  // int32 gm_level = 6;
  if (this->gm_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->gm_level());
  }

  // uint64 fenghao_time = 7;
  if (this->fenghao_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->fenghao_time());
  }

  // uint64 last_time = 11;
  if (this->last_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->last_time());
  }

  // uint64 gag_time = 12;
  if (this->gag_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->gag_time());
  }

  // int32 version = 9;
  if (this->version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->version());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void rob_t::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dhc.rob_t)
  GOOGLE_DCHECK_NE(&from, this);
  const rob_t* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const rob_t>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dhc.rob_t)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dhc.rob_t)
    MergeFrom(*source);
  }
}

void rob_t::MergeFrom(const rob_t& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dhc.rob_t)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.username().size() > 0) {

    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  if (from.serverid().size() > 0) {

    serverid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serverid_);
  }
  if (from.extra().size() > 0) {

    extra_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.extra_);
  }
  if (from.device().size() > 0) {

    device_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.device_);
  }
  if (from.last_device().size() > 0) {

    last_device_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.last_device_);
  }
  if (from.guid() != 0) {
    set_guid(from.guid());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.gm_level() != 0) {
    set_gm_level(from.gm_level());
  }
  if (from.fenghao_time() != 0) {
    set_fenghao_time(from.fenghao_time());
  }
  if (from.last_time() != 0) {
    set_last_time(from.last_time());
  }
  if (from.gag_time() != 0) {
    set_gag_time(from.gag_time());
  }
  if (from.version() != 0) {
    set_version(from.version());
  }
}

void rob_t::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dhc.rob_t)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void rob_t::CopyFrom(const rob_t& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dhc.rob_t)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool rob_t::IsInitialized() const {
  return true;
}

void rob_t::Swap(rob_t* other) {
  if (other == this) return;
  InternalSwap(other);
}
void rob_t::InternalSwap(rob_t* other) {
  using std::swap;
  username_.Swap(&other->username_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  serverid_.Swap(&other->serverid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  extra_.Swap(&other->extra_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  device_.Swap(&other->device_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  last_device_.Swap(&other->last_device_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(guid_, other->guid_);
  swap(type_, other->type_);
  swap(gm_level_, other->gm_level_);
  swap(fenghao_time_, other->fenghao_time_);
  swap(last_time_, other->last_time_);
  swap(gag_time_, other->gag_time_);
  swap(version_, other->version_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata rob_t::GetMetadata() const {
  protobuf_rob_5ft_2eeproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_rob_5ft_2eeproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace dhc
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::dhc::rob_t* Arena::CreateMaybeMessage< ::dhc::rob_t >(Arena* arena) {
  return Arena::CreateInternal< ::dhc::rob_t >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

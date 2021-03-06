// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server_init.proto

#include "server_init.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

class packetInDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<packetIn> _instance;
} _packetIn_default_instance_;
class packetOutDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<packetOut> _instance;
} _packetOut_default_instance_;
static void InitDefaultspacketIn_server_5finit_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_packetIn_default_instance_;
    new (ptr) ::packetIn();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::packetIn::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_packetIn_server_5finit_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultspacketIn_server_5finit_2eproto}, {}};

static void InitDefaultspacketOut_server_5finit_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_packetOut_default_instance_;
    new (ptr) ::packetOut();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::packetOut::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_packetOut_server_5finit_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultspacketOut_server_5finit_2eproto}, {}};

void InitDefaults_server_5finit_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_packetIn_server_5finit_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_packetOut_server_5finit_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_server_5finit_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_server_5finit_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_server_5finit_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_server_5finit_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::packetIn, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::packetIn, serverctrlip_),
  PROTOBUF_FIELD_OFFSET(::packetIn, servernicip_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::packetOut, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::packetOut, torid_),
  PROTOBUF_FIELD_OFFSET(::packetOut, randval_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::packetIn)},
  { 7, -1, sizeof(::packetOut)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_packetIn_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_packetOut_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_server_5finit_2eproto = {
  {}, AddDescriptors_server_5finit_2eproto, "server_init.proto", schemas,
  file_default_instances, TableStruct_server_5finit_2eproto::offsets,
  file_level_metadata_server_5finit_2eproto, 2, file_level_enum_descriptors_server_5finit_2eproto, file_level_service_descriptors_server_5finit_2eproto,
};

const char descriptor_table_protodef_server_5finit_2eproto[] =
  "\n\021server_init.proto\"5\n\010packetIn\022\024\n\014serve"
  "rCtrlIp\030\001 \001(\t\022\023\n\013serverNicIp\030\002 \001(\t\"+\n\tpa"
  "cketOut\022\r\n\005torId\030\001 \001(\005\022\017\n\007randVal\030\002 \001(\005b"
  "\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_server_5finit_2eproto = {
  false, InitDefaults_server_5finit_2eproto, 
  descriptor_table_protodef_server_5finit_2eproto,
  "server_init.proto", &assign_descriptors_table_server_5finit_2eproto, 127,
};

void AddDescriptors_server_5finit_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_server_5finit_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_server_5finit_2eproto = []() { AddDescriptors_server_5finit_2eproto(); return true; }();

// ===================================================================

void packetIn::InitAsDefaultInstance() {
}
class packetIn::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int packetIn::kServerCtrlIpFieldNumber;
const int packetIn::kServerNicIpFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

packetIn::packetIn()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:packetIn)
}
packetIn::packetIn(const packetIn& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  serverctrlip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.serverctrlip().size() > 0) {
    serverctrlip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serverctrlip_);
  }
  servernicip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.servernicip().size() > 0) {
    servernicip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.servernicip_);
  }
  // @@protoc_insertion_point(copy_constructor:packetIn)
}

void packetIn::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_packetIn_server_5finit_2eproto.base);
  serverctrlip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  servernicip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

packetIn::~packetIn() {
  // @@protoc_insertion_point(destructor:packetIn)
  SharedDtor();
}

void packetIn::SharedDtor() {
  serverctrlip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  servernicip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void packetIn::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const packetIn& packetIn::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_packetIn_server_5finit_2eproto.base);
  return *internal_default_instance();
}


void packetIn::Clear() {
// @@protoc_insertion_point(message_clear_start:packetIn)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  serverctrlip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  servernicip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* packetIn::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<packetIn*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string serverCtrlIp = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("packetIn.serverCtrlIp");
        object = msg->mutable_serverctrlip();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // string serverNicIp = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("packetIn.serverNicIp");
        object = msg->mutable_servernicip();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool packetIn::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:packetIn)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string serverCtrlIp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_serverctrlip()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->serverctrlip().data(), static_cast<int>(this->serverctrlip().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "packetIn.serverCtrlIp"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string serverNicIp = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_servernicip()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->servernicip().data(), static_cast<int>(this->servernicip().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "packetIn.serverNicIp"));
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
  // @@protoc_insertion_point(parse_success:packetIn)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:packetIn)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void packetIn::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:packetIn)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string serverCtrlIp = 1;
  if (this->serverctrlip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->serverctrlip().data(), static_cast<int>(this->serverctrlip().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "packetIn.serverCtrlIp");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->serverctrlip(), output);
  }

  // string serverNicIp = 2;
  if (this->servernicip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->servernicip().data(), static_cast<int>(this->servernicip().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "packetIn.serverNicIp");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->servernicip(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:packetIn)
}

::google::protobuf::uint8* packetIn::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:packetIn)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string serverCtrlIp = 1;
  if (this->serverctrlip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->serverctrlip().data(), static_cast<int>(this->serverctrlip().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "packetIn.serverCtrlIp");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->serverctrlip(), target);
  }

  // string serverNicIp = 2;
  if (this->servernicip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->servernicip().data(), static_cast<int>(this->servernicip().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "packetIn.serverNicIp");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->servernicip(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:packetIn)
  return target;
}

size_t packetIn::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:packetIn)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string serverCtrlIp = 1;
  if (this->serverctrlip().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->serverctrlip());
  }

  // string serverNicIp = 2;
  if (this->servernicip().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->servernicip());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void packetIn::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:packetIn)
  GOOGLE_DCHECK_NE(&from, this);
  const packetIn* source =
      ::google::protobuf::DynamicCastToGenerated<packetIn>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:packetIn)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:packetIn)
    MergeFrom(*source);
  }
}

void packetIn::MergeFrom(const packetIn& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:packetIn)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.serverctrlip().size() > 0) {

    serverctrlip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serverctrlip_);
  }
  if (from.servernicip().size() > 0) {

    servernicip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.servernicip_);
  }
}

void packetIn::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:packetIn)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void packetIn::CopyFrom(const packetIn& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:packetIn)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool packetIn::IsInitialized() const {
  return true;
}

void packetIn::Swap(packetIn* other) {
  if (other == this) return;
  InternalSwap(other);
}
void packetIn::InternalSwap(packetIn* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  serverctrlip_.Swap(&other->serverctrlip_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  servernicip_.Swap(&other->servernicip_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata packetIn::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_server_5finit_2eproto);
  return ::file_level_metadata_server_5finit_2eproto[kIndexInFileMessages];
}


// ===================================================================

void packetOut::InitAsDefaultInstance() {
}
class packetOut::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int packetOut::kTorIdFieldNumber;
const int packetOut::kRandValFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

packetOut::packetOut()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:packetOut)
}
packetOut::packetOut(const packetOut& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&torid_, &from.torid_,
    static_cast<size_t>(reinterpret_cast<char*>(&randval_) -
    reinterpret_cast<char*>(&torid_)) + sizeof(randval_));
  // @@protoc_insertion_point(copy_constructor:packetOut)
}

void packetOut::SharedCtor() {
  ::memset(&torid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&randval_) -
      reinterpret_cast<char*>(&torid_)) + sizeof(randval_));
}

packetOut::~packetOut() {
  // @@protoc_insertion_point(destructor:packetOut)
  SharedDtor();
}

void packetOut::SharedDtor() {
}

void packetOut::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const packetOut& packetOut::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_packetOut_server_5finit_2eproto.base);
  return *internal_default_instance();
}


void packetOut::Clear() {
// @@protoc_insertion_point(message_clear_start:packetOut)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&torid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&randval_) -
      reinterpret_cast<char*>(&torid_)) + sizeof(randval_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* packetOut::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<packetOut*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // int32 torId = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        msg->set_torid(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // int32 randVal = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_randval(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool packetOut::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:packetOut)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 torId = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &torid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 randVal = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &randval_)));
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
  // @@protoc_insertion_point(parse_success:packetOut)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:packetOut)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void packetOut::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:packetOut)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 torId = 1;
  if (this->torid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->torid(), output);
  }

  // int32 randVal = 2;
  if (this->randval() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->randval(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:packetOut)
}

::google::protobuf::uint8* packetOut::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:packetOut)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 torId = 1;
  if (this->torid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->torid(), target);
  }

  // int32 randVal = 2;
  if (this->randval() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->randval(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:packetOut)
  return target;
}

size_t packetOut::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:packetOut)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 torId = 1;
  if (this->torid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->torid());
  }

  // int32 randVal = 2;
  if (this->randval() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->randval());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void packetOut::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:packetOut)
  GOOGLE_DCHECK_NE(&from, this);
  const packetOut* source =
      ::google::protobuf::DynamicCastToGenerated<packetOut>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:packetOut)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:packetOut)
    MergeFrom(*source);
  }
}

void packetOut::MergeFrom(const packetOut& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:packetOut)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.torid() != 0) {
    set_torid(from.torid());
  }
  if (from.randval() != 0) {
    set_randval(from.randval());
  }
}

void packetOut::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:packetOut)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void packetOut::CopyFrom(const packetOut& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:packetOut)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool packetOut::IsInitialized() const {
  return true;
}

void packetOut::Swap(packetOut* other) {
  if (other == this) return;
  InternalSwap(other);
}
void packetOut::InternalSwap(packetOut* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(torid_, other->torid_);
  swap(randval_, other->randval_);
}

::google::protobuf::Metadata packetOut::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_server_5finit_2eproto);
  return ::file_level_metadata_server_5finit_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::packetIn* Arena::CreateMaybeMessage< ::packetIn >(Arena* arena) {
  return Arena::CreateInternal< ::packetIn >(arena);
}
template<> PROTOBUF_NOINLINE ::packetOut* Arena::CreateMaybeMessage< ::packetOut >(Arena* arena) {
  return Arena::CreateInternal< ::packetOut >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

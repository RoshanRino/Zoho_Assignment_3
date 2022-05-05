// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Machine.proto

#include "Machine.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace Machine {
PROTOBUF_CONSTEXPR MachineData::MachineData(
    ::_pbi::ConstantInitialized)
  : denomination_(0)
  , count_(0){}
struct MachineDataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MachineDataDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MachineDataDefaultTypeInternal() {}
  union {
    MachineData _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MachineDataDefaultTypeInternal _MachineData_default_instance_;
PROTOBUF_CONSTEXPR MachineDatas::MachineDatas(
    ::_pbi::ConstantInitialized)
  : mdata_(){}
struct MachineDatasDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MachineDatasDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MachineDatasDefaultTypeInternal() {}
  union {
    MachineDatas _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MachineDatasDefaultTypeInternal _MachineDatas_default_instance_;
}  // namespace Machine
static ::_pb::Metadata file_level_metadata_Machine_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Machine_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Machine_2eproto = nullptr;

const uint32_t TableStruct_Machine_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Machine::MachineData, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::Machine::MachineData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Machine::MachineData, denomination_),
  PROTOBUF_FIELD_OFFSET(::Machine::MachineData, count_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Machine::MachineDatas, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Machine::MachineDatas, mdata_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::Machine::MachineData)},
  { 10, -1, -1, sizeof(::Machine::MachineDatas)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::Machine::_MachineData_default_instance_._instance,
  &::Machine::_MachineDatas_default_instance_._instance,
};

const char descriptor_table_protodef_Machine_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rMachine.proto\022\007Machine\"W\n\013MachineData\022"
  "\031\n\014denomination\030\001 \001(\005H\000\210\001\001\022\022\n\005count\030\002 \001("
  "\005H\001\210\001\001B\017\n\r_denominationB\010\n\006_count\"3\n\014Mac"
  "hineDatas\022#\n\005Mdata\030\001 \003(\0132\024.Machine.Machi"
  "neDatab\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_Machine_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Machine_2eproto = {
    false, false, 174, descriptor_table_protodef_Machine_2eproto,
    "Machine.proto",
    &descriptor_table_Machine_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_Machine_2eproto::offsets,
    file_level_metadata_Machine_2eproto, file_level_enum_descriptors_Machine_2eproto,
    file_level_service_descriptors_Machine_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Machine_2eproto_getter() {
  return &descriptor_table_Machine_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Machine_2eproto(&descriptor_table_Machine_2eproto);
namespace Machine {

// ===================================================================

class MachineData::_Internal {
 public:
  using HasBits = decltype(std::declval<MachineData>()._has_bits_);
  static void set_has_denomination(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_count(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

MachineData::MachineData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:Machine.MachineData)
}
MachineData::MachineData(const MachineData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&denomination_, &from.denomination_,
    static_cast<size_t>(reinterpret_cast<char*>(&count_) -
    reinterpret_cast<char*>(&denomination_)) + sizeof(count_));
  // @@protoc_insertion_point(copy_constructor:Machine.MachineData)
}

inline void MachineData::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&denomination_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&count_) -
    reinterpret_cast<char*>(&denomination_)) + sizeof(count_));
}

MachineData::~MachineData() {
  // @@protoc_insertion_point(destructor:Machine.MachineData)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MachineData::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MachineData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void MachineData::Clear() {
// @@protoc_insertion_point(message_clear_start:Machine.MachineData)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&denomination_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&count_) -
        reinterpret_cast<char*>(&denomination_)) + sizeof(count_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MachineData::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 denomination = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_denomination(&has_bits);
          denomination_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 count = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_count(&has_bits);
          count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* MachineData::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Machine.MachineData)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional int32 denomination = 1;
  if (_internal_has_denomination()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_denomination(), target);
  }

  // optional int32 count = 2;
  if (_internal_has_count()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_count(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Machine.MachineData)
  return target;
}

size_t MachineData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Machine.MachineData)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional int32 denomination = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_denomination());
    }

    // optional int32 count = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_count());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MachineData::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    MachineData::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MachineData::GetClassData() const { return &_class_data_; }

void MachineData::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<MachineData *>(to)->MergeFrom(
      static_cast<const MachineData &>(from));
}


void MachineData::MergeFrom(const MachineData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Machine.MachineData)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      denomination_ = from.denomination_;
    }
    if (cached_has_bits & 0x00000002u) {
      count_ = from.count_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MachineData::CopyFrom(const MachineData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Machine.MachineData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MachineData::IsInitialized() const {
  return true;
}

void MachineData::InternalSwap(MachineData* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MachineData, count_)
      + sizeof(MachineData::count_)
      - PROTOBUF_FIELD_OFFSET(MachineData, denomination_)>(
          reinterpret_cast<char*>(&denomination_),
          reinterpret_cast<char*>(&other->denomination_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MachineData::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Machine_2eproto_getter, &descriptor_table_Machine_2eproto_once,
      file_level_metadata_Machine_2eproto[0]);
}

// ===================================================================

class MachineDatas::_Internal {
 public:
};

MachineDatas::MachineDatas(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  mdata_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:Machine.MachineDatas)
}
MachineDatas::MachineDatas(const MachineDatas& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      mdata_(from.mdata_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Machine.MachineDatas)
}

inline void MachineDatas::SharedCtor() {
}

MachineDatas::~MachineDatas() {
  // @@protoc_insertion_point(destructor:Machine.MachineDatas)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MachineDatas::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MachineDatas::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void MachineDatas::Clear() {
// @@protoc_insertion_point(message_clear_start:Machine.MachineDatas)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  mdata_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MachineDatas::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .Machine.MachineData Mdata = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_mdata(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* MachineDatas::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Machine.MachineDatas)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Machine.MachineData Mdata = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_mdata_size()); i < n; i++) {
    const auto& repfield = this->_internal_mdata(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Machine.MachineDatas)
  return target;
}

size_t MachineDatas::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Machine.MachineDatas)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Machine.MachineData Mdata = 1;
  total_size += 1UL * this->_internal_mdata_size();
  for (const auto& msg : this->mdata_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MachineDatas::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    MachineDatas::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MachineDatas::GetClassData() const { return &_class_data_; }

void MachineDatas::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<MachineDatas *>(to)->MergeFrom(
      static_cast<const MachineDatas &>(from));
}


void MachineDatas::MergeFrom(const MachineDatas& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Machine.MachineDatas)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  mdata_.MergeFrom(from.mdata_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MachineDatas::CopyFrom(const MachineDatas& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Machine.MachineDatas)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MachineDatas::IsInitialized() const {
  return true;
}

void MachineDatas::InternalSwap(MachineDatas* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  mdata_.InternalSwap(&other->mdata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MachineDatas::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Machine_2eproto_getter, &descriptor_table_Machine_2eproto_once,
      file_level_metadata_Machine_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Machine
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Machine::MachineData*
Arena::CreateMaybeMessage< ::Machine::MachineData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Machine::MachineData >(arena);
}
template<> PROTOBUF_NOINLINE ::Machine::MachineDatas*
Arena::CreateMaybeMessage< ::Machine::MachineDatas >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Machine::MachineDatas >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

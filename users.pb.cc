// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: users.proto

#include "users.pb.h"

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

namespace UserData {
PROTOBUF_CONSTEXPR User::User(
    ::_pbi::ConstantInitialized)
  : name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , accountnumber_(0)
  , pin_(0)
  , balance_(0){}
struct UserDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UserDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UserDefaultTypeInternal() {}
  union {
    User _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UserDefaultTypeInternal _User_default_instance_;
PROTOBUF_CONSTEXPR Users::Users(
    ::_pbi::ConstantInitialized)
  : users_(){}
struct UsersDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UsersDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UsersDefaultTypeInternal() {}
  union {
    Users _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UsersDefaultTypeInternal _Users_default_instance_;
}  // namespace UserData
static ::_pb::Metadata file_level_metadata_users_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_users_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_users_2eproto = nullptr;

const uint32_t TableStruct_users_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::UserData::User, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::UserData::User, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::UserData::User, accountnumber_),
  PROTOBUF_FIELD_OFFSET(::UserData::User, pin_),
  PROTOBUF_FIELD_OFFSET(::UserData::User, balance_),
  PROTOBUF_FIELD_OFFSET(::UserData::User, name_),
  1,
  2,
  3,
  0,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::UserData::Users, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::UserData::Users, users_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, -1, sizeof(::UserData::User)},
  { 14, -1, -1, sizeof(::UserData::Users)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::UserData::_User_default_instance_._instance,
  &::UserData::_Users_default_instance_._instance,
};

const char descriptor_table_protodef_users_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013users.proto\022\010UserData\"\214\001\n\004User\022\032\n\racco"
  "untNumber\030\001 \001(\005H\000\210\001\001\022\020\n\003pin\030\002 \001(\005H\001\210\001\001\022\024"
  "\n\007balance\030\003 \001(\005H\002\210\001\001\022\021\n\004name\030\004 \001(\tH\003\210\001\001B"
  "\020\n\016_accountNumberB\006\n\004_pinB\n\n\010_balanceB\007\n"
  "\005_name\"&\n\005Users\022\035\n\005users\030\001 \003(\0132\016.UserDat"
  "a.Userb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_users_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_users_2eproto = {
    false, false, 214, descriptor_table_protodef_users_2eproto,
    "users.proto",
    &descriptor_table_users_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_users_2eproto::offsets,
    file_level_metadata_users_2eproto, file_level_enum_descriptors_users_2eproto,
    file_level_service_descriptors_users_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_users_2eproto_getter() {
  return &descriptor_table_users_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_users_2eproto(&descriptor_table_users_2eproto);
namespace UserData {

// ===================================================================

class User::_Internal {
 public:
  using HasBits = decltype(std::declval<User>()._has_bits_);
  static void set_has_accountnumber(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_pin(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_balance(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

User::User(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:UserData.User)
}
User::User(const User& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_name()) {
    name_.Set(from._internal_name(), 
      GetArenaForAllocation());
  }
  ::memcpy(&accountnumber_, &from.accountnumber_,
    static_cast<size_t>(reinterpret_cast<char*>(&balance_) -
    reinterpret_cast<char*>(&accountnumber_)) + sizeof(balance_));
  // @@protoc_insertion_point(copy_constructor:UserData.User)
}

inline void User::SharedCtor() {
name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&accountnumber_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&balance_) -
    reinterpret_cast<char*>(&accountnumber_)) + sizeof(balance_));
}

User::~User() {
  // @@protoc_insertion_point(destructor:UserData.User)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void User::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.Destroy();
}

void User::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void User::Clear() {
// @@protoc_insertion_point(message_clear_start:UserData.User)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    name_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x0000000eu) {
    ::memset(&accountnumber_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&balance_) -
        reinterpret_cast<char*>(&accountnumber_)) + sizeof(balance_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* User::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 accountNumber = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_accountnumber(&has_bits);
          accountnumber_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 pin = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_pin(&has_bits);
          pin_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 balance = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_balance(&has_bits);
          balance_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string name = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "UserData.User.name"));
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

uint8_t* User::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:UserData.User)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional int32 accountNumber = 1;
  if (_internal_has_accountnumber()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_accountnumber(), target);
  }

  // optional int32 pin = 2;
  if (_internal_has_pin()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_pin(), target);
  }

  // optional int32 balance = 3;
  if (_internal_has_balance()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_balance(), target);
  }

  // optional string name = 4;
  if (_internal_has_name()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "UserData.User.name");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:UserData.User)
  return target;
}

size_t User::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:UserData.User)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string name = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional int32 accountNumber = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_accountnumber());
    }

    // optional int32 pin = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_pin());
    }

    // optional int32 balance = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_balance());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData User::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    User::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*User::GetClassData() const { return &_class_data_; }

void User::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<User *>(to)->MergeFrom(
      static_cast<const User &>(from));
}


void User::MergeFrom(const User& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:UserData.User)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      accountnumber_ = from.accountnumber_;
    }
    if (cached_has_bits & 0x00000004u) {
      pin_ = from.pin_;
    }
    if (cached_has_bits & 0x00000008u) {
      balance_ = from.balance_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void User::CopyFrom(const User& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:UserData.User)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool User::IsInitialized() const {
  return true;
}

void User::InternalSwap(User* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(User, balance_)
      + sizeof(User::balance_)
      - PROTOBUF_FIELD_OFFSET(User, accountnumber_)>(
          reinterpret_cast<char*>(&accountnumber_),
          reinterpret_cast<char*>(&other->accountnumber_));
}

::PROTOBUF_NAMESPACE_ID::Metadata User::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_users_2eproto_getter, &descriptor_table_users_2eproto_once,
      file_level_metadata_users_2eproto[0]);
}

// ===================================================================

class Users::_Internal {
 public:
};

Users::Users(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  users_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:UserData.Users)
}
Users::Users(const Users& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      users_(from.users_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:UserData.Users)
}

inline void Users::SharedCtor() {
}

Users::~Users() {
  // @@protoc_insertion_point(destructor:UserData.Users)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Users::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Users::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Users::Clear() {
// @@protoc_insertion_point(message_clear_start:UserData.Users)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  users_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Users::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .UserData.User users = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_users(), ptr);
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

uint8_t* Users::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:UserData.Users)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .UserData.User users = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_users_size()); i < n; i++) {
    const auto& repfield = this->_internal_users(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:UserData.Users)
  return target;
}

size_t Users::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:UserData.Users)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .UserData.User users = 1;
  total_size += 1UL * this->_internal_users_size();
  for (const auto& msg : this->users_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Users::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Users::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Users::GetClassData() const { return &_class_data_; }

void Users::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Users *>(to)->MergeFrom(
      static_cast<const Users &>(from));
}


void Users::MergeFrom(const Users& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:UserData.Users)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  users_.MergeFrom(from.users_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Users::CopyFrom(const Users& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:UserData.Users)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Users::IsInitialized() const {
  return true;
}

void Users::InternalSwap(Users* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  users_.InternalSwap(&other->users_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Users::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_users_2eproto_getter, &descriptor_table_users_2eproto_once,
      file_level_metadata_users_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace UserData
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::UserData::User*
Arena::CreateMaybeMessage< ::UserData::User >(Arena* arena) {
  return Arena::CreateMessageInternal< ::UserData::User >(arena);
}
template<> PROTOBUF_NOINLINE ::UserData::Users*
Arena::CreateMaybeMessage< ::UserData::Users >(Arena* arena) {
  return Arena::CreateMessageInternal< ::UserData::Users >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: poc.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_poc_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_poc_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_poc_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_poc_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
class enumerate_resp;
class enumerate_respDefaultTypeInternal;
extern enumerate_respDefaultTypeInternal _enumerate_resp_default_instance_;
class rom_id;
class rom_idDefaultTypeInternal;
extern rom_idDefaultTypeInternal _rom_id_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::enumerate_resp* Arena::CreateMaybeMessage<::enumerate_resp>(Arena*);
template<> ::rom_id* Arena::CreateMaybeMessage<::rom_id>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class rom_id PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:rom_id) */ {
 public:
  inline rom_id() : rom_id(nullptr) {}
  virtual ~rom_id();

  rom_id(const rom_id& from);
  rom_id(rom_id&& from) noexcept
    : rom_id() {
    *this = ::std::move(from);
  }

  inline rom_id& operator=(const rom_id& from) {
    CopyFrom(from);
    return *this;
  }
  inline rom_id& operator=(rom_id&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const rom_id& default_instance();

  static inline const rom_id* internal_default_instance() {
    return reinterpret_cast<const rom_id*>(
               &_rom_id_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(rom_id& a, rom_id& b) {
    a.Swap(&b);
  }
  inline void Swap(rom_id* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(rom_id* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline rom_id* New() const final {
    return CreateMaybeMessage<rom_id>(nullptr);
  }

  rom_id* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<rom_id>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const rom_id& from);
  void MergeFrom(const rom_id& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(rom_id* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rom_id";
  }
  protected:
  explicit rom_id(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
  };
  // bytes id = 1;
  void clear_id();
  const std::string& id() const;
  void set_id(const std::string& value);
  void set_id(std::string&& value);
  void set_id(const char* value);
  void set_id(const void* value, size_t size);
  std::string* mutable_id();
  std::string* release_id();
  void set_allocated_id(std::string* id);
  private:
  const std::string& _internal_id() const;
  void _internal_set_id(const std::string& value);
  std::string* _internal_mutable_id();
  public:

  // @@protoc_insertion_point(class_scope:rom_id)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_poc_2eproto;
};
// -------------------------------------------------------------------

class enumerate_resp PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:enumerate_resp) */ {
 public:
  inline enumerate_resp() : enumerate_resp(nullptr) {}
  virtual ~enumerate_resp();

  enumerate_resp(const enumerate_resp& from);
  enumerate_resp(enumerate_resp&& from) noexcept
    : enumerate_resp() {
    *this = ::std::move(from);
  }

  inline enumerate_resp& operator=(const enumerate_resp& from) {
    CopyFrom(from);
    return *this;
  }
  inline enumerate_resp& operator=(enumerate_resp&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const enumerate_resp& default_instance();

  static inline const enumerate_resp* internal_default_instance() {
    return reinterpret_cast<const enumerate_resp*>(
               &_enumerate_resp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(enumerate_resp& a, enumerate_resp& b) {
    a.Swap(&b);
  }
  inline void Swap(enumerate_resp* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(enumerate_resp* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline enumerate_resp* New() const final {
    return CreateMaybeMessage<enumerate_resp>(nullptr);
  }

  enumerate_resp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<enumerate_resp>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const enumerate_resp& from);
  void MergeFrom(const enumerate_resp& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(enumerate_resp* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "enumerate_resp";
  }
  protected:
  explicit enumerate_resp(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRomFieldNumber = 1,
  };
  // repeated .rom_id rom = 1;
  int rom_size() const;
  private:
  int _internal_rom_size() const;
  public:
  void clear_rom();
  ::rom_id* mutable_rom(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rom_id >*
      mutable_rom();
  private:
  const ::rom_id& _internal_rom(int index) const;
  ::rom_id* _internal_add_rom();
  public:
  const ::rom_id& rom(int index) const;
  ::rom_id* add_rom();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rom_id >&
      rom() const;

  // @@protoc_insertion_point(class_scope:enumerate_resp)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rom_id > rom_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_poc_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// rom_id

// bytes id = 1;
inline void rom_id::clear_id() {
  id_.ClearToEmpty();
}
inline const std::string& rom_id::id() const {
  // @@protoc_insertion_point(field_get:rom_id.id)
  return _internal_id();
}
inline void rom_id::set_id(const std::string& value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:rom_id.id)
}
inline std::string* rom_id::mutable_id() {
  // @@protoc_insertion_point(field_mutable:rom_id.id)
  return _internal_mutable_id();
}
inline const std::string& rom_id::_internal_id() const {
  return id_.Get();
}
inline void rom_id::_internal_set_id(const std::string& value) {
  
  id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void rom_id::set_id(std::string&& value) {
  
  id_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:rom_id.id)
}
inline void rom_id::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:rom_id.id)
}
inline void rom_id::set_id(const void* value,
    size_t size) {
  
  id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:rom_id.id)
}
inline std::string* rom_id::_internal_mutable_id() {
  
  return id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* rom_id::release_id() {
  // @@protoc_insertion_point(field_release:rom_id.id)
  return id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void rom_id::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:rom_id.id)
}

// -------------------------------------------------------------------

// enumerate_resp

// repeated .rom_id rom = 1;
inline int enumerate_resp::_internal_rom_size() const {
  return rom_.size();
}
inline int enumerate_resp::rom_size() const {
  return _internal_rom_size();
}
inline void enumerate_resp::clear_rom() {
  rom_.Clear();
}
inline ::rom_id* enumerate_resp::mutable_rom(int index) {
  // @@protoc_insertion_point(field_mutable:enumerate_resp.rom)
  return rom_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rom_id >*
enumerate_resp::mutable_rom() {
  // @@protoc_insertion_point(field_mutable_list:enumerate_resp.rom)
  return &rom_;
}
inline const ::rom_id& enumerate_resp::_internal_rom(int index) const {
  return rom_.Get(index);
}
inline const ::rom_id& enumerate_resp::rom(int index) const {
  // @@protoc_insertion_point(field_get:enumerate_resp.rom)
  return _internal_rom(index);
}
inline ::rom_id* enumerate_resp::_internal_add_rom() {
  return rom_.Add();
}
inline ::rom_id* enumerate_resp::add_rom() {
  // @@protoc_insertion_point(field_add:enumerate_resp.rom)
  return _internal_add_rom();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::rom_id >&
enumerate_resp::rom() const {
  // @@protoc_insertion_point(field_list:enumerate_resp.rom)
  return rom_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_poc_2eproto

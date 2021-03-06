// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: poc.proto

#include "poc.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_poc_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_rom_id_poc_2eproto;
class rom_idDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<rom_id> _instance;
} _rom_id_default_instance_;
class enumerate_respDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<enumerate_resp> _instance;
} _enumerate_resp_default_instance_;
static void InitDefaultsscc_info_enumerate_resp_poc_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_enumerate_resp_default_instance_;
    new (ptr) ::enumerate_resp();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_enumerate_resp_poc_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_enumerate_resp_poc_2eproto}, {
      &scc_info_rom_id_poc_2eproto.base,}};

static void InitDefaultsscc_info_rom_id_poc_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_rom_id_default_instance_;
    new (ptr) ::rom_id();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_rom_id_poc_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_rom_id_poc_2eproto}, {}};


// ===================================================================

class rom_id::_Internal {
 public:
};

rom_id::rom_id(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:rom_id)
}
rom_id::rom_id(const rom_id& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_id().empty()) {
    id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_id(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:rom_id)
}

void rom_id::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_rom_id_poc_2eproto.base);
  id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

rom_id::~rom_id() {
  // @@protoc_insertion_point(destructor:rom_id)
  SharedDtor();
  _internal_metadata_.Delete<std::string>();
}

void rom_id::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void rom_id::ArenaDtor(void* object) {
  rom_id* _this = reinterpret_cast< rom_id* >(object);
  (void)_this;
}
void rom_id::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void rom_id::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const rom_id& rom_id::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_rom_id_poc_2eproto.base);
  return *internal_default_instance();
}


void rom_id::Clear() {
// @@protoc_insertion_point(message_clear_start:rom_id)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  id_.ClearToEmpty();
  _internal_metadata_.Clear<std::string>();
}

const char* rom_id::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<std::string>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* rom_id::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:rom_id)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes id = 1;
  if (this->id().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rom_id)
  return target;
}

size_t rom_id::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rom_id)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void rom_id::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const rom_id*>(
      &from));
}

void rom_id::MergeFrom(const rom_id& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:rom_id)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id().size() > 0) {
    _internal_set_id(from._internal_id());
  }
}

void rom_id::CopyFrom(const rom_id& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rom_id)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool rom_id::IsInitialized() const {
  return true;
}

void rom_id::InternalSwap(rom_id* other) {
  using std::swap;
  _internal_metadata_.Swap<std::string>(&other->_internal_metadata_);
  id_.Swap(&other->id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

std::string rom_id::GetTypeName() const {
  return "rom_id";
}


// ===================================================================

class enumerate_resp::_Internal {
 public:
};

enumerate_resp::enumerate_resp(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena),
  rom_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:enumerate_resp)
}
enumerate_resp::enumerate_resp(const enumerate_resp& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      rom_(from.rom_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:enumerate_resp)
}

void enumerate_resp::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_enumerate_resp_poc_2eproto.base);
}

enumerate_resp::~enumerate_resp() {
  // @@protoc_insertion_point(destructor:enumerate_resp)
  SharedDtor();
  _internal_metadata_.Delete<std::string>();
}

void enumerate_resp::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void enumerate_resp::ArenaDtor(void* object) {
  enumerate_resp* _this = reinterpret_cast< enumerate_resp* >(object);
  (void)_this;
}
void enumerate_resp::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void enumerate_resp::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const enumerate_resp& enumerate_resp::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_enumerate_resp_poc_2eproto.base);
  return *internal_default_instance();
}


void enumerate_resp::Clear() {
// @@protoc_insertion_point(message_clear_start:enumerate_resp)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  rom_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* enumerate_resp::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .rom_id rom = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_rom(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<std::string>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* enumerate_resp::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:enumerate_resp)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .rom_id rom = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_rom_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_rom(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:enumerate_resp)
  return target;
}

size_t enumerate_resp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:enumerate_resp)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .rom_id rom = 1;
  total_size += 1UL * this->_internal_rom_size();
  for (const auto& msg : this->rom_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void enumerate_resp::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const enumerate_resp*>(
      &from));
}

void enumerate_resp::MergeFrom(const enumerate_resp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:enumerate_resp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  rom_.MergeFrom(from.rom_);
}

void enumerate_resp::CopyFrom(const enumerate_resp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:enumerate_resp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool enumerate_resp::IsInitialized() const {
  return true;
}

void enumerate_resp::InternalSwap(enumerate_resp* other) {
  using std::swap;
  _internal_metadata_.Swap<std::string>(&other->_internal_metadata_);
  rom_.InternalSwap(&other->rom_);
}

std::string enumerate_resp::GetTypeName() const {
  return "enumerate_resp";
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::rom_id* Arena::CreateMaybeMessage< ::rom_id >(Arena* arena) {
  return Arena::CreateMessageInternal< ::rom_id >(arena);
}
template<> PROTOBUF_NOINLINE ::enumerate_resp* Arena::CreateMaybeMessage< ::enumerate_resp >(Arena* arena) {
  return Arena::CreateMessageInternal< ::enumerate_resp >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

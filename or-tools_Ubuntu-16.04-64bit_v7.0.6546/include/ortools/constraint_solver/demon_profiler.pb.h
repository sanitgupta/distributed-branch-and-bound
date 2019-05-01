// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ortools/constraint_solver/demon_profiler.proto

#ifndef PROTOBUF_INCLUDED_ortools_2fconstraint_5fsolver_2fdemon_5fprofiler_2eproto
#define PROTOBUF_INCLUDED_ortools_2fconstraint_5fsolver_2fdemon_5fprofiler_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_ortools_2fconstraint_5fsolver_2fdemon_5fprofiler_2eproto 

namespace protobuf_ortools_2fconstraint_5fsolver_2fdemon_5fprofiler_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_ortools_2fconstraint_5fsolver_2fdemon_5fprofiler_2eproto
namespace operations_research {
class ConstraintRuns;
class ConstraintRunsDefaultTypeInternal;
extern ConstraintRunsDefaultTypeInternal _ConstraintRuns_default_instance_;
class DemonRuns;
class DemonRunsDefaultTypeInternal;
extern DemonRunsDefaultTypeInternal _DemonRuns_default_instance_;
}  // namespace operations_research
namespace google {
namespace protobuf {
template<> ::operations_research::ConstraintRuns* Arena::CreateMaybeMessage<::operations_research::ConstraintRuns>(Arena*);
template<> ::operations_research::DemonRuns* Arena::CreateMaybeMessage<::operations_research::DemonRuns>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace operations_research {

// ===================================================================

class DemonRuns : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:operations_research.DemonRuns) */ {
 public:
  DemonRuns();
  virtual ~DemonRuns();

  DemonRuns(const DemonRuns& from);

  inline DemonRuns& operator=(const DemonRuns& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DemonRuns(DemonRuns&& from) noexcept
    : DemonRuns() {
    *this = ::std::move(from);
  }

  inline DemonRuns& operator=(DemonRuns&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const DemonRuns& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DemonRuns* internal_default_instance() {
    return reinterpret_cast<const DemonRuns*>(
               &_DemonRuns_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(DemonRuns* other);
  friend void swap(DemonRuns& a, DemonRuns& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DemonRuns* New() const final {
    return CreateMaybeMessage<DemonRuns>(NULL);
  }

  DemonRuns* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DemonRuns>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DemonRuns& from);
  void MergeFrom(const DemonRuns& from);
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
  void InternalSwap(DemonRuns* other);
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

  // repeated int64 start_time = 2;
  int start_time_size() const;
  void clear_start_time();
  static const int kStartTimeFieldNumber = 2;
  ::google::protobuf::int64 start_time(int index) const;
  void set_start_time(int index, ::google::protobuf::int64 value);
  void add_start_time(::google::protobuf::int64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      start_time() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_start_time();

  // repeated int64 end_time = 3;
  int end_time_size() const;
  void clear_end_time();
  static const int kEndTimeFieldNumber = 3;
  ::google::protobuf::int64 end_time(int index) const;
  void set_end_time(int index, ::google::protobuf::int64 value);
  void add_end_time(::google::protobuf::int64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      end_time() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_end_time();

  // string demon_id = 1;
  void clear_demon_id();
  static const int kDemonIdFieldNumber = 1;
  const ::std::string& demon_id() const;
  void set_demon_id(const ::std::string& value);
  #if LANG_CXX11
  void set_demon_id(::std::string&& value);
  #endif
  void set_demon_id(const char* value);
  void set_demon_id(const char* value, size_t size);
  ::std::string* mutable_demon_id();
  ::std::string* release_demon_id();
  void set_allocated_demon_id(::std::string* demon_id);

  // int64 failures = 4;
  void clear_failures();
  static const int kFailuresFieldNumber = 4;
  ::google::protobuf::int64 failures() const;
  void set_failures(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:operations_research.DemonRuns)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > start_time_;
  mutable int _start_time_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > end_time_;
  mutable int _end_time_cached_byte_size_;
  ::google::protobuf::internal::ArenaStringPtr demon_id_;
  ::google::protobuf::int64 failures_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ortools_2fconstraint_5fsolver_2fdemon_5fprofiler_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ConstraintRuns : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:operations_research.ConstraintRuns) */ {
 public:
  ConstraintRuns();
  virtual ~ConstraintRuns();

  ConstraintRuns(const ConstraintRuns& from);

  inline ConstraintRuns& operator=(const ConstraintRuns& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ConstraintRuns(ConstraintRuns&& from) noexcept
    : ConstraintRuns() {
    *this = ::std::move(from);
  }

  inline ConstraintRuns& operator=(ConstraintRuns&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ConstraintRuns& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ConstraintRuns* internal_default_instance() {
    return reinterpret_cast<const ConstraintRuns*>(
               &_ConstraintRuns_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ConstraintRuns* other);
  friend void swap(ConstraintRuns& a, ConstraintRuns& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ConstraintRuns* New() const final {
    return CreateMaybeMessage<ConstraintRuns>(NULL);
  }

  ConstraintRuns* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ConstraintRuns>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ConstraintRuns& from);
  void MergeFrom(const ConstraintRuns& from);
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
  void InternalSwap(ConstraintRuns* other);
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

  // repeated int64 initial_propagation_start_time = 2;
  int initial_propagation_start_time_size() const;
  void clear_initial_propagation_start_time();
  static const int kInitialPropagationStartTimeFieldNumber = 2;
  ::google::protobuf::int64 initial_propagation_start_time(int index) const;
  void set_initial_propagation_start_time(int index, ::google::protobuf::int64 value);
  void add_initial_propagation_start_time(::google::protobuf::int64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      initial_propagation_start_time() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_initial_propagation_start_time();

  // repeated int64 initial_propagation_end_time = 3;
  int initial_propagation_end_time_size() const;
  void clear_initial_propagation_end_time();
  static const int kInitialPropagationEndTimeFieldNumber = 3;
  ::google::protobuf::int64 initial_propagation_end_time(int index) const;
  void set_initial_propagation_end_time(int index, ::google::protobuf::int64 value);
  void add_initial_propagation_end_time(::google::protobuf::int64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      initial_propagation_end_time() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_initial_propagation_end_time();

  // repeated .operations_research.DemonRuns demons = 5;
  int demons_size() const;
  void clear_demons();
  static const int kDemonsFieldNumber = 5;
  ::operations_research::DemonRuns* mutable_demons(int index);
  ::google::protobuf::RepeatedPtrField< ::operations_research::DemonRuns >*
      mutable_demons();
  const ::operations_research::DemonRuns& demons(int index) const;
  ::operations_research::DemonRuns* add_demons();
  const ::google::protobuf::RepeatedPtrField< ::operations_research::DemonRuns >&
      demons() const;

  // string constraint_id = 1;
  void clear_constraint_id();
  static const int kConstraintIdFieldNumber = 1;
  const ::std::string& constraint_id() const;
  void set_constraint_id(const ::std::string& value);
  #if LANG_CXX11
  void set_constraint_id(::std::string&& value);
  #endif
  void set_constraint_id(const char* value);
  void set_constraint_id(const char* value, size_t size);
  ::std::string* mutable_constraint_id();
  ::std::string* release_constraint_id();
  void set_allocated_constraint_id(::std::string* constraint_id);

  // int64 failures = 4;
  void clear_failures();
  static const int kFailuresFieldNumber = 4;
  ::google::protobuf::int64 failures() const;
  void set_failures(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:operations_research.ConstraintRuns)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > initial_propagation_start_time_;
  mutable int _initial_propagation_start_time_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > initial_propagation_end_time_;
  mutable int _initial_propagation_end_time_cached_byte_size_;
  ::google::protobuf::RepeatedPtrField< ::operations_research::DemonRuns > demons_;
  ::google::protobuf::internal::ArenaStringPtr constraint_id_;
  ::google::protobuf::int64 failures_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_ortools_2fconstraint_5fsolver_2fdemon_5fprofiler_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DemonRuns

// string demon_id = 1;
inline void DemonRuns::clear_demon_id() {
  demon_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DemonRuns::demon_id() const {
  // @@protoc_insertion_point(field_get:operations_research.DemonRuns.demon_id)
  return demon_id_.GetNoArena();
}
inline void DemonRuns::set_demon_id(const ::std::string& value) {
  
  demon_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:operations_research.DemonRuns.demon_id)
}
#if LANG_CXX11
inline void DemonRuns::set_demon_id(::std::string&& value) {
  
  demon_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:operations_research.DemonRuns.demon_id)
}
#endif
inline void DemonRuns::set_demon_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  demon_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:operations_research.DemonRuns.demon_id)
}
inline void DemonRuns::set_demon_id(const char* value, size_t size) {
  
  demon_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:operations_research.DemonRuns.demon_id)
}
inline ::std::string* DemonRuns::mutable_demon_id() {
  
  // @@protoc_insertion_point(field_mutable:operations_research.DemonRuns.demon_id)
  return demon_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DemonRuns::release_demon_id() {
  // @@protoc_insertion_point(field_release:operations_research.DemonRuns.demon_id)
  
  return demon_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DemonRuns::set_allocated_demon_id(::std::string* demon_id) {
  if (demon_id != NULL) {
    
  } else {
    
  }
  demon_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), demon_id);
  // @@protoc_insertion_point(field_set_allocated:operations_research.DemonRuns.demon_id)
}

// repeated int64 start_time = 2;
inline int DemonRuns::start_time_size() const {
  return start_time_.size();
}
inline void DemonRuns::clear_start_time() {
  start_time_.Clear();
}
inline ::google::protobuf::int64 DemonRuns::start_time(int index) const {
  // @@protoc_insertion_point(field_get:operations_research.DemonRuns.start_time)
  return start_time_.Get(index);
}
inline void DemonRuns::set_start_time(int index, ::google::protobuf::int64 value) {
  start_time_.Set(index, value);
  // @@protoc_insertion_point(field_set:operations_research.DemonRuns.start_time)
}
inline void DemonRuns::add_start_time(::google::protobuf::int64 value) {
  start_time_.Add(value);
  // @@protoc_insertion_point(field_add:operations_research.DemonRuns.start_time)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
DemonRuns::start_time() const {
  // @@protoc_insertion_point(field_list:operations_research.DemonRuns.start_time)
  return start_time_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
DemonRuns::mutable_start_time() {
  // @@protoc_insertion_point(field_mutable_list:operations_research.DemonRuns.start_time)
  return &start_time_;
}

// repeated int64 end_time = 3;
inline int DemonRuns::end_time_size() const {
  return end_time_.size();
}
inline void DemonRuns::clear_end_time() {
  end_time_.Clear();
}
inline ::google::protobuf::int64 DemonRuns::end_time(int index) const {
  // @@protoc_insertion_point(field_get:operations_research.DemonRuns.end_time)
  return end_time_.Get(index);
}
inline void DemonRuns::set_end_time(int index, ::google::protobuf::int64 value) {
  end_time_.Set(index, value);
  // @@protoc_insertion_point(field_set:operations_research.DemonRuns.end_time)
}
inline void DemonRuns::add_end_time(::google::protobuf::int64 value) {
  end_time_.Add(value);
  // @@protoc_insertion_point(field_add:operations_research.DemonRuns.end_time)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
DemonRuns::end_time() const {
  // @@protoc_insertion_point(field_list:operations_research.DemonRuns.end_time)
  return end_time_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
DemonRuns::mutable_end_time() {
  // @@protoc_insertion_point(field_mutable_list:operations_research.DemonRuns.end_time)
  return &end_time_;
}

// int64 failures = 4;
inline void DemonRuns::clear_failures() {
  failures_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 DemonRuns::failures() const {
  // @@protoc_insertion_point(field_get:operations_research.DemonRuns.failures)
  return failures_;
}
inline void DemonRuns::set_failures(::google::protobuf::int64 value) {
  
  failures_ = value;
  // @@protoc_insertion_point(field_set:operations_research.DemonRuns.failures)
}

// -------------------------------------------------------------------

// ConstraintRuns

// string constraint_id = 1;
inline void ConstraintRuns::clear_constraint_id() {
  constraint_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ConstraintRuns::constraint_id() const {
  // @@protoc_insertion_point(field_get:operations_research.ConstraintRuns.constraint_id)
  return constraint_id_.GetNoArena();
}
inline void ConstraintRuns::set_constraint_id(const ::std::string& value) {
  
  constraint_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:operations_research.ConstraintRuns.constraint_id)
}
#if LANG_CXX11
inline void ConstraintRuns::set_constraint_id(::std::string&& value) {
  
  constraint_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:operations_research.ConstraintRuns.constraint_id)
}
#endif
inline void ConstraintRuns::set_constraint_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  constraint_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:operations_research.ConstraintRuns.constraint_id)
}
inline void ConstraintRuns::set_constraint_id(const char* value, size_t size) {
  
  constraint_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:operations_research.ConstraintRuns.constraint_id)
}
inline ::std::string* ConstraintRuns::mutable_constraint_id() {
  
  // @@protoc_insertion_point(field_mutable:operations_research.ConstraintRuns.constraint_id)
  return constraint_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConstraintRuns::release_constraint_id() {
  // @@protoc_insertion_point(field_release:operations_research.ConstraintRuns.constraint_id)
  
  return constraint_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConstraintRuns::set_allocated_constraint_id(::std::string* constraint_id) {
  if (constraint_id != NULL) {
    
  } else {
    
  }
  constraint_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), constraint_id);
  // @@protoc_insertion_point(field_set_allocated:operations_research.ConstraintRuns.constraint_id)
}

// repeated int64 initial_propagation_start_time = 2;
inline int ConstraintRuns::initial_propagation_start_time_size() const {
  return initial_propagation_start_time_.size();
}
inline void ConstraintRuns::clear_initial_propagation_start_time() {
  initial_propagation_start_time_.Clear();
}
inline ::google::protobuf::int64 ConstraintRuns::initial_propagation_start_time(int index) const {
  // @@protoc_insertion_point(field_get:operations_research.ConstraintRuns.initial_propagation_start_time)
  return initial_propagation_start_time_.Get(index);
}
inline void ConstraintRuns::set_initial_propagation_start_time(int index, ::google::protobuf::int64 value) {
  initial_propagation_start_time_.Set(index, value);
  // @@protoc_insertion_point(field_set:operations_research.ConstraintRuns.initial_propagation_start_time)
}
inline void ConstraintRuns::add_initial_propagation_start_time(::google::protobuf::int64 value) {
  initial_propagation_start_time_.Add(value);
  // @@protoc_insertion_point(field_add:operations_research.ConstraintRuns.initial_propagation_start_time)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
ConstraintRuns::initial_propagation_start_time() const {
  // @@protoc_insertion_point(field_list:operations_research.ConstraintRuns.initial_propagation_start_time)
  return initial_propagation_start_time_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
ConstraintRuns::mutable_initial_propagation_start_time() {
  // @@protoc_insertion_point(field_mutable_list:operations_research.ConstraintRuns.initial_propagation_start_time)
  return &initial_propagation_start_time_;
}

// repeated int64 initial_propagation_end_time = 3;
inline int ConstraintRuns::initial_propagation_end_time_size() const {
  return initial_propagation_end_time_.size();
}
inline void ConstraintRuns::clear_initial_propagation_end_time() {
  initial_propagation_end_time_.Clear();
}
inline ::google::protobuf::int64 ConstraintRuns::initial_propagation_end_time(int index) const {
  // @@protoc_insertion_point(field_get:operations_research.ConstraintRuns.initial_propagation_end_time)
  return initial_propagation_end_time_.Get(index);
}
inline void ConstraintRuns::set_initial_propagation_end_time(int index, ::google::protobuf::int64 value) {
  initial_propagation_end_time_.Set(index, value);
  // @@protoc_insertion_point(field_set:operations_research.ConstraintRuns.initial_propagation_end_time)
}
inline void ConstraintRuns::add_initial_propagation_end_time(::google::protobuf::int64 value) {
  initial_propagation_end_time_.Add(value);
  // @@protoc_insertion_point(field_add:operations_research.ConstraintRuns.initial_propagation_end_time)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
ConstraintRuns::initial_propagation_end_time() const {
  // @@protoc_insertion_point(field_list:operations_research.ConstraintRuns.initial_propagation_end_time)
  return initial_propagation_end_time_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
ConstraintRuns::mutable_initial_propagation_end_time() {
  // @@protoc_insertion_point(field_mutable_list:operations_research.ConstraintRuns.initial_propagation_end_time)
  return &initial_propagation_end_time_;
}

// int64 failures = 4;
inline void ConstraintRuns::clear_failures() {
  failures_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ConstraintRuns::failures() const {
  // @@protoc_insertion_point(field_get:operations_research.ConstraintRuns.failures)
  return failures_;
}
inline void ConstraintRuns::set_failures(::google::protobuf::int64 value) {
  
  failures_ = value;
  // @@protoc_insertion_point(field_set:operations_research.ConstraintRuns.failures)
}

// repeated .operations_research.DemonRuns demons = 5;
inline int ConstraintRuns::demons_size() const {
  return demons_.size();
}
inline void ConstraintRuns::clear_demons() {
  demons_.Clear();
}
inline ::operations_research::DemonRuns* ConstraintRuns::mutable_demons(int index) {
  // @@protoc_insertion_point(field_mutable:operations_research.ConstraintRuns.demons)
  return demons_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::operations_research::DemonRuns >*
ConstraintRuns::mutable_demons() {
  // @@protoc_insertion_point(field_mutable_list:operations_research.ConstraintRuns.demons)
  return &demons_;
}
inline const ::operations_research::DemonRuns& ConstraintRuns::demons(int index) const {
  // @@protoc_insertion_point(field_get:operations_research.ConstraintRuns.demons)
  return demons_.Get(index);
}
inline ::operations_research::DemonRuns* ConstraintRuns::add_demons() {
  // @@protoc_insertion_point(field_add:operations_research.ConstraintRuns.demons)
  return demons_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::operations_research::DemonRuns >&
ConstraintRuns::demons() const {
  // @@protoc_insertion_point(field_list:operations_research.ConstraintRuns.demons)
  return demons_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace operations_research

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_ortools_2fconstraint_5fsolver_2fdemon_5fprofiler_2eproto

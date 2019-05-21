// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/xtrace.proto

#ifndef PROTOBUF_proto_2fxtrace_2eproto__INCLUDED
#define PROTOBUF_proto_2fxtrace_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_proto_2fxtrace_2eproto();
void protobuf_AssignDesc_proto_2fxtrace_2eproto();
void protobuf_ShutdownFile_proto_2fxtrace_2eproto();

class XTraceReportv4;

// ===================================================================

class XTraceReportv4 : public ::google::protobuf::Message {
 public:
  XTraceReportv4();
  virtual ~XTraceReportv4();

  XTraceReportv4(const XTraceReportv4& from);

  inline XTraceReportv4& operator=(const XTraceReportv4& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const XTraceReportv4& default_instance();

  void Swap(XTraceReportv4* other);

  // implements Message ----------------------------------------------

  XTraceReportv4* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const XTraceReportv4& from);
  void MergeFrom(const XTraceReportv4& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional sfixed64 task_id = 1;
  inline bool has_task_id() const;
  inline void clear_task_id();
  static const int kTaskIdFieldNumber = 1;
  inline ::google::protobuf::int64 task_id() const;
  inline void set_task_id(::google::protobuf::int64 value);

  // optional sfixed64 event_id = 2;
  inline bool has_event_id() const;
  inline void clear_event_id();
  static const int kEventIdFieldNumber = 2;
  inline ::google::protobuf::int64 event_id() const;
  inline void set_event_id(::google::protobuf::int64 value);

  // repeated sfixed64 parent_event_id = 3;
  inline int parent_event_id_size() const;
  inline void clear_parent_event_id();
  static const int kParentEventIdFieldNumber = 3;
  inline ::google::protobuf::int64 parent_event_id(int index) const;
  inline void set_parent_event_id(int index, ::google::protobuf::int64 value);
  inline void add_parent_event_id(::google::protobuf::int64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      parent_event_id() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_parent_event_id();

  // optional int64 timestamp = 4;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 4;
  inline ::google::protobuf::int64 timestamp() const;
  inline void set_timestamp(::google::protobuf::int64 value);

  // optional int64 hrt = 5;
  inline bool has_hrt() const;
  inline void clear_hrt();
  static const int kHrtFieldNumber = 5;
  inline ::google::protobuf::int64 hrt() const;
  inline void set_hrt(::google::protobuf::int64 value);

  // optional int64 cycles = 6;
  inline bool has_cycles() const;
  inline void clear_cycles();
  static const int kCyclesFieldNumber = 6;
  inline ::google::protobuf::int64 cycles() const;
  inline void set_cycles(::google::protobuf::int64 value);

  // optional string host = 7;
  inline bool has_host() const;
  inline void clear_host();
  static const int kHostFieldNumber = 7;
  inline const ::std::string& host() const;
  inline void set_host(const ::std::string& value);
  inline void set_host(const char* value);
  inline void set_host(const char* value, size_t size);
  inline ::std::string* mutable_host();
  inline ::std::string* release_host();
  inline void set_allocated_host(::std::string* host);

  // optional int32 process_id = 8;
  inline bool has_process_id() const;
  inline void clear_process_id();
  static const int kProcessIdFieldNumber = 8;
  inline ::google::protobuf::int32 process_id() const;
  inline void set_process_id(::google::protobuf::int32 value);

  // optional string process_name = 9;
  inline bool has_process_name() const;
  inline void clear_process_name();
  static const int kProcessNameFieldNumber = 9;
  inline const ::std::string& process_name() const;
  inline void set_process_name(const ::std::string& value);
  inline void set_process_name(const char* value);
  inline void set_process_name(const char* value, size_t size);
  inline ::std::string* mutable_process_name();
  inline ::std::string* release_process_name();
  inline void set_allocated_process_name(::std::string* process_name);

  // optional int32 thread_id = 10;
  inline bool has_thread_id() const;
  inline void clear_thread_id();
  static const int kThreadIdFieldNumber = 10;
  inline ::google::protobuf::int32 thread_id() const;
  inline void set_thread_id(::google::protobuf::int32 value);

  // optional string threadName = 11;
  inline bool has_threadname() const;
  inline void clear_threadname();
  static const int kThreadNameFieldNumber = 11;
  inline const ::std::string& threadname() const;
  inline void set_threadname(const ::std::string& value);
  inline void set_threadname(const char* value);
  inline void set_threadname(const char* value, size_t size);
  inline ::std::string* mutable_threadname();
  inline ::std::string* release_threadname();
  inline void set_allocated_threadname(::std::string* threadname);

  // optional string agent = 12;
  inline bool has_agent() const;
  inline void clear_agent();
  static const int kAgentFieldNumber = 12;
  inline const ::std::string& agent() const;
  inline void set_agent(const ::std::string& value);
  inline void set_agent(const char* value);
  inline void set_agent(const char* value, size_t size);
  inline ::std::string* mutable_agent();
  inline ::std::string* release_agent();
  inline void set_allocated_agent(::std::string* agent);

  // optional string source = 13;
  inline bool has_source() const;
  inline void clear_source();
  static const int kSourceFieldNumber = 13;
  inline const ::std::string& source() const;
  inline void set_source(const ::std::string& value);
  inline void set_source(const char* value);
  inline void set_source(const char* value, size_t size);
  inline ::std::string* mutable_source();
  inline ::std::string* release_source();
  inline void set_allocated_source(::std::string* source);

  // optional string label = 14;
  inline bool has_label() const;
  inline void clear_label();
  static const int kLabelFieldNumber = 14;
  inline const ::std::string& label() const;
  inline void set_label(const ::std::string& value);
  inline void set_label(const char* value);
  inline void set_label(const char* value, size_t size);
  inline ::std::string* mutable_label();
  inline ::std::string* release_label();
  inline void set_allocated_label(::std::string* label);

  // repeated string key = 15;
  inline int key_size() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 15;
  inline const ::std::string& key(int index) const;
  inline ::std::string* mutable_key(int index);
  inline void set_key(int index, const ::std::string& value);
  inline void set_key(int index, const char* value);
  inline void set_key(int index, const char* value, size_t size);
  inline ::std::string* add_key();
  inline void add_key(const ::std::string& value);
  inline void add_key(const char* value);
  inline void add_key(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& key() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_key();

  // repeated string value = 16;
  inline int value_size() const;
  inline void clear_value();
  static const int kValueFieldNumber = 16;
  inline const ::std::string& value(int index) const;
  inline ::std::string* mutable_value(int index);
  inline void set_value(int index, const ::std::string& value);
  inline void set_value(int index, const char* value);
  inline void set_value(int index, const char* value, size_t size);
  inline ::std::string* add_value();
  inline void add_value(const ::std::string& value);
  inline void add_value(const char* value);
  inline void add_value(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& value() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_value();

  // repeated string tags = 17;
  inline int tags_size() const;
  inline void clear_tags();
  static const int kTagsFieldNumber = 17;
  inline const ::std::string& tags(int index) const;
  inline ::std::string* mutable_tags(int index);
  inline void set_tags(int index, const ::std::string& value);
  inline void set_tags(int index, const char* value);
  inline void set_tags(int index, const char* value, size_t size);
  inline ::std::string* add_tags();
  inline void add_tags(const ::std::string& value);
  inline void add_tags(const char* value);
  inline void add_tags(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& tags() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_tags();

  // optional int32 tenantClass = 18;
  inline bool has_tenantclass() const;
  inline void clear_tenantclass();
  static const int kTenantClassFieldNumber = 18;
  inline ::google::protobuf::int32 tenantclass() const;
  inline void set_tenantclass(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:XTraceReportv4)
 private:
  inline void set_has_task_id();
  inline void clear_has_task_id();
  inline void set_has_event_id();
  inline void clear_has_event_id();
  inline void set_has_timestamp();
  inline void clear_has_timestamp();
  inline void set_has_hrt();
  inline void clear_has_hrt();
  inline void set_has_cycles();
  inline void clear_has_cycles();
  inline void set_has_host();
  inline void clear_has_host();
  inline void set_has_process_id();
  inline void clear_has_process_id();
  inline void set_has_process_name();
  inline void clear_has_process_name();
  inline void set_has_thread_id();
  inline void clear_has_thread_id();
  inline void set_has_threadname();
  inline void clear_has_threadname();
  inline void set_has_agent();
  inline void clear_has_agent();
  inline void set_has_source();
  inline void clear_has_source();
  inline void set_has_label();
  inline void clear_has_label();
  inline void set_has_tenantclass();
  inline void clear_has_tenantclass();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 task_id_;
  ::google::protobuf::int64 event_id_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > parent_event_id_;
  ::google::protobuf::int64 timestamp_;
  ::google::protobuf::int64 hrt_;
  ::google::protobuf::int64 cycles_;
  ::std::string* host_;
  ::std::string* process_name_;
  ::google::protobuf::int32 process_id_;
  ::google::protobuf::int32 thread_id_;
  ::std::string* threadname_;
  ::std::string* agent_;
  ::std::string* source_;
  ::std::string* label_;
  ::google::protobuf::RepeatedPtrField< ::std::string> key_;
  ::google::protobuf::RepeatedPtrField< ::std::string> value_;
  ::google::protobuf::RepeatedPtrField< ::std::string> tags_;
  ::google::protobuf::int32 tenantclass_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(18 + 31) / 32];

  friend void  protobuf_AddDesc_proto_2fxtrace_2eproto();
  friend void protobuf_AssignDesc_proto_2fxtrace_2eproto();
  friend void protobuf_ShutdownFile_proto_2fxtrace_2eproto();

  void InitAsDefaultInstance();
  static XTraceReportv4* default_instance_;
};
// ===================================================================


// ===================================================================

// XTraceReportv4

// optional sfixed64 task_id = 1;
inline bool XTraceReportv4::has_task_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void XTraceReportv4::set_has_task_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void XTraceReportv4::clear_has_task_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void XTraceReportv4::clear_task_id() {
  task_id_ = GOOGLE_LONGLONG(0);
  clear_has_task_id();
}
inline ::google::protobuf::int64 XTraceReportv4::task_id() const {
  return task_id_;
}
inline void XTraceReportv4::set_task_id(::google::protobuf::int64 value) {
  set_has_task_id();
  task_id_ = value;
}

// optional sfixed64 event_id = 2;
inline bool XTraceReportv4::has_event_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void XTraceReportv4::set_has_event_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void XTraceReportv4::clear_has_event_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void XTraceReportv4::clear_event_id() {
  event_id_ = GOOGLE_LONGLONG(0);
  clear_has_event_id();
}
inline ::google::protobuf::int64 XTraceReportv4::event_id() const {
  return event_id_;
}
inline void XTraceReportv4::set_event_id(::google::protobuf::int64 value) {
  set_has_event_id();
  event_id_ = value;
}

// repeated sfixed64 parent_event_id = 3;
inline int XTraceReportv4::parent_event_id_size() const {
  return parent_event_id_.size();
}
inline void XTraceReportv4::clear_parent_event_id() {
  parent_event_id_.Clear();
}
inline ::google::protobuf::int64 XTraceReportv4::parent_event_id(int index) const {
  return parent_event_id_.Get(index);
}
inline void XTraceReportv4::set_parent_event_id(int index, ::google::protobuf::int64 value) {
  parent_event_id_.Set(index, value);
}
inline void XTraceReportv4::add_parent_event_id(::google::protobuf::int64 value) {
  parent_event_id_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
XTraceReportv4::parent_event_id() const {
  return parent_event_id_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
XTraceReportv4::mutable_parent_event_id() {
  return &parent_event_id_;
}

// optional int64 timestamp = 4;
inline bool XTraceReportv4::has_timestamp() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void XTraceReportv4::set_has_timestamp() {
  _has_bits_[0] |= 0x00000008u;
}
inline void XTraceReportv4::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void XTraceReportv4::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::int64 XTraceReportv4::timestamp() const {
  return timestamp_;
}
inline void XTraceReportv4::set_timestamp(::google::protobuf::int64 value) {
  set_has_timestamp();
  timestamp_ = value;
}

// optional int64 hrt = 5;
inline bool XTraceReportv4::has_hrt() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void XTraceReportv4::set_has_hrt() {
  _has_bits_[0] |= 0x00000010u;
}
inline void XTraceReportv4::clear_has_hrt() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void XTraceReportv4::clear_hrt() {
  hrt_ = GOOGLE_LONGLONG(0);
  clear_has_hrt();
}
inline ::google::protobuf::int64 XTraceReportv4::hrt() const {
  return hrt_;
}
inline void XTraceReportv4::set_hrt(::google::protobuf::int64 value) {
  set_has_hrt();
  hrt_ = value;
}

// optional int64 cycles = 6;
inline bool XTraceReportv4::has_cycles() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void XTraceReportv4::set_has_cycles() {
  _has_bits_[0] |= 0x00000020u;
}
inline void XTraceReportv4::clear_has_cycles() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void XTraceReportv4::clear_cycles() {
  cycles_ = GOOGLE_LONGLONG(0);
  clear_has_cycles();
}
inline ::google::protobuf::int64 XTraceReportv4::cycles() const {
  return cycles_;
}
inline void XTraceReportv4::set_cycles(::google::protobuf::int64 value) {
  set_has_cycles();
  cycles_ = value;
}

// optional string host = 7;
inline bool XTraceReportv4::has_host() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void XTraceReportv4::set_has_host() {
  _has_bits_[0] |= 0x00000040u;
}
inline void XTraceReportv4::clear_has_host() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void XTraceReportv4::clear_host() {
  if (host_ != &::google::protobuf::internal::kEmptyString) {
    host_->clear();
  }
  clear_has_host();
}
inline const ::std::string& XTraceReportv4::host() const {
  return *host_;
}
inline void XTraceReportv4::set_host(const ::std::string& value) {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  host_->assign(value);
}
inline void XTraceReportv4::set_host(const char* value) {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  host_->assign(value);
}
inline void XTraceReportv4::set_host(const char* value, size_t size) {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  host_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* XTraceReportv4::mutable_host() {
  set_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    host_ = new ::std::string;
  }
  return host_;
}
inline ::std::string* XTraceReportv4::release_host() {
  clear_has_host();
  if (host_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = host_;
    host_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void XTraceReportv4::set_allocated_host(::std::string* host) {
  if (host_ != &::google::protobuf::internal::kEmptyString) {
    delete host_;
  }
  if (host) {
    set_has_host();
    host_ = host;
  } else {
    clear_has_host();
    host_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 process_id = 8;
inline bool XTraceReportv4::has_process_id() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void XTraceReportv4::set_has_process_id() {
  _has_bits_[0] |= 0x00000080u;
}
inline void XTraceReportv4::clear_has_process_id() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void XTraceReportv4::clear_process_id() {
  process_id_ = 0;
  clear_has_process_id();
}
inline ::google::protobuf::int32 XTraceReportv4::process_id() const {
  return process_id_;
}
inline void XTraceReportv4::set_process_id(::google::protobuf::int32 value) {
  set_has_process_id();
  process_id_ = value;
}

// optional string process_name = 9;
inline bool XTraceReportv4::has_process_name() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void XTraceReportv4::set_has_process_name() {
  _has_bits_[0] |= 0x00000100u;
}
inline void XTraceReportv4::clear_has_process_name() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void XTraceReportv4::clear_process_name() {
  if (process_name_ != &::google::protobuf::internal::kEmptyString) {
    process_name_->clear();
  }
  clear_has_process_name();
}
inline const ::std::string& XTraceReportv4::process_name() const {
  return *process_name_;
}
inline void XTraceReportv4::set_process_name(const ::std::string& value) {
  set_has_process_name();
  if (process_name_ == &::google::protobuf::internal::kEmptyString) {
    process_name_ = new ::std::string;
  }
  process_name_->assign(value);
}
inline void XTraceReportv4::set_process_name(const char* value) {
  set_has_process_name();
  if (process_name_ == &::google::protobuf::internal::kEmptyString) {
    process_name_ = new ::std::string;
  }
  process_name_->assign(value);
}
inline void XTraceReportv4::set_process_name(const char* value, size_t size) {
  set_has_process_name();
  if (process_name_ == &::google::protobuf::internal::kEmptyString) {
    process_name_ = new ::std::string;
  }
  process_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* XTraceReportv4::mutable_process_name() {
  set_has_process_name();
  if (process_name_ == &::google::protobuf::internal::kEmptyString) {
    process_name_ = new ::std::string;
  }
  return process_name_;
}
inline ::std::string* XTraceReportv4::release_process_name() {
  clear_has_process_name();
  if (process_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = process_name_;
    process_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void XTraceReportv4::set_allocated_process_name(::std::string* process_name) {
  if (process_name_ != &::google::protobuf::internal::kEmptyString) {
    delete process_name_;
  }
  if (process_name) {
    set_has_process_name();
    process_name_ = process_name;
  } else {
    clear_has_process_name();
    process_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 thread_id = 10;
inline bool XTraceReportv4::has_thread_id() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void XTraceReportv4::set_has_thread_id() {
  _has_bits_[0] |= 0x00000200u;
}
inline void XTraceReportv4::clear_has_thread_id() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void XTraceReportv4::clear_thread_id() {
  thread_id_ = 0;
  clear_has_thread_id();
}
inline ::google::protobuf::int32 XTraceReportv4::thread_id() const {
  return thread_id_;
}
inline void XTraceReportv4::set_thread_id(::google::protobuf::int32 value) {
  set_has_thread_id();
  thread_id_ = value;
}

// optional string threadName = 11;
inline bool XTraceReportv4::has_threadname() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void XTraceReportv4::set_has_threadname() {
  _has_bits_[0] |= 0x00000400u;
}
inline void XTraceReportv4::clear_has_threadname() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void XTraceReportv4::clear_threadname() {
  if (threadname_ != &::google::protobuf::internal::kEmptyString) {
    threadname_->clear();
  }
  clear_has_threadname();
}
inline const ::std::string& XTraceReportv4::threadname() const {
  return *threadname_;
}
inline void XTraceReportv4::set_threadname(const ::std::string& value) {
  set_has_threadname();
  if (threadname_ == &::google::protobuf::internal::kEmptyString) {
    threadname_ = new ::std::string;
  }
  threadname_->assign(value);
}
inline void XTraceReportv4::set_threadname(const char* value) {
  set_has_threadname();
  if (threadname_ == &::google::protobuf::internal::kEmptyString) {
    threadname_ = new ::std::string;
  }
  threadname_->assign(value);
}
inline void XTraceReportv4::set_threadname(const char* value, size_t size) {
  set_has_threadname();
  if (threadname_ == &::google::protobuf::internal::kEmptyString) {
    threadname_ = new ::std::string;
  }
  threadname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* XTraceReportv4::mutable_threadname() {
  set_has_threadname();
  if (threadname_ == &::google::protobuf::internal::kEmptyString) {
    threadname_ = new ::std::string;
  }
  return threadname_;
}
inline ::std::string* XTraceReportv4::release_threadname() {
  clear_has_threadname();
  if (threadname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = threadname_;
    threadname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void XTraceReportv4::set_allocated_threadname(::std::string* threadname) {
  if (threadname_ != &::google::protobuf::internal::kEmptyString) {
    delete threadname_;
  }
  if (threadname) {
    set_has_threadname();
    threadname_ = threadname;
  } else {
    clear_has_threadname();
    threadname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string agent = 12;
inline bool XTraceReportv4::has_agent() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void XTraceReportv4::set_has_agent() {
  _has_bits_[0] |= 0x00000800u;
}
inline void XTraceReportv4::clear_has_agent() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void XTraceReportv4::clear_agent() {
  if (agent_ != &::google::protobuf::internal::kEmptyString) {
    agent_->clear();
  }
  clear_has_agent();
}
inline const ::std::string& XTraceReportv4::agent() const {
  return *agent_;
}
inline void XTraceReportv4::set_agent(const ::std::string& value) {
  set_has_agent();
  if (agent_ == &::google::protobuf::internal::kEmptyString) {
    agent_ = new ::std::string;
  }
  agent_->assign(value);
}
inline void XTraceReportv4::set_agent(const char* value) {
  set_has_agent();
  if (agent_ == &::google::protobuf::internal::kEmptyString) {
    agent_ = new ::std::string;
  }
  agent_->assign(value);
}
inline void XTraceReportv4::set_agent(const char* value, size_t size) {
  set_has_agent();
  if (agent_ == &::google::protobuf::internal::kEmptyString) {
    agent_ = new ::std::string;
  }
  agent_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* XTraceReportv4::mutable_agent() {
  set_has_agent();
  if (agent_ == &::google::protobuf::internal::kEmptyString) {
    agent_ = new ::std::string;
  }
  return agent_;
}
inline ::std::string* XTraceReportv4::release_agent() {
  clear_has_agent();
  if (agent_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = agent_;
    agent_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void XTraceReportv4::set_allocated_agent(::std::string* agent) {
  if (agent_ != &::google::protobuf::internal::kEmptyString) {
    delete agent_;
  }
  if (agent) {
    set_has_agent();
    agent_ = agent;
  } else {
    clear_has_agent();
    agent_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string source = 13;
inline bool XTraceReportv4::has_source() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void XTraceReportv4::set_has_source() {
  _has_bits_[0] |= 0x00001000u;
}
inline void XTraceReportv4::clear_has_source() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void XTraceReportv4::clear_source() {
  if (source_ != &::google::protobuf::internal::kEmptyString) {
    source_->clear();
  }
  clear_has_source();
}
inline const ::std::string& XTraceReportv4::source() const {
  return *source_;
}
inline void XTraceReportv4::set_source(const ::std::string& value) {
  set_has_source();
  if (source_ == &::google::protobuf::internal::kEmptyString) {
    source_ = new ::std::string;
  }
  source_->assign(value);
}
inline void XTraceReportv4::set_source(const char* value) {
  set_has_source();
  if (source_ == &::google::protobuf::internal::kEmptyString) {
    source_ = new ::std::string;
  }
  source_->assign(value);
}
inline void XTraceReportv4::set_source(const char* value, size_t size) {
  set_has_source();
  if (source_ == &::google::protobuf::internal::kEmptyString) {
    source_ = new ::std::string;
  }
  source_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* XTraceReportv4::mutable_source() {
  set_has_source();
  if (source_ == &::google::protobuf::internal::kEmptyString) {
    source_ = new ::std::string;
  }
  return source_;
}
inline ::std::string* XTraceReportv4::release_source() {
  clear_has_source();
  if (source_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = source_;
    source_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void XTraceReportv4::set_allocated_source(::std::string* source) {
  if (source_ != &::google::protobuf::internal::kEmptyString) {
    delete source_;
  }
  if (source) {
    set_has_source();
    source_ = source;
  } else {
    clear_has_source();
    source_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string label = 14;
inline bool XTraceReportv4::has_label() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void XTraceReportv4::set_has_label() {
  _has_bits_[0] |= 0x00002000u;
}
inline void XTraceReportv4::clear_has_label() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void XTraceReportv4::clear_label() {
  if (label_ != &::google::protobuf::internal::kEmptyString) {
    label_->clear();
  }
  clear_has_label();
}
inline const ::std::string& XTraceReportv4::label() const {
  return *label_;
}
inline void XTraceReportv4::set_label(const ::std::string& value) {
  set_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    label_ = new ::std::string;
  }
  label_->assign(value);
}
inline void XTraceReportv4::set_label(const char* value) {
  set_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    label_ = new ::std::string;
  }
  label_->assign(value);
}
inline void XTraceReportv4::set_label(const char* value, size_t size) {
  set_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    label_ = new ::std::string;
  }
  label_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* XTraceReportv4::mutable_label() {
  set_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    label_ = new ::std::string;
  }
  return label_;
}
inline ::std::string* XTraceReportv4::release_label() {
  clear_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = label_;
    label_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void XTraceReportv4::set_allocated_label(::std::string* label) {
  if (label_ != &::google::protobuf::internal::kEmptyString) {
    delete label_;
  }
  if (label) {
    set_has_label();
    label_ = label;
  } else {
    clear_has_label();
    label_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated string key = 15;
inline int XTraceReportv4::key_size() const {
  return key_.size();
}
inline void XTraceReportv4::clear_key() {
  key_.Clear();
}
inline const ::std::string& XTraceReportv4::key(int index) const {
  return key_.Get(index);
}
inline ::std::string* XTraceReportv4::mutable_key(int index) {
  return key_.Mutable(index);
}
inline void XTraceReportv4::set_key(int index, const ::std::string& value) {
  key_.Mutable(index)->assign(value);
}
inline void XTraceReportv4::set_key(int index, const char* value) {
  key_.Mutable(index)->assign(value);
}
inline void XTraceReportv4::set_key(int index, const char* value, size_t size) {
  key_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* XTraceReportv4::add_key() {
  return key_.Add();
}
inline void XTraceReportv4::add_key(const ::std::string& value) {
  key_.Add()->assign(value);
}
inline void XTraceReportv4::add_key(const char* value) {
  key_.Add()->assign(value);
}
inline void XTraceReportv4::add_key(const char* value, size_t size) {
  key_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
XTraceReportv4::key() const {
  return key_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
XTraceReportv4::mutable_key() {
  return &key_;
}

// repeated string value = 16;
inline int XTraceReportv4::value_size() const {
  return value_.size();
}
inline void XTraceReportv4::clear_value() {
  value_.Clear();
}
inline const ::std::string& XTraceReportv4::value(int index) const {
  return value_.Get(index);
}
inline ::std::string* XTraceReportv4::mutable_value(int index) {
  return value_.Mutable(index);
}
inline void XTraceReportv4::set_value(int index, const ::std::string& value) {
  value_.Mutable(index)->assign(value);
}
inline void XTraceReportv4::set_value(int index, const char* value) {
  value_.Mutable(index)->assign(value);
}
inline void XTraceReportv4::set_value(int index, const char* value, size_t size) {
  value_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* XTraceReportv4::add_value() {
  return value_.Add();
}
inline void XTraceReportv4::add_value(const ::std::string& value) {
  value_.Add()->assign(value);
}
inline void XTraceReportv4::add_value(const char* value) {
  value_.Add()->assign(value);
}
inline void XTraceReportv4::add_value(const char* value, size_t size) {
  value_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
XTraceReportv4::value() const {
  return value_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
XTraceReportv4::mutable_value() {
  return &value_;
}

// repeated string tags = 17;
inline int XTraceReportv4::tags_size() const {
  return tags_.size();
}
inline void XTraceReportv4::clear_tags() {
  tags_.Clear();
}
inline const ::std::string& XTraceReportv4::tags(int index) const {
  return tags_.Get(index);
}
inline ::std::string* XTraceReportv4::mutable_tags(int index) {
  return tags_.Mutable(index);
}
inline void XTraceReportv4::set_tags(int index, const ::std::string& value) {
  tags_.Mutable(index)->assign(value);
}
inline void XTraceReportv4::set_tags(int index, const char* value) {
  tags_.Mutable(index)->assign(value);
}
inline void XTraceReportv4::set_tags(int index, const char* value, size_t size) {
  tags_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* XTraceReportv4::add_tags() {
  return tags_.Add();
}
inline void XTraceReportv4::add_tags(const ::std::string& value) {
  tags_.Add()->assign(value);
}
inline void XTraceReportv4::add_tags(const char* value) {
  tags_.Add()->assign(value);
}
inline void XTraceReportv4::add_tags(const char* value, size_t size) {
  tags_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
XTraceReportv4::tags() const {
  return tags_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
XTraceReportv4::mutable_tags() {
  return &tags_;
}

// optional int32 tenantClass = 18;
inline bool XTraceReportv4::has_tenantclass() const {
  return (_has_bits_[0] & 0x00020000u) != 0;
}
inline void XTraceReportv4::set_has_tenantclass() {
  _has_bits_[0] |= 0x00020000u;
}
inline void XTraceReportv4::clear_has_tenantclass() {
  _has_bits_[0] &= ~0x00020000u;
}
inline void XTraceReportv4::clear_tenantclass() {
  tenantclass_ = 0;
  clear_has_tenantclass();
}
inline ::google::protobuf::int32 XTraceReportv4::tenantclass() const {
  return tenantclass_;
}
inline void XTraceReportv4::set_tenantclass(::google::protobuf::int32 value) {
  set_has_tenantclass();
  tenantclass_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_2fxtrace_2eproto__INCLUDED
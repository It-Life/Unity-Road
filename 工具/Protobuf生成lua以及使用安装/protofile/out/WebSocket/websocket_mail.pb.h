// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WebSocket/websocket_mail.proto

#ifndef PROTOBUF_WebSocket_2fwebsocket_5fmail_2eproto__INCLUDED
#define PROTOBUF_WebSocket_2fwebsocket_5fmail_2eproto__INCLUDED

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
void  protobuf_AddDesc_WebSocket_2fwebsocket_5fmail_2eproto();
void protobuf_AssignDesc_WebSocket_2fwebsocket_5fmail_2eproto();
void protobuf_ShutdownFile_WebSocket_2fwebsocket_5fmail_2eproto();

class CMD_GP_GetMailBox;
class CMD_GP_GetMailBox_CMD_GP_MailBox;

// ===================================================================

class CMD_GP_GetMailBox_CMD_GP_MailBox : public ::google::protobuf::Message {
 public:
  CMD_GP_GetMailBox_CMD_GP_MailBox();
  virtual ~CMD_GP_GetMailBox_CMD_GP_MailBox();

  CMD_GP_GetMailBox_CMD_GP_MailBox(const CMD_GP_GetMailBox_CMD_GP_MailBox& from);

  inline CMD_GP_GetMailBox_CMD_GP_MailBox& operator=(const CMD_GP_GetMailBox_CMD_GP_MailBox& from) {
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
  static const CMD_GP_GetMailBox_CMD_GP_MailBox& default_instance();

  void Swap(CMD_GP_GetMailBox_CMD_GP_MailBox* other);

  // implements Message ----------------------------------------------

  CMD_GP_GetMailBox_CMD_GP_MailBox* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CMD_GP_GetMailBox_CMD_GP_MailBox& from);
  void MergeFrom(const CMD_GP_GetMailBox_CMD_GP_MailBox& from);
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

  // optional int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional string title = 2;
  inline bool has_title() const;
  inline void clear_title();
  static const int kTitleFieldNumber = 2;
  inline const ::std::string& title() const;
  inline void set_title(const ::std::string& value);
  inline void set_title(const char* value);
  inline void set_title(const char* value, size_t size);
  inline ::std::string* mutable_title();
  inline ::std::string* release_title();
  inline void set_allocated_title(::std::string* title);

  // optional string time = 3;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 3;
  inline const ::std::string& time() const;
  inline void set_time(const ::std::string& value);
  inline void set_time(const char* value);
  inline void set_time(const char* value, size_t size);
  inline ::std::string* mutable_time();
  inline ::std::string* release_time();
  inline void set_allocated_time(::std::string* time);

  // optional string content = 4;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 4;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const char* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  inline void set_allocated_content(::std::string* content);

  // optional string gift = 5;
  inline bool has_gift() const;
  inline void clear_gift();
  static const int kGiftFieldNumber = 5;
  inline const ::std::string& gift() const;
  inline void set_gift(const ::std::string& value);
  inline void set_gift(const char* value);
  inline void set_gift(const char* value, size_t size);
  inline ::std::string* mutable_gift();
  inline ::std::string* release_gift();
  inline void set_allocated_gift(::std::string* gift);

  // optional int32 giftStatus = 6;
  inline bool has_giftstatus() const;
  inline void clear_giftstatus();
  static const int kGiftStatusFieldNumber = 6;
  inline ::google::protobuf::int32 giftstatus() const;
  inline void set_giftstatus(::google::protobuf::int32 value);

  // optional int32 readStatus = 7;
  inline bool has_readstatus() const;
  inline void clear_readstatus();
  static const int kReadStatusFieldNumber = 7;
  inline ::google::protobuf::int32 readstatus() const;
  inline void set_readstatus(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:CMD_GP_GetMailBox.CMD_GP_MailBox)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_title();
  inline void clear_has_title();
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_content();
  inline void clear_has_content();
  inline void set_has_gift();
  inline void clear_has_gift();
  inline void set_has_giftstatus();
  inline void clear_has_giftstatus();
  inline void set_has_readstatus();
  inline void clear_has_readstatus();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* title_;
  ::std::string* time_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 giftstatus_;
  ::std::string* content_;
  ::std::string* gift_;
  ::google::protobuf::int32 readstatus_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  friend void  protobuf_AddDesc_WebSocket_2fwebsocket_5fmail_2eproto();
  friend void protobuf_AssignDesc_WebSocket_2fwebsocket_5fmail_2eproto();
  friend void protobuf_ShutdownFile_WebSocket_2fwebsocket_5fmail_2eproto();

  void InitAsDefaultInstance();
  static CMD_GP_GetMailBox_CMD_GP_MailBox* default_instance_;
};
// -------------------------------------------------------------------

class CMD_GP_GetMailBox : public ::google::protobuf::Message {
 public:
  CMD_GP_GetMailBox();
  virtual ~CMD_GP_GetMailBox();

  CMD_GP_GetMailBox(const CMD_GP_GetMailBox& from);

  inline CMD_GP_GetMailBox& operator=(const CMD_GP_GetMailBox& from) {
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
  static const CMD_GP_GetMailBox& default_instance();

  void Swap(CMD_GP_GetMailBox* other);

  // implements Message ----------------------------------------------

  CMD_GP_GetMailBox* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CMD_GP_GetMailBox& from);
  void MergeFrom(const CMD_GP_GetMailBox& from);
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

  typedef CMD_GP_GetMailBox_CMD_GP_MailBox CMD_GP_MailBox;

  // accessors -------------------------------------------------------

  // repeated .CMD_GP_GetMailBox.CMD_GP_MailBox mailBox = 1;
  inline int mailbox_size() const;
  inline void clear_mailbox();
  static const int kMailBoxFieldNumber = 1;
  inline const ::CMD_GP_GetMailBox_CMD_GP_MailBox& mailbox(int index) const;
  inline ::CMD_GP_GetMailBox_CMD_GP_MailBox* mutable_mailbox(int index);
  inline ::CMD_GP_GetMailBox_CMD_GP_MailBox* add_mailbox();
  inline const ::google::protobuf::RepeatedPtrField< ::CMD_GP_GetMailBox_CMD_GP_MailBox >&
      mailbox() const;
  inline ::google::protobuf::RepeatedPtrField< ::CMD_GP_GetMailBox_CMD_GP_MailBox >*
      mutable_mailbox();

  // @@protoc_insertion_point(class_scope:CMD_GP_GetMailBox)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::CMD_GP_GetMailBox_CMD_GP_MailBox > mailbox_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_WebSocket_2fwebsocket_5fmail_2eproto();
  friend void protobuf_AssignDesc_WebSocket_2fwebsocket_5fmail_2eproto();
  friend void protobuf_ShutdownFile_WebSocket_2fwebsocket_5fmail_2eproto();

  void InitAsDefaultInstance();
  static CMD_GP_GetMailBox* default_instance_;
};
// ===================================================================


// ===================================================================

// CMD_GP_GetMailBox_CMD_GP_MailBox

// optional int32 type = 1;
inline bool CMD_GP_GetMailBox_CMD_GP_MailBox::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 CMD_GP_GetMailBox_CMD_GP_MailBox::type() const {
  return type_;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional string title = 2;
inline bool CMD_GP_GetMailBox_CMD_GP_MailBox::has_title() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_has_title() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_has_title() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_title() {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    title_->clear();
  }
  clear_has_title();
}
inline const ::std::string& CMD_GP_GetMailBox_CMD_GP_MailBox::title() const {
  return *title_;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_title(const ::std::string& value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_title(const char* value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_title(const char* value, size_t size) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CMD_GP_GetMailBox_CMD_GP_MailBox::mutable_title() {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  return title_;
}
inline ::std::string* CMD_GP_GetMailBox_CMD_GP_MailBox::release_title() {
  clear_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = title_;
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_allocated_title(::std::string* title) {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    delete title_;
  }
  if (title) {
    set_has_title();
    title_ = title;
  } else {
    clear_has_title();
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string time = 3;
inline bool CMD_GP_GetMailBox_CMD_GP_MailBox::has_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_has_time() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_has_time() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_time() {
  if (time_ != &::google::protobuf::internal::kEmptyString) {
    time_->clear();
  }
  clear_has_time();
}
inline const ::std::string& CMD_GP_GetMailBox_CMD_GP_MailBox::time() const {
  return *time_;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_time(const ::std::string& value) {
  set_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    time_ = new ::std::string;
  }
  time_->assign(value);
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_time(const char* value) {
  set_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    time_ = new ::std::string;
  }
  time_->assign(value);
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_time(const char* value, size_t size) {
  set_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    time_ = new ::std::string;
  }
  time_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CMD_GP_GetMailBox_CMD_GP_MailBox::mutable_time() {
  set_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    time_ = new ::std::string;
  }
  return time_;
}
inline ::std::string* CMD_GP_GetMailBox_CMD_GP_MailBox::release_time() {
  clear_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = time_;
    time_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_allocated_time(::std::string* time) {
  if (time_ != &::google::protobuf::internal::kEmptyString) {
    delete time_;
  }
  if (time) {
    set_has_time();
    time_ = time;
  } else {
    clear_has_time();
    time_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string content = 4;
inline bool CMD_GP_GetMailBox_CMD_GP_MailBox::has_content() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_has_content() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_has_content() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_content() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    content_->clear();
  }
  clear_has_content();
}
inline const ::std::string& CMD_GP_GetMailBox_CMD_GP_MailBox::content() const {
  return *content_;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_content(const ::std::string& value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_content(const char* value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_content(const char* value, size_t size) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CMD_GP_GetMailBox_CMD_GP_MailBox::mutable_content() {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  return content_;
}
inline ::std::string* CMD_GP_GetMailBox_CMD_GP_MailBox::release_content() {
  clear_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = content_;
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_allocated_content(::std::string* content) {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (content) {
    set_has_content();
    content_ = content;
  } else {
    clear_has_content();
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string gift = 5;
inline bool CMD_GP_GetMailBox_CMD_GP_MailBox::has_gift() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_has_gift() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_has_gift() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_gift() {
  if (gift_ != &::google::protobuf::internal::kEmptyString) {
    gift_->clear();
  }
  clear_has_gift();
}
inline const ::std::string& CMD_GP_GetMailBox_CMD_GP_MailBox::gift() const {
  return *gift_;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_gift(const ::std::string& value) {
  set_has_gift();
  if (gift_ == &::google::protobuf::internal::kEmptyString) {
    gift_ = new ::std::string;
  }
  gift_->assign(value);
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_gift(const char* value) {
  set_has_gift();
  if (gift_ == &::google::protobuf::internal::kEmptyString) {
    gift_ = new ::std::string;
  }
  gift_->assign(value);
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_gift(const char* value, size_t size) {
  set_has_gift();
  if (gift_ == &::google::protobuf::internal::kEmptyString) {
    gift_ = new ::std::string;
  }
  gift_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CMD_GP_GetMailBox_CMD_GP_MailBox::mutable_gift() {
  set_has_gift();
  if (gift_ == &::google::protobuf::internal::kEmptyString) {
    gift_ = new ::std::string;
  }
  return gift_;
}
inline ::std::string* CMD_GP_GetMailBox_CMD_GP_MailBox::release_gift() {
  clear_has_gift();
  if (gift_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = gift_;
    gift_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_allocated_gift(::std::string* gift) {
  if (gift_ != &::google::protobuf::internal::kEmptyString) {
    delete gift_;
  }
  if (gift) {
    set_has_gift();
    gift_ = gift;
  } else {
    clear_has_gift();
    gift_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 giftStatus = 6;
inline bool CMD_GP_GetMailBox_CMD_GP_MailBox::has_giftstatus() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_has_giftstatus() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_has_giftstatus() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_giftstatus() {
  giftstatus_ = 0;
  clear_has_giftstatus();
}
inline ::google::protobuf::int32 CMD_GP_GetMailBox_CMD_GP_MailBox::giftstatus() const {
  return giftstatus_;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_giftstatus(::google::protobuf::int32 value) {
  set_has_giftstatus();
  giftstatus_ = value;
}

// optional int32 readStatus = 7;
inline bool CMD_GP_GetMailBox_CMD_GP_MailBox::has_readstatus() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_has_readstatus() {
  _has_bits_[0] |= 0x00000040u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_has_readstatus() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::clear_readstatus() {
  readstatus_ = 0;
  clear_has_readstatus();
}
inline ::google::protobuf::int32 CMD_GP_GetMailBox_CMD_GP_MailBox::readstatus() const {
  return readstatus_;
}
inline void CMD_GP_GetMailBox_CMD_GP_MailBox::set_readstatus(::google::protobuf::int32 value) {
  set_has_readstatus();
  readstatus_ = value;
}

// -------------------------------------------------------------------

// CMD_GP_GetMailBox

// repeated .CMD_GP_GetMailBox.CMD_GP_MailBox mailBox = 1;
inline int CMD_GP_GetMailBox::mailbox_size() const {
  return mailbox_.size();
}
inline void CMD_GP_GetMailBox::clear_mailbox() {
  mailbox_.Clear();
}
inline const ::CMD_GP_GetMailBox_CMD_GP_MailBox& CMD_GP_GetMailBox::mailbox(int index) const {
  return mailbox_.Get(index);
}
inline ::CMD_GP_GetMailBox_CMD_GP_MailBox* CMD_GP_GetMailBox::mutable_mailbox(int index) {
  return mailbox_.Mutable(index);
}
inline ::CMD_GP_GetMailBox_CMD_GP_MailBox* CMD_GP_GetMailBox::add_mailbox() {
  return mailbox_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::CMD_GP_GetMailBox_CMD_GP_MailBox >&
CMD_GP_GetMailBox::mailbox() const {
  return mailbox_;
}
inline ::google::protobuf::RepeatedPtrField< ::CMD_GP_GetMailBox_CMD_GP_MailBox >*
CMD_GP_GetMailBox::mutable_mailbox() {
  return &mailbox_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_WebSocket_2fwebsocket_5fmail_2eproto__INCLUDED

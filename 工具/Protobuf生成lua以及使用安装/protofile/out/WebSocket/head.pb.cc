// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WebSocket/head.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "WebSocket/head.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* Header_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Header_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_WebSocket_2fhead_2eproto() {
  protobuf_AddDesc_WebSocket_2fhead_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "WebSocket/head.proto");
  GOOGLE_CHECK(file != NULL);
  Header_descriptor_ = file->message_type(0);
  static const int Header_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, cmdcbversion_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, cmdcbcheckcode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, cmdwpacketsize_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, tcpcbdatakind_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, tcpcbcheckcode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, tcpwpacketsize_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, mainid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, subid_),
  };
  Header_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Header_descriptor_,
      Header::default_instance_,
      Header_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Header));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_WebSocket_2fhead_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Header_descriptor_, &Header::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_WebSocket_2fhead_2eproto() {
  delete Header::default_instance_;
  delete Header_reflection_;
}

void protobuf_AddDesc_WebSocket_2fhead_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024WebSocket/head.proto\"\264\001\n\006Header\022\024\n\014CMD"
    "cbVersion\030\001 \001(\005\022\026\n\016CMDcbCheckCode\030\002 \001(\005\022"
    "\026\n\016CMDwPacketSize\030\003 \001(\005\022\025\n\rTCPcbDataKind"
    "\030\004 \001(\005\022\026\n\016TCPcbCheckCode\030\005 \001(\005\022\026\n\016TCPwPa"
    "cketSize\030\006 \001(\005\022\016\n\006MainID\030\007 \002(\005\022\r\n\005SubID\030"
    "\010 \002(\005B$\n\032com.example.websocket.beanB\006Com"
    "mon", 243);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "WebSocket/head.proto", &protobuf_RegisterTypes);
  Header::default_instance_ = new Header();
  Header::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_WebSocket_2fhead_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_WebSocket_2fhead_2eproto {
  StaticDescriptorInitializer_WebSocket_2fhead_2eproto() {
    protobuf_AddDesc_WebSocket_2fhead_2eproto();
  }
} static_descriptor_initializer_WebSocket_2fhead_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Header::kCMDcbVersionFieldNumber;
const int Header::kCMDcbCheckCodeFieldNumber;
const int Header::kCMDwPacketSizeFieldNumber;
const int Header::kTCPcbDataKindFieldNumber;
const int Header::kTCPcbCheckCodeFieldNumber;
const int Header::kTCPwPacketSizeFieldNumber;
const int Header::kMainIDFieldNumber;
const int Header::kSubIDFieldNumber;
#endif  // !_MSC_VER

Header::Header()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Header::InitAsDefaultInstance() {
}

Header::Header(const Header& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Header::SharedCtor() {
  _cached_size_ = 0;
  cmdcbversion_ = 0;
  cmdcbcheckcode_ = 0;
  cmdwpacketsize_ = 0;
  tcpcbdatakind_ = 0;
  tcpcbcheckcode_ = 0;
  tcpwpacketsize_ = 0;
  mainid_ = 0;
  subid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Header::~Header() {
  SharedDtor();
}

void Header::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Header::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Header::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Header_descriptor_;
}

const Header& Header::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_WebSocket_2fhead_2eproto();
  return *default_instance_;
}

Header* Header::default_instance_ = NULL;

Header* Header::New() const {
  return new Header;
}

void Header::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    cmdcbversion_ = 0;
    cmdcbcheckcode_ = 0;
    cmdwpacketsize_ = 0;
    tcpcbdatakind_ = 0;
    tcpcbcheckcode_ = 0;
    tcpwpacketsize_ = 0;
    mainid_ = 0;
    subid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Header::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 CMDcbVersion = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cmdcbversion_)));
          set_has_cmdcbversion();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_CMDcbCheckCode;
        break;
      }

      // optional int32 CMDcbCheckCode = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_CMDcbCheckCode:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cmdcbcheckcode_)));
          set_has_cmdcbcheckcode();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_CMDwPacketSize;
        break;
      }

      // optional int32 CMDwPacketSize = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_CMDwPacketSize:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cmdwpacketsize_)));
          set_has_cmdwpacketsize();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_TCPcbDataKind;
        break;
      }

      // optional int32 TCPcbDataKind = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_TCPcbDataKind:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &tcpcbdatakind_)));
          set_has_tcpcbdatakind();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_TCPcbCheckCode;
        break;
      }

      // optional int32 TCPcbCheckCode = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_TCPcbCheckCode:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &tcpcbcheckcode_)));
          set_has_tcpcbcheckcode();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_TCPwPacketSize;
        break;
      }

      // optional int32 TCPwPacketSize = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_TCPwPacketSize:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &tcpwpacketsize_)));
          set_has_tcpwpacketsize();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_MainID;
        break;
      }

      // required int32 MainID = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_MainID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &mainid_)));
          set_has_mainid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_SubID;
        break;
      }

      // required int32 SubID = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_SubID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &subid_)));
          set_has_subid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Header::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 CMDcbVersion = 1;
  if (has_cmdcbversion()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->cmdcbversion(), output);
  }

  // optional int32 CMDcbCheckCode = 2;
  if (has_cmdcbcheckcode()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->cmdcbcheckcode(), output);
  }

  // optional int32 CMDwPacketSize = 3;
  if (has_cmdwpacketsize()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->cmdwpacketsize(), output);
  }

  // optional int32 TCPcbDataKind = 4;
  if (has_tcpcbdatakind()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->tcpcbdatakind(), output);
  }

  // optional int32 TCPcbCheckCode = 5;
  if (has_tcpcbcheckcode()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->tcpcbcheckcode(), output);
  }

  // optional int32 TCPwPacketSize = 6;
  if (has_tcpwpacketsize()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->tcpwpacketsize(), output);
  }

  // required int32 MainID = 7;
  if (has_mainid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->mainid(), output);
  }

  // required int32 SubID = 8;
  if (has_subid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->subid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Header::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 CMDcbVersion = 1;
  if (has_cmdcbversion()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->cmdcbversion(), target);
  }

  // optional int32 CMDcbCheckCode = 2;
  if (has_cmdcbcheckcode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->cmdcbcheckcode(), target);
  }

  // optional int32 CMDwPacketSize = 3;
  if (has_cmdwpacketsize()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->cmdwpacketsize(), target);
  }

  // optional int32 TCPcbDataKind = 4;
  if (has_tcpcbdatakind()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->tcpcbdatakind(), target);
  }

  // optional int32 TCPcbCheckCode = 5;
  if (has_tcpcbcheckcode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->tcpcbcheckcode(), target);
  }

  // optional int32 TCPwPacketSize = 6;
  if (has_tcpwpacketsize()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->tcpwpacketsize(), target);
  }

  // required int32 MainID = 7;
  if (has_mainid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->mainid(), target);
  }

  // required int32 SubID = 8;
  if (has_subid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->subid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Header::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 CMDcbVersion = 1;
    if (has_cmdcbversion()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cmdcbversion());
    }

    // optional int32 CMDcbCheckCode = 2;
    if (has_cmdcbcheckcode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cmdcbcheckcode());
    }

    // optional int32 CMDwPacketSize = 3;
    if (has_cmdwpacketsize()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cmdwpacketsize());
    }

    // optional int32 TCPcbDataKind = 4;
    if (has_tcpcbdatakind()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->tcpcbdatakind());
    }

    // optional int32 TCPcbCheckCode = 5;
    if (has_tcpcbcheckcode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->tcpcbcheckcode());
    }

    // optional int32 TCPwPacketSize = 6;
    if (has_tcpwpacketsize()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->tcpwpacketsize());
    }

    // required int32 MainID = 7;
    if (has_mainid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->mainid());
    }

    // required int32 SubID = 8;
    if (has_subid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->subid());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Header::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Header* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Header*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Header::MergeFrom(const Header& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_cmdcbversion()) {
      set_cmdcbversion(from.cmdcbversion());
    }
    if (from.has_cmdcbcheckcode()) {
      set_cmdcbcheckcode(from.cmdcbcheckcode());
    }
    if (from.has_cmdwpacketsize()) {
      set_cmdwpacketsize(from.cmdwpacketsize());
    }
    if (from.has_tcpcbdatakind()) {
      set_tcpcbdatakind(from.tcpcbdatakind());
    }
    if (from.has_tcpcbcheckcode()) {
      set_tcpcbcheckcode(from.tcpcbcheckcode());
    }
    if (from.has_tcpwpacketsize()) {
      set_tcpwpacketsize(from.tcpwpacketsize());
    }
    if (from.has_mainid()) {
      set_mainid(from.mainid());
    }
    if (from.has_subid()) {
      set_subid(from.subid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Header::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Header::CopyFrom(const Header& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Header::IsInitialized() const {
  if ((_has_bits_[0] & 0x000000c0) != 0x000000c0) return false;

  return true;
}

void Header::Swap(Header* other) {
  if (other != this) {
    std::swap(cmdcbversion_, other->cmdcbversion_);
    std::swap(cmdcbcheckcode_, other->cmdcbcheckcode_);
    std::swap(cmdwpacketsize_, other->cmdwpacketsize_);
    std::swap(tcpcbdatakind_, other->tcpcbdatakind_);
    std::swap(tcpcbcheckcode_, other->tcpcbcheckcode_);
    std::swap(tcpwpacketsize_, other->tcpwpacketsize_);
    std::swap(mainid_, other->mainid_);
    std::swap(subid_, other->subid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Header::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Header_descriptor_;
  metadata.reflection = Header_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

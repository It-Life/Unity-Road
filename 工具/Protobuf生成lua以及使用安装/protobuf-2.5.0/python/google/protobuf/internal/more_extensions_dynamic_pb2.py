# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/protobuf/internal/more_extensions_dynamic.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)


import google.protobuf.internal.more_extensions_pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/protobuf/internal/more_extensions_dynamic.proto',
  package='google.protobuf.internal',
  serialized_pb='\n6google/protobuf/internal/more_extensions_dynamic.proto\x12\x18google.protobuf.internal\x1a.google/protobuf/internal/more_extensions.proto\"\x1f\n\x12\x44ynamicMessageType\x12\t\n\x01\x61\x18\x01 \x01(\x05:J\n\x17\x64ynamic_int32_extension\x12).google.protobuf.internal.ExtendedMessage\x18\x64 \x01(\x05:z\n\x19\x64ynamic_message_extension\x12).google.protobuf.internal.ExtendedMessage\x18\x65 \x01(\x0b\x32,.google.protobuf.internal.DynamicMessageType')


DYNAMIC_INT32_EXTENSION_FIELD_NUMBER = 100
dynamic_int32_extension = _descriptor.FieldDescriptor(
  name='dynamic_int32_extension', full_name='google.protobuf.internal.dynamic_int32_extension', index=0,
  number=100, type=5, cpp_type=1, label=1,
  has_default_value=False, default_value=0,
  message_type=None, enum_type=None, containing_type=None,
  is_extension=True, extension_scope=None,
  options=None)
DYNAMIC_MESSAGE_EXTENSION_FIELD_NUMBER = 101
dynamic_message_extension = _descriptor.FieldDescriptor(
  name='dynamic_message_extension', full_name='google.protobuf.internal.dynamic_message_extension', index=1,
  number=101, type=11, cpp_type=10, label=1,
  has_default_value=False, default_value=None,
  message_type=None, enum_type=None, containing_type=None,
  is_extension=True, extension_scope=None,
  options=None)


_DYNAMICMESSAGETYPE = _descriptor.Descriptor(
  name='DynamicMessageType',
  full_name='google.protobuf.internal.DynamicMessageType',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='a', full_name='google.protobuf.internal.DynamicMessageType.a', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=132,
  serialized_end=163,
)

DESCRIPTOR.message_types_by_name['DynamicMessageType'] = _DYNAMICMESSAGETYPE

class DynamicMessageType(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _DYNAMICMESSAGETYPE

  # @@protoc_insertion_point(class_scope:google.protobuf.internal.DynamicMessageType)

google.protobuf.internal.more_extensions_pb2.ExtendedMessage.RegisterExtension(dynamic_int32_extension)
dynamic_message_extension.message_type = _DYNAMICMESSAGETYPE
google.protobuf.internal.more_extensions_pb2.ExtendedMessage.RegisterExtension(dynamic_message_extension)

# @@protoc_insertion_point(module_scope)

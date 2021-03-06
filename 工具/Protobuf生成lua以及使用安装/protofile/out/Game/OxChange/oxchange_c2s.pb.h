// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Game/OxChange/oxchange_c2s.proto

#ifndef PROTOBUF_Game_2fOxChange_2foxchange_5fc2s_2eproto__INCLUDED
#define PROTOBUF_Game_2fOxChange_2foxchange_5fc2s_2eproto__INCLUDED

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
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace game {
namespace oxchange {
namespace c2s {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
void protobuf_AssignDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
void protobuf_ShutdownFile_Game_2fOxChange_2foxchange_5fc2s_2eproto();

class CMD_C2S_SelectScoreMode;
class CMD_C2S_CallBanker;
class CMD_C2S_AddScore;
class CMD_C2S_OxCard;
class CMD_C2S_WinLost;
class CMD_C2S_PostEmotion;

// ===================================================================

class CMD_C2S_SelectScoreMode : public ::google::protobuf::MessageLite {
 public:
  CMD_C2S_SelectScoreMode();
  virtual ~CMD_C2S_SelectScoreMode();

  CMD_C2S_SelectScoreMode(const CMD_C2S_SelectScoreMode& from);

  inline CMD_C2S_SelectScoreMode& operator=(const CMD_C2S_SelectScoreMode& from) {
    CopyFrom(from);
    return *this;
  }

  static const CMD_C2S_SelectScoreMode& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CMD_C2S_SelectScoreMode* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CMD_C2S_SelectScoreMode* other);

  // implements Message ----------------------------------------------

  CMD_C2S_SelectScoreMode* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CMD_C2S_SelectScoreMode& from);
  void MergeFrom(const CMD_C2S_SelectScoreMode& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool selectMode = 1;
  inline bool has_selectmode() const;
  inline void clear_selectmode();
  static const int kSelectModeFieldNumber = 1;
  inline bool selectmode() const;
  inline void set_selectmode(bool value);

  // @@protoc_insertion_point(class_scope:game.oxchange.c2s.CMD_C2S_SelectScoreMode)
 private:
  inline void set_has_selectmode();
  inline void clear_has_selectmode();

  bool selectmode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
  #endif
  friend void protobuf_AssignDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
  friend void protobuf_ShutdownFile_Game_2fOxChange_2foxchange_5fc2s_2eproto();

  void InitAsDefaultInstance();
  static CMD_C2S_SelectScoreMode* default_instance_;
};
// -------------------------------------------------------------------

class CMD_C2S_CallBanker : public ::google::protobuf::MessageLite {
 public:
  CMD_C2S_CallBanker();
  virtual ~CMD_C2S_CallBanker();

  CMD_C2S_CallBanker(const CMD_C2S_CallBanker& from);

  inline CMD_C2S_CallBanker& operator=(const CMD_C2S_CallBanker& from) {
    CopyFrom(from);
    return *this;
  }

  static const CMD_C2S_CallBanker& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CMD_C2S_CallBanker* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CMD_C2S_CallBanker* other);

  // implements Message ----------------------------------------------

  CMD_C2S_CallBanker* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CMD_C2S_CallBanker& from);
  void MergeFrom(const CMD_C2S_CallBanker& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 banker = 1;
  inline bool has_banker() const;
  inline void clear_banker();
  static const int kBankerFieldNumber = 1;
  inline ::google::protobuf::int32 banker() const;
  inline void set_banker(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:game.oxchange.c2s.CMD_C2S_CallBanker)
 private:
  inline void set_has_banker();
  inline void clear_has_banker();

  ::google::protobuf::int32 banker_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
  #endif
  friend void protobuf_AssignDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
  friend void protobuf_ShutdownFile_Game_2fOxChange_2foxchange_5fc2s_2eproto();

  void InitAsDefaultInstance();
  static CMD_C2S_CallBanker* default_instance_;
};
// -------------------------------------------------------------------

class CMD_C2S_AddScore : public ::google::protobuf::MessageLite {
 public:
  CMD_C2S_AddScore();
  virtual ~CMD_C2S_AddScore();

  CMD_C2S_AddScore(const CMD_C2S_AddScore& from);

  inline CMD_C2S_AddScore& operator=(const CMD_C2S_AddScore& from) {
    CopyFrom(from);
    return *this;
  }

  static const CMD_C2S_AddScore& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CMD_C2S_AddScore* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CMD_C2S_AddScore* other);

  // implements Message ----------------------------------------------

  CMD_C2S_AddScore* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CMD_C2S_AddScore& from);
  void MergeFrom(const CMD_C2S_AddScore& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 score = 1;
  inline bool has_score() const;
  inline void clear_score();
  static const int kScoreFieldNumber = 1;
  inline ::google::protobuf::int64 score() const;
  inline void set_score(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:game.oxchange.c2s.CMD_C2S_AddScore)
 private:
  inline void set_has_score();
  inline void clear_has_score();

  ::google::protobuf::int64 score_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
  #endif
  friend void protobuf_AssignDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
  friend void protobuf_ShutdownFile_Game_2fOxChange_2foxchange_5fc2s_2eproto();

  void InitAsDefaultInstance();
  static CMD_C2S_AddScore* default_instance_;
};
// -------------------------------------------------------------------

class CMD_C2S_OxCard : public ::google::protobuf::MessageLite {
 public:
  CMD_C2S_OxCard();
  virtual ~CMD_C2S_OxCard();

  CMD_C2S_OxCard(const CMD_C2S_OxCard& from);

  inline CMD_C2S_OxCard& operator=(const CMD_C2S_OxCard& from) {
    CopyFrom(from);
    return *this;
  }

  static const CMD_C2S_OxCard& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CMD_C2S_OxCard* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CMD_C2S_OxCard* other);

  // implements Message ----------------------------------------------

  CMD_C2S_OxCard* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CMD_C2S_OxCard& from);
  void MergeFrom(const CMD_C2S_OxCard& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 ox = 1;
  inline bool has_ox() const;
  inline void clear_ox();
  static const int kOxFieldNumber = 1;
  inline ::google::protobuf::int32 ox() const;
  inline void set_ox(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:game.oxchange.c2s.CMD_C2S_OxCard)
 private:
  inline void set_has_ox();
  inline void clear_has_ox();

  ::google::protobuf::int32 ox_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
  #endif
  friend void protobuf_AssignDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
  friend void protobuf_ShutdownFile_Game_2fOxChange_2foxchange_5fc2s_2eproto();

  void InitAsDefaultInstance();
  static CMD_C2S_OxCard* default_instance_;
};
// -------------------------------------------------------------------

class CMD_C2S_WinLost : public ::google::protobuf::MessageLite {
 public:
  CMD_C2S_WinLost();
  virtual ~CMD_C2S_WinLost();

  CMD_C2S_WinLost(const CMD_C2S_WinLost& from);

  inline CMD_C2S_WinLost& operator=(const CMD_C2S_WinLost& from) {
    CopyFrom(from);
    return *this;
  }

  static const CMD_C2S_WinLost& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CMD_C2S_WinLost* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CMD_C2S_WinLost* other);

  // implements Message ----------------------------------------------

  CMD_C2S_WinLost* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CMD_C2S_WinLost& from);
  void MergeFrom(const CMD_C2S_WinLost& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 gameId = 1;
  inline bool has_gameid() const;
  inline void clear_gameid();
  static const int kGameIdFieldNumber = 1;
  inline ::google::protobuf::int32 gameid() const;
  inline void set_gameid(::google::protobuf::int32 value);

  // required int32 count = 2;
  inline bool has_count() const;
  inline void clear_count();
  static const int kCountFieldNumber = 2;
  inline ::google::protobuf::int32 count() const;
  inline void set_count(::google::protobuf::int32 value);

  // required int32 winLost = 3;
  inline bool has_winlost() const;
  inline void clear_winlost();
  static const int kWinLostFieldNumber = 3;
  inline ::google::protobuf::int32 winlost() const;
  inline void set_winlost(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:game.oxchange.c2s.CMD_C2S_WinLost)
 private:
  inline void set_has_gameid();
  inline void clear_has_gameid();
  inline void set_has_count();
  inline void clear_has_count();
  inline void set_has_winlost();
  inline void clear_has_winlost();

  ::google::protobuf::int32 gameid_;
  ::google::protobuf::int32 count_;
  ::google::protobuf::int32 winlost_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
  #endif
  friend void protobuf_AssignDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
  friend void protobuf_ShutdownFile_Game_2fOxChange_2foxchange_5fc2s_2eproto();

  void InitAsDefaultInstance();
  static CMD_C2S_WinLost* default_instance_;
};
// -------------------------------------------------------------------

class CMD_C2S_PostEmotion : public ::google::protobuf::MessageLite {
 public:
  CMD_C2S_PostEmotion();
  virtual ~CMD_C2S_PostEmotion();

  CMD_C2S_PostEmotion(const CMD_C2S_PostEmotion& from);

  inline CMD_C2S_PostEmotion& operator=(const CMD_C2S_PostEmotion& from) {
    CopyFrom(from);
    return *this;
  }

  static const CMD_C2S_PostEmotion& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CMD_C2S_PostEmotion* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CMD_C2S_PostEmotion* other);

  // implements Message ----------------------------------------------

  CMD_C2S_PostEmotion* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CMD_C2S_PostEmotion& from);
  void MergeFrom(const CMD_C2S_PostEmotion& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // required int32 emotionId = 2;
  inline bool has_emotionid() const;
  inline void clear_emotionid();
  static const int kEmotionIdFieldNumber = 2;
  inline ::google::protobuf::int32 emotionid() const;
  inline void set_emotionid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:game.oxchange.c2s.CMD_C2S_PostEmotion)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_emotionid();
  inline void clear_has_emotionid();

  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 emotionid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
  #endif
  friend void protobuf_AssignDesc_Game_2fOxChange_2foxchange_5fc2s_2eproto();
  friend void protobuf_ShutdownFile_Game_2fOxChange_2foxchange_5fc2s_2eproto();

  void InitAsDefaultInstance();
  static CMD_C2S_PostEmotion* default_instance_;
};
// ===================================================================


// ===================================================================

// CMD_C2S_SelectScoreMode

// required bool selectMode = 1;
inline bool CMD_C2S_SelectScoreMode::has_selectmode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CMD_C2S_SelectScoreMode::set_has_selectmode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CMD_C2S_SelectScoreMode::clear_has_selectmode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CMD_C2S_SelectScoreMode::clear_selectmode() {
  selectmode_ = false;
  clear_has_selectmode();
}
inline bool CMD_C2S_SelectScoreMode::selectmode() const {
  return selectmode_;
}
inline void CMD_C2S_SelectScoreMode::set_selectmode(bool value) {
  set_has_selectmode();
  selectmode_ = value;
}

// -------------------------------------------------------------------

// CMD_C2S_CallBanker

// required int32 banker = 1;
inline bool CMD_C2S_CallBanker::has_banker() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CMD_C2S_CallBanker::set_has_banker() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CMD_C2S_CallBanker::clear_has_banker() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CMD_C2S_CallBanker::clear_banker() {
  banker_ = 0;
  clear_has_banker();
}
inline ::google::protobuf::int32 CMD_C2S_CallBanker::banker() const {
  return banker_;
}
inline void CMD_C2S_CallBanker::set_banker(::google::protobuf::int32 value) {
  set_has_banker();
  banker_ = value;
}

// -------------------------------------------------------------------

// CMD_C2S_AddScore

// required int64 score = 1;
inline bool CMD_C2S_AddScore::has_score() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CMD_C2S_AddScore::set_has_score() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CMD_C2S_AddScore::clear_has_score() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CMD_C2S_AddScore::clear_score() {
  score_ = GOOGLE_LONGLONG(0);
  clear_has_score();
}
inline ::google::protobuf::int64 CMD_C2S_AddScore::score() const {
  return score_;
}
inline void CMD_C2S_AddScore::set_score(::google::protobuf::int64 value) {
  set_has_score();
  score_ = value;
}

// -------------------------------------------------------------------

// CMD_C2S_OxCard

// required int32 ox = 1;
inline bool CMD_C2S_OxCard::has_ox() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CMD_C2S_OxCard::set_has_ox() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CMD_C2S_OxCard::clear_has_ox() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CMD_C2S_OxCard::clear_ox() {
  ox_ = 0;
  clear_has_ox();
}
inline ::google::protobuf::int32 CMD_C2S_OxCard::ox() const {
  return ox_;
}
inline void CMD_C2S_OxCard::set_ox(::google::protobuf::int32 value) {
  set_has_ox();
  ox_ = value;
}

// -------------------------------------------------------------------

// CMD_C2S_WinLost

// required int32 gameId = 1;
inline bool CMD_C2S_WinLost::has_gameid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CMD_C2S_WinLost::set_has_gameid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CMD_C2S_WinLost::clear_has_gameid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CMD_C2S_WinLost::clear_gameid() {
  gameid_ = 0;
  clear_has_gameid();
}
inline ::google::protobuf::int32 CMD_C2S_WinLost::gameid() const {
  return gameid_;
}
inline void CMD_C2S_WinLost::set_gameid(::google::protobuf::int32 value) {
  set_has_gameid();
  gameid_ = value;
}

// required int32 count = 2;
inline bool CMD_C2S_WinLost::has_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CMD_C2S_WinLost::set_has_count() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CMD_C2S_WinLost::clear_has_count() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CMD_C2S_WinLost::clear_count() {
  count_ = 0;
  clear_has_count();
}
inline ::google::protobuf::int32 CMD_C2S_WinLost::count() const {
  return count_;
}
inline void CMD_C2S_WinLost::set_count(::google::protobuf::int32 value) {
  set_has_count();
  count_ = value;
}

// required int32 winLost = 3;
inline bool CMD_C2S_WinLost::has_winlost() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CMD_C2S_WinLost::set_has_winlost() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CMD_C2S_WinLost::clear_has_winlost() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CMD_C2S_WinLost::clear_winlost() {
  winlost_ = 0;
  clear_has_winlost();
}
inline ::google::protobuf::int32 CMD_C2S_WinLost::winlost() const {
  return winlost_;
}
inline void CMD_C2S_WinLost::set_winlost(::google::protobuf::int32 value) {
  set_has_winlost();
  winlost_ = value;
}

// -------------------------------------------------------------------

// CMD_C2S_PostEmotion

// required int32 type = 1;
inline bool CMD_C2S_PostEmotion::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CMD_C2S_PostEmotion::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CMD_C2S_PostEmotion::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CMD_C2S_PostEmotion::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 CMD_C2S_PostEmotion::type() const {
  return type_;
}
inline void CMD_C2S_PostEmotion::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// required int32 emotionId = 2;
inline bool CMD_C2S_PostEmotion::has_emotionid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CMD_C2S_PostEmotion::set_has_emotionid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CMD_C2S_PostEmotion::clear_has_emotionid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CMD_C2S_PostEmotion::clear_emotionid() {
  emotionid_ = 0;
  clear_has_emotionid();
}
inline ::google::protobuf::int32 CMD_C2S_PostEmotion::emotionid() const {
  return emotionid_;
}
inline void CMD_C2S_PostEmotion::set_emotionid(::google::protobuf::int32 value) {
  set_has_emotionid();
  emotionid_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace c2s
}  // namespace oxchange
}  // namespace game

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Game_2fOxChange_2foxchange_5fc2s_2eproto__INCLUDED

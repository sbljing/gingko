/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef inner_TYPES_H
#define inner_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "tracker_types.h"


namespace bbts { namespace tracker {

typedef struct _StoredPeerInfo__isset {
  _StoredPeerInfo__isset() : info_hash(false), peer_id(false), ip(false), port(false), uploaded(false), downloaded(false), left(false), status(false), want_number(false), expire_time(false), timestamp_start(false), is_seed(false), tracker_id(false), idc(false) {}
  bool info_hash;
  bool peer_id;
  bool ip;
  bool port;
  bool uploaded;
  bool downloaded;
  bool left;
  bool status;
  bool want_number;
  bool expire_time;
  bool timestamp_start;
  bool is_seed;
  bool tracker_id;
  bool idc;
} _StoredPeerInfo__isset;

class StoredPeerInfo {
 public:

  static const char* ascii_fingerprint; // = "578FAFAE033AC49C3C188070A34F35BD";
  static const uint8_t binary_fingerprint[16]; // = {0x57,0x8F,0xAF,0xAE,0x03,0x3A,0xC4,0x9C,0x3C,0x18,0x80,0x70,0xA3,0x4F,0x35,0xBD};

  StoredPeerInfo() : info_hash(), peer_id(), ip(), port(0), uploaded(0), downloaded(0), left(0), status(( ::bbts::tracker::Status::type)0), want_number(0), expire_time(0), timestamp_start(0), is_seed(0), tracker_id(), idc() {
  }

  virtual ~StoredPeerInfo() throw() {}

  std::string info_hash;
  std::string peer_id;
  std::string ip;
  int32_t port;
  int64_t uploaded;
  int64_t downloaded;
  int64_t left;
   ::bbts::tracker::Status::type status;
  int32_t want_number;
  int64_t expire_time;
  int64_t timestamp_start;
  bool is_seed;
  std::string tracker_id;
  std::string idc;

  _StoredPeerInfo__isset __isset;

  void __set_info_hash(const std::string& val) {
    info_hash = val;
    __isset.info_hash = true;
  }

  void __set_peer_id(const std::string& val) {
    peer_id = val;
    __isset.peer_id = true;
  }

  void __set_ip(const std::string& val) {
    ip = val;
    __isset.ip = true;
  }

  void __set_port(const int32_t val) {
    port = val;
    __isset.port = true;
  }

  void __set_uploaded(const int64_t val) {
    uploaded = val;
    __isset.uploaded = true;
  }

  void __set_downloaded(const int64_t val) {
    downloaded = val;
    __isset.downloaded = true;
  }

  void __set_left(const int64_t val) {
    left = val;
    __isset.left = true;
  }

  void __set_status(const  ::bbts::tracker::Status::type val) {
    status = val;
    __isset.status = true;
  }

  void __set_want_number(const int32_t val) {
    want_number = val;
    __isset.want_number = true;
  }

  void __set_expire_time(const int64_t val) {
    expire_time = val;
    __isset.expire_time = true;
  }

  void __set_timestamp_start(const int64_t val) {
    timestamp_start = val;
    __isset.timestamp_start = true;
  }

  void __set_is_seed(const bool val) {
    is_seed = val;
    __isset.is_seed = true;
  }

  void __set_tracker_id(const std::string& val) {
    tracker_id = val;
    __isset.tracker_id = true;
  }

  void __set_idc(const std::string& val) {
    idc = val;
    __isset.idc = true;
  }

  bool operator == (const StoredPeerInfo & rhs) const
  {
    if (__isset.info_hash != rhs.__isset.info_hash)
      return false;
    else if (__isset.info_hash && !(info_hash == rhs.info_hash))
      return false;
    if (__isset.peer_id != rhs.__isset.peer_id)
      return false;
    else if (__isset.peer_id && !(peer_id == rhs.peer_id))
      return false;
    if (__isset.ip != rhs.__isset.ip)
      return false;
    else if (__isset.ip && !(ip == rhs.ip))
      return false;
    if (__isset.port != rhs.__isset.port)
      return false;
    else if (__isset.port && !(port == rhs.port))
      return false;
    if (__isset.uploaded != rhs.__isset.uploaded)
      return false;
    else if (__isset.uploaded && !(uploaded == rhs.uploaded))
      return false;
    if (__isset.downloaded != rhs.__isset.downloaded)
      return false;
    else if (__isset.downloaded && !(downloaded == rhs.downloaded))
      return false;
    if (__isset.left != rhs.__isset.left)
      return false;
    else if (__isset.left && !(left == rhs.left))
      return false;
    if (__isset.status != rhs.__isset.status)
      return false;
    else if (__isset.status && !(status == rhs.status))
      return false;
    if (__isset.want_number != rhs.__isset.want_number)
      return false;
    else if (__isset.want_number && !(want_number == rhs.want_number))
      return false;
    if (__isset.expire_time != rhs.__isset.expire_time)
      return false;
    else if (__isset.expire_time && !(expire_time == rhs.expire_time))
      return false;
    if (__isset.timestamp_start != rhs.__isset.timestamp_start)
      return false;
    else if (__isset.timestamp_start && !(timestamp_start == rhs.timestamp_start))
      return false;
    if (__isset.is_seed != rhs.__isset.is_seed)
      return false;
    else if (__isset.is_seed && !(is_seed == rhs.is_seed))
      return false;
    if (__isset.tracker_id != rhs.__isset.tracker_id)
      return false;
    else if (__isset.tracker_id && !(tracker_id == rhs.tracker_id))
      return false;
    if (__isset.idc != rhs.__isset.idc)
      return false;
    else if (__isset.idc && !(idc == rhs.idc))
      return false;
    return true;
  }
  bool operator != (const StoredPeerInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StoredPeerInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StoredPeerInfo &a, StoredPeerInfo &b);

}} // namespace

#endif

/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "TritonTransfer_types.h"

#include <algorithm>

namespace no { namespace podcasts { namespace no { namespace learning {

const char* ErrorOrBlock::ascii_fingerprint = "1767FFB0CB3D9275BC64B198AB3B8A8B";
const uint8_t ErrorOrBlock::binary_fingerprint[16] = {0x17,0x67,0xFF,0xB0,0xCB,0x3D,0x92,0x75,0xBC,0x64,0xB1,0x98,0xAB,0x3B,0x8A,0x8B};

uint32_t ErrorOrBlock::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_error = false;
  bool isset_block = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->error);
          isset_error = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->block);
          isset_block = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_error)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_block)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t ErrorOrBlock::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ErrorOrBlock");

  xfer += oprot->writeFieldBegin("error", ::apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->error);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("block", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeBinary(this->block);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ErrorOrBlock &a, ErrorOrBlock &b) {
  using ::std::swap;
  swap(a.error, b.error);
  swap(a.block, b.block);
}

const char* ServerInfo::ascii_fingerprint = "4E6823FAF28E23B01A9E7F276B12377B";
const uint8_t ServerInfo::binary_fingerprint[16] = {0x4E,0x68,0x23,0xFA,0xF2,0x8E,0x23,0xB0,0x1A,0x9E,0x7F,0x27,0x6B,0x12,0x37,0x7B};

uint32_t ServerInfo::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_server_hash_list = false;
  bool isset_port = false;
  bool isset_server_name = false;
  bool isset_file_exists = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->server_hash_list.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->server_hash_list.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += iprot->readString(this->server_hash_list[_i4]);
            }
            xfer += iprot->readListEnd();
          }
          isset_server_hash_list = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->port);
          isset_port = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->server_name);
          isset_server_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->file_exists);
          isset_file_exists = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_server_hash_list)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_port)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_server_name)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_file_exists)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t ServerInfo::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ServerInfo");

  xfer += oprot->writeFieldBegin("server_hash_list", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->server_hash_list.size()));
    std::vector<HashValue> ::const_iterator _iter5;
    for (_iter5 = this->server_hash_list.begin(); _iter5 != this->server_hash_list.end(); ++_iter5)
    {
      xfer += oprot->writeString((*_iter5));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("port", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->port);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("server_name", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->server_name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("file_exists", ::apache::thrift::protocol::T_BOOL, 4);
  xfer += oprot->writeBool(this->file_exists);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ServerInfo &a, ServerInfo &b) {
  using ::std::swap;
  swap(a.server_hash_list, b.server_hash_list);
  swap(a.port, b.port);
  swap(a.server_name, b.server_name);
  swap(a.file_exists, b.file_exists);
}

}}}} // namespace

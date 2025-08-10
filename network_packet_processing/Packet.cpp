#include "Packet.hpp"
#include <iostream>
#include <ostream>

using namespace std;

Packet::Packet(PacketType pType, Protocol prtcl)
  : type { pType }
  , protocol { prtcl }
  {}

string Packet::getPacketTypeName() const {
  switch (type) {
    case (PacketType::UNKNOWN):
      return "UNKNOWN";
    case (PacketType::DATA):
      return "DATA";
    case (PacketType::CONTROL):
      return "CONTROL";
    case (PacketType::ERROR):
      return "ERROR";
    default:
      return "UNKNOWN ERROR";
  }
}

string Packet::getStatusName() const {
  switch (packetStatus) {
    case (Status::PENDING):
      return "PENDING";
    case (Status::VALID):
      return "VALID";
    case (Status::INVALID):
      return "INVALID";
    case (Status::TIMEOUT):
      return "TIMEOUT";
    default:
      return "Unknown Packet Status";
  }
}

string Packet::getProtocolName() {
  switch (protocol) {
    case (Protocol::TCP):
      return "TCP";
    case (Protocol::UDP):
      return "UDP";
    case (Protocol::HTTP):
      return "HTTP";
    case (Protocol::FTP):
      return "FTP";
    default:
      return "Unknown Protocol";
  }
}

void Packet::validatePacket() {
  switch (type) {
    case (PacketType::UNKNOWN):
      packetStatus = Status::INVALID;
      break;
    case (PacketType::DATA):
      packetStatus = ((getProtocolName() == "TCP" || getProtocolName() == "UDP") 
        ? Status::VALID : Status::INVALID);
      break;
    case (PacketType::CONTROL):
      packetStatus = (getProtocolName() == "TCP" ? Status::VALID : Status::INVALID);
      break;
    case (PacketType::ERROR):
      packetStatus = Status::VALID;
      break;
    default:
      packetStatus = Status::INVALID;
      break;
  }
  return;
}

bool Packet::isError() {
  if (getStatusName() == "INVALID") 
    return true;
  else
    return false;
}

void Packet::displayInfo() {
  cout << "Packet Type: " << getPacketTypeName() << endl;
  cout << "Protocol Type: " << getProtocolName() << endl;
  cout << "Status Name: " << getStatusName() << endl;
  return;
}

void Packet::setType(PacketType newType) {
  type = newType;
  return;
}
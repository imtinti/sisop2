#ifndef __TCP_CONNECTION_H__

#define __TCP_CONNECTION_H__

#include <netdb.h>

#include "../shared/packet.hpp"

class TCPConnection {
 private:
  int sockfd;

  struct hostent *server;
  struct sockaddr_in server_address;

  void socket();

  void gethostbyname(char const *address);
  void configureServerAddress(uint16_t port);

 public:
  TCPConnection(char const *address, uint16_t port);

  void read();
  void close();
  void connect();

  void write(TCPPacket packet);
};

#endif
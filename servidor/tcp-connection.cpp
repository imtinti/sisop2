#include "tcp-connection.hpp"

#include <netdb.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include <cstdint>
#include <iostream>
#include <string>

// private
void TCPConnection::socket() {
    this->sockfd = ::socket(AF_INET, SOCK_STREAM, 0);

    if (this->sockfd == -1) {
        throw "error opening socket";
    }
}

void TCPConnection::configureServerAddress(uint16_t port) {
    this->server_address.sin_family = AF_INET;
    this->server_address.sin_port = htons(port);

    this->server_address.sin_addr = *((struct in_addr *)server->h_addr);

    memset(&(this->server_address.sin_zero), 0, sizeof(sockaddr_in::sin_addr));
}

void TCPConnection::gethostbyname(char const *address) {
    this->server = ::gethostbyname(address);

    if (server == NULL) {
        throw "this address is not a valid host";
    }
}

// public
TCPConnection::TCPConnection(char const *address, uint16_t port) {
    this->socket();
    this->gethostbyname(address);
    this->configureServerAddress(port);
}

void TCPConnection::connect() {
    struct sockaddr *address = (struct sockaddr *)&this->server_address;

    int status = ::connect(this->sockfd, address, sizeof(sockaddr_in));

    if (status < 0) {
        throw "error connecting to the address";
    }
}

void TCPConnection::write(TCPPacket packet) {
    int status = ::write(this->sockfd, &packet, sizeof(struct TCPPacket));

    if (status < 0) {
        throw "error writing to socket";
    }
}

void TCPConnection::read() {
    TCPPacket *packet;

    int status = ::read(sockfd, packet, sizeof(struct TCPPacket));

    if (status < 0) {
        throw "error reading the socket";
    }
}

void TCPConnection::close() { ::close(this->sockfd); }
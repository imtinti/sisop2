#include <cstdint>

typedef struct TCPPacket {
    uint16_t type;
    uint16_t seqn;
    uint32_t total_size;
    uint16_t length;

    const char* _payload;
} TCPPacket;
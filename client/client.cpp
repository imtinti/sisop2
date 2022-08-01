#include <iostream>
#include <string>

#include "folder-watcher.hpp"
#include "tcp-connection.hpp"

int main(int argc, char *argv[]) {
    FolderWatcher fw("./sync_dir");

    fw.watch();

    /**TCPPacket packet;

    packet._payload = "hello tcp";

    uint16_t port = 4000u;
    char const *address = "127.0.0.1";

    try {
        TCPConnection connection(address, port);

        connection.connect();

        connection.write(packet);

        connection.close();
    } catch (char const *message) {
        std::cout << message << std::endl;
    }*/

    return EXIT_SUCCESS;
}
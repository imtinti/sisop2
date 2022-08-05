#include <filesystem>
#include <iostream>
#include <string>

#include "directory-watcher.hpp"
#include "keyboard-input.hpp"
#include "synchronization-service.hpp"
#include "tcp-connection.hpp"
#include "utils.hpp"

int main(int argc, char *argv[]) {
  std::string input;
  std::string folder = "sync_dir";
  std::string username = "cassio";

  createDirectoryIfNotExists(folder);
  SynchronizationService synchroService(username, folder);

  //   DirectoryWatcher dw(SYNC_DIR_PATH);

  //   dw.start();

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

  for (;;) {
    std::cout << username << "@cloud: ";
    std::getline(std::cin, input);

    KeyboardInput::parse(input, &synchroService);
  }

  return EXIT_SUCCESS;
}
#include <filesystem>
#include <iostream>
#include <string>
#include <thread>

#include "directory-watcher.hpp"
#include "keyboard-input.hpp"
#include "synchronization-service.hpp"
#include "tcp-connection.hpp"

void startDirectoryWatcher(DirectoryWatcher dw) { dw.start(); }

int main(int argc, char* argv[]) {

  std::string input;
  std::string folder = "sync_dir";
  std::string username = "iuri";

  //std::string userFolder = folder + username; 

  //checa se ja existem dados do usuario
  SynchronizationService synchroService(username);
  DirectoryWatcher directoryWatcher(folder, &synchroService);

  std::thread dwThread(startDirectoryWatcher, directoryWatcher);

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

  dwThread.detach();

  return EXIT_SUCCESS;
}

/*
# upload <path/filename.ext> Envia o arquivo filename.ext para o servidor, colocando-o no “sync_dir” do
servidor e propagando-o para todos os dispositivos daquele usuário.
e.g. upload /home/user/MyFolder/filename.ext

# download <filename.ext> Faz uma cópia não sincronizada do arquivo filename.ext do servidor para
o diretório local (de onde o servidor foi chamado). e.g. download
mySpreadsheet.xlsx



# list_client Lista os arquivos salvos no diretório “sync_dir”
# get_sync_dir Cria o diretório “sync_dir” e inicia as atividades de sincronização

*/




#include "keyboard-input.hpp"

#include <iostream>
#include <regex>
#include <string>

#include "synchronization-service.hpp"

// public
void KeyboardInput ::parse(std::string input, SynchronizationService* synchroService) {
  std::smatch match;


  //# exit Fecha a sessão com o servidor.
  if (input == "exit") exit(EXIT_SUCCESS);

  //# delete <filename.ext> Exclui o arquivo <filename.ext> de “sync_dir”.
  
  if (std::regex_search(input, match, std::regex("^delete (.*)")))
  {
    synchroService->removeFromFolderAndSignal(match.str(1));
  }


};
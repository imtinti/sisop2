#include "keyboard-input.hpp"

#include <iostream>
#include <regex>
#include <string>

#include "synchronization-service.hpp"

// public
void KeyboardInput ::parse(std::string input,
                           SynchronizationService* synchroService) {
  std::smatch match;

  if (input == "exit") exit(EXIT_SUCCESS);

  if (std::regex_search(input, match, std::regex("^delete (.*)"))) {
    synchroService->removeFromFolderAndSignal(match.str(1));
  }
};
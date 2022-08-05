#include "keyboard-input.hpp"

#include <regex>
#include <string>

// public
void KeyboardInput ::parse(std::string input) {
  if (input == "exit") exit(EXIT_SUCCESS);

  if (std::regex_match(input, std::regex("^delete (.*)"))) exit(12313);
};
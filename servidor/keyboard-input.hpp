#ifndef __KEYBOARD_INPUT_H__
#define __KEYBOARD_INPUT_H__

#include <string>

#include "synchronization-service.hpp"

class KeyboardInput {
 public:
  void static parse(std::string input, SynchronizationService* synchroService); 

};

#endif
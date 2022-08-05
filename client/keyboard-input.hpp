#include <string>

#include "synchronization-service.hpp"

class KeyboardInput {
 public:
  void static parse(std::string input, SynchronizationService* synchroService);
};
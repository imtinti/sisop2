#ifndef __SYNCHRONIZATION_SERVICE_H__
#define __SYNCHRONIZATION_SERVICE_H__

#include <string>

class SynchronizationService {
 private:
  std::string folder;
  std::string username;

 public:
  SynchronizationService(std::string username, std::string folder);

  void remove(std::string file);
};

#endif
#ifndef __SYNCHRONIZATION_SERVICE_H__
#define __SYNCHRONIZATION_SERVICE_H__

#include <string>

class SynchronizationService {
 private:
  std::string username;
  std::string userFolder = "./sync_dir";

 public:
  SynchronizationService(std::string username);

  void prepareSyncDir();

  void remove(const char* file);
  void removeFromFolderAndSignal(std::string file);
};

#endif
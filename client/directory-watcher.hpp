#ifndef __DIRECTORY_WATCHER_H__
#define __DIRECTORY_WATCHER_H__

#include <sys/inotify.h>

#include <string>

#include "synchronization-service.hpp"

class DirectoryWatcher {
 private:
  int fd, wd;

  std::string path;
  SynchronizationService* synchroService;

  uint32_t watchMask = IN_MODIFY | IN_MOVED_FROM | IN_MOVED_TO | IN_CLOSE;

  void prepare();
  void inotify_init();
  void inotify_add_watch();

 public:
  ~DirectoryWatcher();
  DirectoryWatcher(std::string path, SynchronizationService* synchroService);

  void start();
};

#endif
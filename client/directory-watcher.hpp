#ifndef __DIRECTORY_WATCHER_H__
#define __DIRECTORY_WATCHER_H__

#include <sys/inotify.h>

class DirectoryWatcher {
 private:
  int fd, wd;

  const char* path;

  uint32_t watchMask = IN_MODIFY | IN_MOVED_FROM | IN_MOVED_TO | IN_CLOSE;

  void prepare();
  void inotify_init();
  void inotify_add_watch();

 public:
  ~DirectoryWatcher();
  DirectoryWatcher(const char* path);

  void start();
};

#endif
#include "directory-watcher.hpp"

#include <errno.h>
#include <netinet/in.h>
#include <sys/inotify.h>
#include <sys/types.h>
#include <unistd.h>

#include <cstdint>
#include <filesystem>
#include <iostream>
#include <string>

#define EVENT_SIZE (sizeof(struct inotify_event))
#define BUFFER_LENGTH (1024 * (EVENT_SIZE + 16))

// private
void DirectoryWatcher::inotify_init() {
  this->fd = ::inotify_init();

  if (this->fd < 0) {
    throw "error on inotify_init";
  }
};

void DirectoryWatcher::inotify_add_watch() {
  this->wd = ::inotify_add_watch(this->fd, this->path, this->watchMask);

  if (this->wd < 0) {
    throw "error when adding folder watch handler";
  }
};

void DirectoryWatcher::prepare() {
  this->inotify_init();
  this->inotify_add_watch();

  std::cout << "inotify and folder watch initialized" << std::endl;
};

// public
DirectoryWatcher::~DirectoryWatcher() {
  inotify_rm_watch(this->fd, this->wd);
  close(this->fd);
}

DirectoryWatcher::DirectoryWatcher(const char* path) : path(path) {}

void DirectoryWatcher::start() {
  this->prepare();

  char* bufferPointer;
  char buffer[BUFFER_LENGTH];

  for (;;) {
    int length = read(this->fd, buffer, BUFFER_LENGTH);

    if (length < 0) {
      throw "error reading fd";
    }

    std::cout << "read: " << length / EVENT_SIZE << " events" << std::endl;

    for (bufferPointer = buffer; bufferPointer < buffer + length;) {
      struct inotify_event* event = (struct inotify_event*)bufferPointer;

      // valid event and not directory
      bool isValidEvent = event->len && !(event->mask & IN_ISDIR);

      if (isValidEvent) {
        if (event->mask & IN_MOVED_FROM) {
          std::cout << "file '" << event->name
                    << "' was removed from the directory" << std::endl;
        } else if (event->mask & IN_MOVED_TO) {
          std::cout << "file '" << event->name << "' was moved to the directory"
                    << std::endl;
        } else if (event->mask & IN_CREATE) {
          std::cout << "file '" << event->name << "' was created" << std::endl;
        } else if (event->mask & IN_MODIFY) {
          std::cout << "file '" << event->name << "' was modified" << std::endl;
        }
      }

      bufferPointer += EVENT_SIZE + event->len;
    }
  }
}

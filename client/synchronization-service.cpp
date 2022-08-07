#include "synchronization-service.hpp"

#include <filesystem>
#include <iostream>
#include <string>

// public
SynchronizationService::SynchronizationService(std::string username)
    : username(username) {
  this->prepareSyncDir();
}

void SynchronizationService::prepareSyncDir() {
  if (!std::filesystem::is_directory(this->folder)) {
    std::filesystem::create_directory(this->folder);
    std::cout << "sync dir created!" << std::endl;
  } else {
    std::cout << "sync dir found! skipping creation" << std::endl;
  }
}

void SynchronizationService::removeFromFolderAndSignal(std::string file) {
  std::stringstream path;

  path << this->folder << std::filesystem::path::preferred_separator << file;

  if (std::filesystem::exists(path.str())) {
    std::filesystem::remove(path.str());
    std::cout << file << " was removed" << std::endl;
  } else {
    std::cout << file << " was not found!" << std::endl;
  }

  this->remove(file.c_str());
}

void SynchronizationService::remove(const char* file) {
  std::cout << "signaling '" << file << "' to be removed from the cloud"
            << std::endl;
}
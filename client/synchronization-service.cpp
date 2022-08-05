#include "synchronization-service.hpp"

#include <filesystem>
#include <iostream>
#include <string>

// public
SynchronizationService::SynchronizationService(std::string username,
                                               std::string folder)
    : username(username), folder(folder) {}

void SynchronizationService::remove(std::string file) {
  std::stringstream path;

  path << this->folder << std::filesystem::path::preferred_separator << file;

  if (std::filesystem::exists(path.str())) {
    std::filesystem::remove(path.str());
    std::cout << file << " was removed" << std::endl;
  } else {
    std::cout << file << " was not found!" << std::endl;
  }
}
#include "synchronization-service.hpp"

#include <filesystem>
#include <iostream>
#include <string>



// public
SynchronizationService::SynchronizationService(std::string username)
    : username(username) {
  this->prepareSyncDir();
}

//check if user has a directory on server
void SynchronizationService::prepareSyncDir() {

  if (!std::filesystem::is_directory((this->userFolder+"_"+username))) {
    std::filesystem::create_directory((this->userFolder+"_"+username));
    std::cout << "sync dir created!" << std::endl;
  } else {
    std::cout << "sync dir found! skipping creation" << std::endl;
  }
  
}

void SynchronizationService::removeFromFolderAndSignal(std::string file) {
  std::stringstream path;

  path << (this->userFolder+"_"+username) << std::filesystem::path::preferred_separator << file;

  if (std::filesystem::exists(path.str())) {
    std::filesystem::remove(path.str());
    std::cout << file << " was removed from cloud" << std::endl;
  } else {
    std::cout << file << " was not found!" << std::endl;
  }

  this->remove(file.c_str());
}

void SynchronizationService::remove(const char* file) {
  std::cout << "signaling '" << file << "' was removed from the cloud"
            << std::endl; 
  }

  void SynchronizationService::listUserFiles(){

      std::string path = (this->userFolder+"_"+username);
    
      for (const auto & entry : std::filesystem::directory_iterator(path))
          std::cout << entry.path() << std::endl;

  }
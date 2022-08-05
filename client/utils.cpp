#include <filesystem>
#include <iostream>
#include <string>

void createDirectoryIfNotExists(std::string path) {
  if (!std::filesystem::is_directory(path)) {
    std::filesystem::create_directory(path);
    std::cout << "sync dir created!" << std::endl;
  } else {
    std::cout << "sync dir found! skipping creation" << std::endl;
  }
}
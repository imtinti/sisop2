#include <string>

class SynchronizationService {
 private:
  std::string folder;
  std::string username;

 public:
  SynchronizationService(std::string username, std::string folder);

  void remove(std::string file);
};
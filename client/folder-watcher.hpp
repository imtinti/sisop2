#include <sys/inotify.h>

class FolderWatcher {
   private:
    int fd, wd;

    const char* path;

    uint32_t watchMask = IN_MODIFY | IN_MOVED_FROM | IN_MOVED_TO | IN_CLOSE;

    void prepare();
    void inotify_init();
    void inotify_add_watch();

   public:
    ~FolderWatcher();

    FolderWatcher(const char* path);

    void watch();
};
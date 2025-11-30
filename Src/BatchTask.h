/*
 * BatchTask.h - Class to track and execute tasks
*/


#include <string>
using namespace std;

class BatchTask {
    private:
        string BaseDir;
        string CMD;
        string Args;
    public:
        BatchTask(string dir, string cmd, string args);
        BatchTask(string dir, string cmd);
        int runTask(); 
};
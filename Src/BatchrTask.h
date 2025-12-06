/*
 * BatchrTask.h - Class to track and execute tasks
*/


#include <string>
using namespace std;

#ifndef BATCHRTASK
#define BATCHRTASK

class BatchrTask {
    private:
        string BaseDir;
        string CMD;
        string Args;
    public:
        BatchrTask(string dir, string cmd, string args);
        BatchrTask(string dir, string cmd);
        int runTask(); 
};

#endif
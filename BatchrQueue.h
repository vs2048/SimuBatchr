/*
 * BatchrQueue.h - Thread safe queue for batching tasks
*/


#include <vector>
#include <mutex>
#include "BatchrTask.h"

#ifndef BATCHRQUEUE
#define BATCHRQUEUE

using namespace std;

class BatchrQueue {
    private:
        vector <BatchrTask> Tasks;
        mutex ListMutex;
    public:
        void AddTask(BatchrTask);
        BatchrTask GetTask();
        size_t NumTasks();
        bool IsEmpty();
};

#endif
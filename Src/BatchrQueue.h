/*
 * BatchrQueue.h - Thread safe queue for batching tasks
*/


#include <vector>
#include "BatchrTask.h"

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
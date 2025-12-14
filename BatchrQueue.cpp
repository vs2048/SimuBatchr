/*
 * BatchrQueue.cpp - Thread safe queue for batching tasks
*/

#include "BatchrQueue.h"

void BatchrQueue::AddTask(BatchrTask task) {
    ListMutex.lock();
    Tasks.push_back(task);
    ListMutex.unlock();
    return;
};

BatchrTask BatchrQueue::GetTask() {
    ListMutex.lock();
    BatchrTask tmp = Tasks.back();
    Tasks.pop_back();
    ListMutex.unlock();
    return tmp;
};

size_t BatchrQueue::NumTasks() {
    ListMutex.lock();
    size_t numTasks = Tasks.size();
    ListMutex.unlock();
    return numTasks;
};

bool BatchrQueue::IsEmpty() {
    ListMutex.lock();
    bool isEmpty = Tasks.empty();
    ListMutex.unlock();
    return isEmpty;
};
/*
 * BatchrTask.cpp - Class to track and execute tasks
*/

#include "BatchrTask.h"

BatchrTask::BatchrTask(string dir, string cmd) {
    BaseDir = dir;
    CMD = cmd;
};


int BatchrTask::runTask() {
    return 0;
};
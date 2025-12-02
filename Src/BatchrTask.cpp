/*
 * BatchrTask.cpp - Class to track and execute tasks
*/

#include "BatchrTask.h"

BatchrTask::BatchrTask(string dir, string cmd, string args) {
    BaseDir = dir;
    CMD = cmd;
    Args = args;
};

BatchrTask::BatchrTask(string dir, string cmd) {
    BaseDir = dir;
    CMD = cmd;
    Args = "";
};


int BatchrTask::runTask() {
    return 0;
};
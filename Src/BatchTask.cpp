/*
 * BatchTask.cpp - Class to track and execute tasks
*/

#include "BatchTask.h"

BatchTask::BatchTask(string dir, string cmd, string args) {
    BaseDir = dir;
    CMD = cmd;
    Args = args;
};

BatchTask::BatchTask(string dir, string cmd) {
    BaseDir = dir;
    CMD = cmd;
    Args = "";
};


int BatchTask::runTask() {
    return 0;
};
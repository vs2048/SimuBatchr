/*
 * SimuBatchr.cpp - Main file for SimuBatchr. Also includes the function for the workers.
*/

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <thread>
#include "BatchrQueue.h"
#include "BatchrTask.h"
using namespace std;

void BatchrWorker() {};

int main(int argc, char* argv[]) {
    string inFile;  // Input file
    uint8_t nProc;  // Number of processes to run
    BatchrQueue batchQ; // Queue of processes to run

    // Parse the arguments
    switch(argc) {
        case 1:
            inFile = "testrun.txt";
            nProc = thread::hardware_concurrency();
            cout << "No command line argument. Using default file testrun.txt and " << (int)nProc << " threads\n";
            break;
        case 2:
            inFile = argv[1];
            nProc = thread::hardware_concurrency();
            cout << "Using file " << inFile<< ". Threads not specified, using " << (int)nProc << " threads\n";
            break;
        case 3:
            inFile = argv[1];
            nProc = stoi(string(argv[2]));
            cout << "Using file " << inFile << " and " << (int)nProc << " threads\n";
            break;
        default:
            cout << "Invalid invocation. Call as \"Simubatchr InputFile NumberOfThreads\"";
            return -1;
    }

    // Read the file
    ifstream inFileStream(inFile);
    if(!inFileStream.is_open()) {
        cout << "Error opening file\n";
    }

    string line;
    while(getline(inFileStream, line)) {
        // TODO: process line
    }


    inFileStream.close();

}
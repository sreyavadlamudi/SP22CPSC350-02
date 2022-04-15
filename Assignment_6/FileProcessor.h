/*
  FileProcessor.h is the header file that declares the clockTicks variable, the
  allStudents variable, the queueTimes variable, the windowTimes variable, the
  time varaible, the string variable, the idleWindowTimes variable, and the
  function names
*/
#include "Registrar.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class FileProcessor {
  public:
    DLLQueue<int> clockTicks;
    DLLQueue<int> allStudents;
    DLLQueue<int> queueTimes;
    DLLQueue<int> windowTimes;
    DLLQueue<int> idleWindowTimes;
    int time;
    string line;
    FileProcessor();
    ~FileProcessor();
    void processFile(string inputName);
};

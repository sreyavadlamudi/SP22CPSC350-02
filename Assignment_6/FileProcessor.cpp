/*
  FileProcessor.cpp is the class file for FileProcessor which declares the
  variables and functions mentioned in the header file
*/
#include "FileProcessor.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

/*
  FileProcessor()
  the FileProcessor() function is the constructor that sets line to an empty string
  @param N/A
  @return N/A
*/
FileProcessor::FileProcessor() {
  line = "";
}

/*
  ~FileProcessor()
  the ~FileProcessor() function is the destructor that destroys the class
  @param N/A
  @return N/A
*/
FileProcessor::~FileProcessor() {
  string del = "deleted";
}

/*
  processFile()
  the processFile() function takes in the name of a file, iterates through the
  lines, and gets values for number of windows, students, window time of each student, and the clock tick.
  Then it adds them to queues in order to get the wait times and idle times for the students. It also
  prints the statements for all the statistics.
  @param string inputName
  @return void
*/
void FileProcessor::processFile(string inputName) {
  ifstream in_file;
  in_file.open(inputName);

  getline(in_file, line);
  int numWindows = stoi(line);
  Registrar r(numWindows);
  int index = 0;

  for (int i = 0; i < r.numWindows; i++) {
    idleWindowTimes.enqueue(r.windows[i].getIdleTime());

  }

  while (getline(in_file, line)) {
    r.clockTick = stoi(line);
    clockTicks.enqueue(r.clockTick);
    getline(in_file, line);
    r.numStudents = stoi(line);
    allStudents.enqueue(r.numStudents);

    int totalStudents = r.numStudents;

    for (int i = 0; i < totalStudents; i++) {
      Student s;
      getline(in_file, line);
      s.windowTime = stoi(line);
      windowTimes.enqueue(s.windowTime);
      queueTimes.enqueue(0);
      r.students.enqueue(s);
      cout<<"Length: "<<r.students.length()<<endl; //prints to 4
    }
    index++;
  }
  in_file.close();

  time = 0;


  while (r.students.length() != 0) {

    int clockTicklength = clockTicks.length();
    for (int i = 0; i < clockTicklength; i++) {
      if (time == clockTicks.frontValue()) {
        for (int i = 0; i < r.numWindows; i++) {
          if ((r.windows[i].isAvailable()) && (r.students.length() == 0)) { //when do we define isAvailable
            r.windows[i].incrementIdleTime();
          }
          else if (r.windows[i].isAvailable()) {
            Student temp = r.students.dequeue();
            queueTimes.enqueue(temp.queueTime);
            if (r.students.length() == 1) {
              r.windows[i].makeUnavailable();
              r.students.dequeue();
            }

          }
        }
        int tempClockTick = clockTicks.dequeue();


      }
      else {
        if (r.students.length() != 0) { //same as while loop
          for (int i = 0; i < r.students.length(); i++) {
            int tempQueueTime = queueTimes.dequeue();
            tempQueueTime++;
            queueTimes.enqueue(tempQueueTime);
          }
        }
      }
    }
    time++;
  }

  cout << "Mean Wait Time in Queue: " << r.meanWaitTime(queueTimes) << endl;
  cout << "Median Wait Time in Queue: " << r.medianWaitTime(queueTimes) << endl;
  cout << "Mean Idle Time in Queue: " << r.meanIdleTime(idleWindowTimes) << endl;
  // cout << "Long Idle Time in Queue: " << r.longIdleTime(idleWindowTimes) << endl;
}

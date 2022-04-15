/*
  Student.cpp is the class file for Student which declares the
  variables and functions mentioned in the header file
*/
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

/*
  Student()
  the Student() function is the constructor that sets windowTime and queueTime to 0
  @param N/A
  @return N/A
*/
Student::Student() {
  windowTime = 0;
  queueTime = 0;
}

/*
  Student(int wT)
  the Student(int wT) function is the overloaded constructor that sets windowTime to wT and queueTime to 0
  @param N/A
  @return N/A
*/
Student::Student(int wT) {
  windowTime = wT;
  queueTime = 0;
}

/*
  ~Student()
  the ~Student() function is the destructor that destroys the class
  @param N/A
  @return N/A
*/
Student::~Student() {
  string del = "deleted";
}

/*
  getWindowTime()
  the getWindowTime() function returns the window time each student has
  @param N/A
  @return windowTime
*/
int Student::getWindowTime() {
  return windowTime;
}

/*
  getIdleTime()
  the getIdleTime() function returns the idle time
  @param N/A
  @return idleTime
*/
int Student::getIdleTime() {
  return idleTime;
}

/*
  displayStudent()
  the displayStudent() function prints out the window time for each student
  @param N/A
  @return N/A
*/
void Student::displayStudent() {
  cout << "First Student's Window Time " << windowTime;
}

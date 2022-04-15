/*
  Registrar.cpp is the class file for Registrar which declares the variables and
  functions mentioned in the header file
*/
#include "Registrar.h"
#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

/*
  Registrar(int nW)
  the Registrar() function is the constructor that sets numStudents, clockTick,
  and wT to 0, numWindows to nW, and windows to a new Window array with size
  numWindows
  @param N/A
  @return N/A
*/
Registrar::Registrar(int nW) {
  numStudents = 0;
  wT = 0;
  numWindows = nW;
  clockTick = 0;
  windows = new Window [numWindows];
}

/*
  ~Registrar()
  the ~Registrar() function is the destructor that destroys the class
  @param N/A
  @return N/A
*/
Registrar::~Registrar() {
  string del = "deleted";
}

/*
  meanWaitTime(DLLQueue<int> iT)
  the meanWaitTime(DLLQueue<int> iT) function is the function that calculates
  the mean of iT DLLQueue
  @param DLLQueue<int> iT
  @return double mean
*/
double Registrar::meanWaitTime(DLLQueue<int> iT) {
  int sum = 0;
  mean = 0.0;

  for (int i = 0; i < iT.length(); i++) {
    sum += iT.dequeue();
  }

  mean = (double) sum / iT.length();
  return mean;
}

/*
  medianWaitTime(DLLQueue<int> iT)
  the meanWaitTime(DLLQueue<int> iT) function is the function that calculates
  the median of iT DLLQueue
  @param DLLQueue<int> iT
  @return double median
*/
double Registrar::medianWaitTime(DLLQueue<int> iT) {
  return 0.0;
}

/*
  maxWaitTime(DLLQueue<int> iT)
  the maxWaitTime(DLLQueue<int> iT) function is the function that returns the
  max queue time
  @param DLLQueue<int> iT
  @return int maxQT
*/
int Registrar::maxWaitTime(DLLQueue<int> iT) {
  int maxQT = 0;
  int tempFirQT = 0;
  int tempSecQT = 0;
  int iTLength = iT.length();
  for (int i = 0; i < iTLength; i++) {
    tempFirQT = iT.dequeue();
    tempSecQT = iT.dequeue();
    if (tempSecQT > tempFirQT) {
      maxQT = tempSecQT;
    }
    else if (tempFirQT > tempSecQT) {
      maxQT = tempFirQT;
      iT.enqueue(tempFirQT);
      iT.enqueue(tempSecQT);
    }
  }
  return maxQT;
}

/*
  longWaitTime(DLLQueue<int> iT)
  the longWaitTime(DLLQueue<int> iT) function is the function that returns the
  number of queue times that are over 10 clock ticks
  @param DLLQueue<int> iT
  @return int longQTCount
*/
int Registrar::longWaitTime(DLLQueue<int> iT) {
  int longQTCount = 0;
  int iTLength = iT.length();
  for (int i = 0; i < iTLength; i++) {
    int tempQT = iT.dequeue();
    if (tempQT >= 10) {
      longQTCount++;
      iT.enqueue(tempQT);
    }
  }
  return longQTCount;
}

/*
  meanIdleTime(DLLQueue<int> iWT)
  the meanIdleTime(DLLQueue<int> iWT) function is the function that calculates
  the mean of iWT DLLQueue
  @param DLLQueue<int> iWT
  @return double mean
*/
double Registrar::meanIdleTime(DLLQueue<int> iWT) {
  int sum = 0;
  mean = 0.0;
  int iWTLength = iWT.length();

  for (int i = 0; i < iWTLength; i++) {
    int tempIWT = iWT.dequeue();
    sum += tempIWT;
    iWT.enqueue(tempIWT);
  }

  mean = (double) sum / iWTLength;
  return mean;
}

/*
  maxIdleTime(DLLQueue<int> iWT)
  the maxIdleTime(DLLQueue<int> iWT) function is the function that returns the
  max idle window time
  @param DLLQueue<int> iWT
  @return int maxIWT
*/
int Registrar::maxIdleTime(DLLQueue<int> iWT) {
  int maxIWT = 0;
  int tempFirIWT = 0;
  int tempSecIWT = 0;
  int iWTLength = iWT.length();
  for (int i = 0; i < iWTLength; i++) {
    tempFirIWT = iWT.dequeue();
    tempSecIWT = iWT.dequeue();
    if (tempSecIWT > tempFirIWT) {
      iWT.enqueue(tempFirIWT);
      maxIWT = tempSecIWT;
      iWT.enqueue(tempSecIWT);
    }
    else if (tempFirIWT > tempSecIWT) {
      maxIWT = tempFirIWT;
      iWT.enqueue(tempFirIWT);
      iWT.enqueue(tempSecIWT);
    }
  }
  return maxIWT;
}

/*
  longIdleTime(DLLQueue<int> iWT)
  the longIdleTime(DLLQueue<int> iWT) function is the function that returns the
  number of idle windows times that are over 5 clock ticks
  @param DLLQueue<int> iT
  @return int longIWTCount
*/
int Registrar::longIdleTime(DLLQueue<int> iWT) {
  int longIWTCount = 0;
  int iWTLength = iWT.length();
  for (int i = 0; i < iWTLength; i++) {
    int tempIWT = iWT.dequeue();
    if (tempIWT >= 5) {
      longIWTCount++;
      iWT.enqueue(tempIWT);
    }
  }
  return longIWTCount;
}

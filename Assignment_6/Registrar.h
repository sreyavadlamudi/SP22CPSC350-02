/*
  Registrar.h is the header file that declares the numStudents variable, the wT
  variable, the numWindows variable, the clockTick variable, the mean variable,
  the median variable, the students variable, the windows variable, and the function names
*/
#include "DLLQueue.h"
#include "Student.h"
#include "Window.h"

class Registrar {
public:
  int numStudents;
  int wT;
  int numWindows;
  int clockTick;
  double mean;
  double median;
  DLLQueue<Student> students;
  Window* windows;
  Registrar(int nW);
  ~Registrar();
  double meanWaitTime(DLLQueue<int> iT);
  double medianWaitTime(DLLQueue<int> iT);
  int maxWaitTime(DLLQueue<int> iT);
  int longWaitTime(DLLQueue<int> iT); //over 10 ticks
  double meanIdleTime(DLLQueue<int> iWT);
  int maxIdleTime(DLLQueue<int> iWT);
  int longIdleTime(DLLQueue<int> iWT); //over 5 ticks

};

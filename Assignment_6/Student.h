/*
  Student.h is the header file that declares the windowTime variable, the queueTime
  variable, the idleTime variable, and the function names
*/
class Student {
public:
  int windowTime;
  int queueTime;
  int idleTime;
  Student();
  Student(int wT);
  ~Student();
  int getWindowTime();
  int getIdleTime();
  void displayStudent();
};

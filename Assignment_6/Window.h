/*
  Window.h is the header file that declares the windowNum variable, the idleTime
  variable, the available variable, and the function names
*/
class Window {
public:
  int windowNum;
  int idleTime;
  bool available;
  Window();
  Window(int wN, int iT, bool a);
  ~Window();
  int getIdleTime();
  void incrementIdleTime();
  bool isAvailable();
  void makeUnavailable();
};

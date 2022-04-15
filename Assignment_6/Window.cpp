/*
  Window.cpp is the class file for Window which declares the
  variables and functions mentioned in the header file
*/
#include "Window.h"
#include <string>

using namespace std;

/*
  Window()
  the Window() function is the constructor that sets windowNum and idleTime to 0 and available to true
  @param N/A
  @return N/A
*/

Window::Window() {
  windowNum = 0;
  idleTime = 0;
  available = true;
}

/*
  Window(int wN, int iT, bool a)
  the Window(int wN, int iT, bool a) function is the overloaded constructor that
  sets windowNum to wN, idleTime to iT, and available to a.
  @param N/A
  @return N/A
*/
Window::Window(int wN, int iT, bool a) {
  windowNum = wN;
  idleTime = iT;
  available = a;
}

/*
  ~Window()
  the ~Window() function is the destructor that destroys the class
  @param N/A
  @return N/A
*/

Window::~Window() {
  string del = "deleted";
}

/*
  getIdleTime()
  the getIdleTime() function returns the idle time
  @param N/A
  @return idleTime
*/
int Window::getIdleTime() {
  return idleTime;
}

/*
  incrementIdleTime()
  the incrementIdleTime() function increments the idle time by one
  @param N/A
  @return N/A
*/
void Window::incrementIdleTime() {
  idleTime++;
}

/*
  isAvailable()
  the isAvailable() function returns available if there is a window that is open
  @param N/A
  @return boolean for available
*/
bool Window::isAvailable() {
  return available;
}

/*
  makeUnavailable()
  the makeUnavailable() function changes available to false because there are no windows open in the queue
  @param N/A
  @return N/A
*/
void Window::makeUnavailable() {
  available = false;
}

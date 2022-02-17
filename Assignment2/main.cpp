/*
This is the main program
*/


#include <iostream>
using namespace std;

#include "Parser.h"

/*
Main
The main method calls all the functions in order to execute them
@param there are no parameters for this function
@return the return type is void so the function does not return anything
*/

int main(){
  Parser p;

  p.User_Input();
  p.Total_Counter();
  p.Printer();

  return 0;
}

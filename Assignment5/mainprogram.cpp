//This is the main program

#include "DelimiterChecker.h"
#include <iostream>

using namespace std;

/*
Main
The main method calls all the functions in order to execute them
@param it takes in argc and argv in order to allow the user to add input as the command line arguments
@return the return type is void so the function does not return anything
*/
int main(int argc, char **argv){

  DelimiterChecker converter;
  converter.checker(argv[argc-1]);
  return 0;

}

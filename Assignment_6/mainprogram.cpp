/*
  mainprogram.cpp is the C++ file that contains the main function, which calls
  to declared functions from Delimiter.h
*/
#include "FileProcessor.h"
#include <iostream>
#include <string>

using namespace std;

/*
  main()
  this function takes in the number of arguments passed and creates a dynamic
  array with the arguments; inside, it creates a FileProcessor object and calls to
  the processFile() function using the last argument in the arguments array
  @param int argc, char **argv
  @return int 0
*/

int main(int argc, char **argv) {
  FileProcessor fp;
  fp.processFile(argv[argc - 1]);
  return 0;
}

/*
This is the main program that asks the user to enter input and output files
*/

#include "FileProcessor.h"
#include <iostream>
using namespace std;

/*
main
The main function asks the user for names of the input and output files which then proceeds to go through each of the methods in order to translate the
sentences to Tutnese
@param there are no parameters for this function
@return there is no return type for the main function
*/

int main(){
  FileProcessor f;
  string input;
  string output;
  cout<<"Enter an input file: ";
  cin>>input;
  cout<<"Enter an output file: ";
  cin>>output;
  f.processFile(input,output);
  return 0;
}

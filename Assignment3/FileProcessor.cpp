/*
Implementation file for the FileProcessor class with a default constructor and methods in order to read the sentences in the Input File and then
print it out into the Output file in Tutnese
*/

#include "FileProcessor.h"
#include "Translator.h"
#include <fstream>
#include <iostream>
using namespace std;

/*
FileProcessor
This constructor sets the default for all the variables. line is set to an empty string.
@param there are no parameters for this constructor
@return there is no return type for the constructor
*/

FileProcessor::FileProcessor(){
  line = "";
}

/*
processFile
This function takes in the names of the input and output files and then reads the lines of the input file and then prints it
into the output file in Tutnese
@param the parameter for this function are string inputName and string outputName which are the input and output files
@return there is not return type for this method since it is void
*/

void FileProcessor::processFile(string inputName, string outputName){
  Translator converter;


  ifstream in_file;
  ofstream out_file;
  in_file.open(inputName);
  out_file.open(outputName);
  while(getline(in_file,line)){
    out_file<<converter.translateEnglishSentence(line)<<endl;
  }
  in_file.close();
  out_file.close();

}

/*
~FileProcessor
This destructor prints out Object Destroyed and deallocates memory
@param there are no parameters for this destructor
@return the is no return type for the destructor
*/

FileProcessor::~FileProcessor()
{
 cout<<"Object Destroyed"<<endl;
}

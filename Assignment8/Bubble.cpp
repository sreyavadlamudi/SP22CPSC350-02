
#include "Bubble.h"
#include <fstream>
#include <stdio.h>
#include <iostream>
#include <stdexcept>

using namespace std;

/*
  Bubble()
  the Bubble() function is the constructor that sets line to an empty string as well as firstLine to an empty string, while tempNumber
  and value are 0.0, and i and arraySize are also 0.
  @param N/A
  @return N/A
*/

Bubble::Bubble(){
  line = "";
  tempNumber = 0.0;
  value = 0.0;
  i = 0;
  arraySize = 0;
  firstLine = "";
}

/*
  ~Bubble()
  the destructor that destroys the class
*/

Bubble::~Bubble(){
  string array = "deleted";
}

/*
bubbleSort
This function will read from a file into an array and sort the numbers with bubble sort
@param the parameter is the name of the file that is read from
@return the return type is void so the function does not return anything
*/
void Bubble::bubbleSort(char* input){

  ifstream in_file(input);

  if (in_file.good())
  {
    getline(in_file, firstLine);
    arraySize = stoi(firstLine);
  }

  double* array = new double[arraySize];

  while(getline(in_file,line)){
    value = stod(line);
    array[i] = value;
    i++;
  }

  for(int i = 0; i<arraySize; i++) {
   for(int j = i+1; j<arraySize; j++)
   {
      if(array[j] < array[i]) {
         tempNumber = array[i];
         array[i] = array[j];
         array[j] = tempNumber;
      }
   }
}



  in_file.close();


}

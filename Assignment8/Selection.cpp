#include "Selection.h"
#include <fstream>
#include <stdio.h>
#include <iostream>
#include <stdexcept>


using namespace std;

/*
  Selection()
  the Selection() function is the constructor that sets line to empty string, value to 0.0, tempNumber to 0.0, minimumNumber, i,
  and arraySize to 0, and firstLine to an emptyString.
  @param N/A
  @return N/A
*/

Selection::Selection(){
  line = "";
  value = 0.0;
  tempNumber = 0.0;
  minimumNumber = 0;
  i = 0;
  arraySize = 0;
  firstLine = "";
}

/*
  ~Selection()
  the destructor that destroys the class
*/
Selection::~Selection(){
  string array = "deleted";
}

/*
selectionMethod
This function will read from a file into an array and sort the numbers with selection sort
@param the parameter is the name of the file that is read from
@return the return type is void so the function does not return anything
*/
void Selection::selectionMethod(char* input) {

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

  for (int i = 0; i < arraySize-1; i++) {
    int minimumNumber = i;

    for (int j = i + 1; j < arraySize; j++) {
      if (array[j] < array[minimumNumber]) {
        minimumNumber = j;
      }
    }
    if (minimumNumber != i) {
      tempNumber = array[minimumNumber];
      array[minimumNumber] = array[i];
      array[i] = tempNumber;
    }
  }

  in_file.close();

}

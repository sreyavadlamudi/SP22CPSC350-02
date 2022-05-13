/*Implementation of Methods for sorting numbers with the Merge sort*/

#include "Merge.h"
#include <fstream>
#include <stdio.h>
#include <iostream>
#include <array>
#include <stdexcept>
#include <chrono>



using namespace std::chrono;
using namespace std;

/*
  Merge()
  the Merge() function is the constructor that sets lower to 0, higher to arraySize minus 1, line to empty string,
  value to 0.0, numberOne, numberTwo, and numberThree as well as i and arraySize to 0 and firstLine to an empty string.
  @param N/A
  @return N/A
*/

Merge::Merge(){
  lower = 0;
  higher = arraySize-1;
  line = "";
  value = 0.0;
  numberOne = 0;
  numberTwo = 0;
  numberThree = 0;
  i = 0;
  arraySize = 0;
  firstLine = "";
}

/*
  ~Merge()
  the destructor that destroys the class
*/

Merge::~Merge(){
  string array = "deleted";
}

/*
ArrayMaker
This function reads from a file and makes an array of doubles
@param the param is the name of the file that is being read from
@return the return type is void so the function does not return anything
*/

void Merge::ArrayMaker(char* input){
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
  in_file.close();

  auto begin = high_resolution_clock::now();
  recursiveMerge(array,0,arraySize-1);
  auto end = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(end - begin);
  cout << "Start time of Merge Sort: " << duration_cast<microseconds>(begin.time_since_epoch()).count() << endl;
  cout << "End time of Merge Sort: " << duration_cast<microseconds>(end.time_since_epoch()).count() << endl;
  cout << "Time taken by Merge sort: " << duration.count() << " microseconds" << endl;
  cout<<endl;

}

/*
recursiveMerge
This function will split the array in two in the middle in order to sort them and the recursive function will keep being called.
@param there parameters are the array as well as the lowest and highest indexes of the numbers in the array
@return the return type is void so the function does not return anything
*/

void Merge::recursiveMerge(double *array, int low, int high)
{
    int middle = 0;
    if (low < high){
        middle=(low+high)/2;
        recursiveMerge(array,low,middle);
        recursiveMerge(array,middle+1,high);
        merge(array,low,high,middle);
    }
}

/*
merge
This function will sort the numbers after the array is split into halves
@param there parameters are the array as well as low, high, and middle numbers which are integers
@return the return type is void so the function does not return anything
*/
void Merge::merge(double *array, int low, int high, int middle)
{

    double* tempArray = new double[arraySize];
    numberOne = low;
    numberThree = low;
    numberTwo = middle + 1;
    while (numberOne <= middle && numberTwo <= high) {
        if (array[numberOne] < array[numberTwo]) {
            tempArray[numberThree] = array[numberOne];
            numberThree++;
            numberOne++;
        }
        else  {
            tempArray[numberThree] = array[numberTwo];
            numberThree++;
            numberTwo++;
        }
    }
    while (numberOne <= middle) {
        tempArray[numberThree] = array[numberOne];
        numberThree++;
        numberOne++;
    }
    while (numberTwo <= high) {
        tempArray[numberThree] = array[numberTwo];
        numberThree++;
        numberTwo++;
    }
    for (numberOne = low; numberOne < numberThree; numberOne++)  {
        array[numberOne] = tempArray[numberOne];
    }


}

/*This is the header file for the Merge class*/

#include <iostream>

using namespace std;

class Merge{
  public:
    double lower;
    int arraySize;
    double higher;
    string line;
    double value;
    int i;
    int numberOne;
    int numberTwo;
    int numberThree;
    string firstLine;

    Merge();
    ~Merge();
    void recursiveMerge(double* array, int lower, int higher);
    void merge(double* array, int lower, int higher, int middle);
    void ArrayMaker(char* input);
};

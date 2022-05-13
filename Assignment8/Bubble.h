/*This is the header file for the Bubble class*/
#include <iostream>

using namespace std;

class Bubble{
  public:
    string line;
    double tempNumber;
    double value;
    int i;
    int arraySize;
    string firstLine;

    Bubble();
    ~Bubble();
    void bubbleSort(char* input);
};

/*
This is a header file for the DelimiterChecker class
*/
#include <iostream>

using namespace std;

class DelimiterChecker{
  public:
    char poppedValue;
    int counter;
    int breakCount;
    int missingCount;
    int missingCount1;
    string line;
    int popped;

    DelimiterChecker();
    void checker(char* input);
    ~DelimiterChecker();
};

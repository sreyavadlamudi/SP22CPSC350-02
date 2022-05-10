#include "AStack.h"
#include "DelimiterChecker.h"
#include <fstream>
#include <stdio.h>
#include <iostream>
#include <stack>
#include <stdexcept>


using namespace std;

/*
DelimiterChecker
This constructor sets the default for all the variables. Counter, breakCount, missingCount, missingCount1 are all set to 0, Line
is an empty string, and poppedValue is an empty char
@return there is no return type for the constructor
*/
DelimiterChecker::DelimiterChecker(){
  poppedValue = ' ';
  counter = 0;
  breakCount = 0;
  missingCount = 0;
  missingCount1 = 0;
  line = "";
  popped = 0;
}

/*
checker
This method reads in from a file and checks whether or not that file has the correct amount of delimiters in the right places
@param the parameter is a char value called input which is the file where the delimiters will be checked to see if they are correct
@return there is no return type for the constructor
*/
void DelimiterChecker::checker(char* input){
  AStack<char> myStack(20);
  ifstream in_file(input);
  while(getline(in_file,line)){
    counter=counter+1;
    for(int i = 0;i<line.length();i++){
      if(line[i]=='{'||line[i]=='('||line[i]=='['){
        myStack.push(line[i]);
        if(line[i]=='{'){
          missingCount1++;
        }
      }
      else if(line[i]=='}'||line[i]==')'||line[i]==']'){
        if(myStack.length() == 0){
          breakCount++;
          cout<<"Stack is empty. Error at line "<<counter<<endl;
          break;
        }
        else{
          poppedValue = myStack.pop();
        }

        if(line[i]=='}'){
          missingCount++;

          if(poppedValue=='{'){
            continue;
          }
          else{
             if(poppedValue=='('){
              cout<<"Line Number "<<counter<<" expected "<<')'<<" and found "<<line[i]<<endl;
              breakCount++;
              break;
            }
            else if(poppedValue=='['){
              cout<<"Line Number "<<counter<<" expected "<<']'<<" and found "<<line[i]<<endl;
              breakCount++;
              break;
            }
          }
        }
        else if(line[i]==')'){
          if(poppedValue=='('){
            continue;
          }
          else{
            if(poppedValue=='['){
              cout<<"Line Number "<<counter<<" expected "<<']'<<" and found "<<line[i]<<endl;
              breakCount++;
              break;
            }
            else if(poppedValue=='{'){
              cout<<"Line Number "<<counter<<" expected "<<'}'<<" and found "<<line[i]<<endl;
              breakCount++;
              break;
            }
          }
        }
        else if(line[i]==']'){
          if(poppedValue=='['){
            continue;
          }
          else{
            if(poppedValue=='('){
              cout<<"Line Number "<<counter<<" expected "<<')'<<" and found "<<line[i]<<endl;
              breakCount++;
              break;
            }
            else if(poppedValue=='{'){
              cout<<"Line Number "<<counter<<" expected "<<'}'<<" and found "<<line[i]<<endl;
              breakCount++;
              break;
            }
          }
        }
      }
   }
  }

 if(breakCount==0){
    if(missingCount!=missingCount1){
      cout<<"Reached end of file: missing }"<<endl;
    }
    else{
      cout<<"Reached the end of the file. There are no delimiter syntax errors. Would you like to try another file? "<<endl;
   }
 }

  in_file.close();
}

/*
DelimiterChecker
This destructor destroys the array and prints out Object Destroyed
@param there are no parameters for this constructor
@return there is no return type for the constructor
*/
DelimiterChecker::~DelimiterChecker()
{
 cout<<"Object Destroyed"<<endl;
}

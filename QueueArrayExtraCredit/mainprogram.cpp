//This is the main program

#include "AQueue.h"
#include <iostream>

using namespace std;

/*
Main
The main method calls all the functions in order to execute them
@param there are no parameters for this function
@return the return type is void so the function does not return anything
*/
int main(){
  AQueue<int> myQueue(5);


  myQueue.enqueue(10);
  myQueue.enqueue(35);
  myQueue.enqueue(30);
  myQueue.enqueue(86);
  myQueue.enqueue(2);
  cout<<myQueue.length()<<endl;

  cout<<myQueue.frontValue()<<endl;
  cout<<myQueue.dequeue()<<endl;
  cout<<myQueue.dequeue()<<endl;
  cout<<myQueue.dequeue()<<endl;

  cout<<myQueue.length()<<endl;
  cout<<myQueue.frontValue()<<endl;
  myQueue.clear();
  cout<<myQueue.length()<<endl;


  return 0;
}

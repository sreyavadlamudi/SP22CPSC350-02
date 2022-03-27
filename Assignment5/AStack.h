//class to implement all array functions for the stack

#include "Stack.h"
#include <stdexcept>

template <typename E>
class AStack : public Stack<E>{
private:
  int maxSize; // Max size of the list
  int stackSize; // number of elements in list right now
  int top; // Position of top element
  E* stackArray; // Array holding list elements
public:
  AStack(int size);
  ~AStack();
  void clear();
  void push(const E& item);
  E pop();
  E topValue();
  int length();
};

/*
~AStack destructor
deletes the array
@param N/A
@return N/A
*/
template <typename E>
AStack<E>::~AStack(){
  delete[] stackArray;
}

/*
AStack constructor
sets the max size of the array to the input size given, sets the stackSize and the top of the stack to zero and
creates an array with the max size
@param the input size of an array with type integer
@return N/A
*/
template <typename E>
AStack<E>::AStack(int size){
  maxSize = size;
  stackSize = top = 0;
  stackArray = new E[maxSize];
}

/*
clear()
clears every element that is in the stack and sets the size as well as the top of the stack to zero
@param N/A
@return N/A
*/
template <typename E>
void AStack<E>::clear(){
  delete[] stackArray;
  stackSize = 0;
  top = 0;
  stackArray = new E[maxSize];
}

/*
push()
adds an element to the top of the stack
@param N/A
@return takes in an item of E type that is added as input by the user
*/
template <typename E>
void AStack<E>::push(const E& item){

  if(stackSize >= maxSize){
    return;
  }
  for(int i = stackSize;i>top;i--){
    stackArray[i] = stackArray[i-1];
  }
  stackArray[top] = item;
  stackSize++;
}

/*
pop()
pops out and returns the element at the top of the stack and deletes it from the stack
@param N/A
@return the element at the top of the stack
*/
template <typename E>
E AStack<E>::pop(){
  if(stackSize == 0){
   throw std::invalid_argument("stack is empty");
  }
  E item = stackArray[top];
  for(int i=top;i<stackSize-1;i++){
    stackArray[i] = stackArray[i+1];
  }
  stackSize--;
  return item;
}

/*
topValue()
returns the first value in the stack
@param N/A
@return E type which returns the first element that is in the stack
*/
template <typename E>
E AStack<E>::topValue(){
  return stackArray[top];

}

/*
length()
returns the number of elements in the stack
@param N/A
@return integer number for amount of elements in the stack
*/
template <typename E>
int AStack<E>::length(){
  return stackSize;
}

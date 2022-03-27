//class to implement all array functions for the queue

#include "Queue.h"
#include <iostream>

template <typename E>
class AQueue : public Queue<E>{
private:
  int maxSize; // max size of the queue
  int queueSize; // number of elements in queue right now
  int front; // first element in the queue
  int rear; // last element in the queue
  E* queueArray; // Array holding queue elements
public:
  AQueue(int sz);
  ~AQueue();
  void clear();
  void enqueue(const E& item);
  E dequeue();
  E frontValue();
  int length();
};

/*
~AQueue destructor
deletes the array
@param N/A
@return N/A
*/
template <typename E>
AQueue<E>::~AQueue(){
  delete[] queueArray;
}

/*
AQueue constructor
sets the max size of the array to the input size given, sets the queueSize as well as the front and rear of the queue to 0, and
creates an array with the max size
@param the input size of an array with type integer
@return N/A
*/
template <typename E>
AQueue<E>::AQueue(int size){
  maxSize = size;
  queueSize = front = rear = 0;
  queueArray = new E[maxSize];
}

/*
clear()
clears every element that is in the queue and size of the queue becomes zero as well as the front
@param N/A
@return N/A
*/
template <typename E>
void AQueue<E>::clear(){
  delete[] queueArray;
  queueSize = 0;
  front = 0;
  queueArray = new E[maxSize];
}

/*
enqueue()
adds an element to the end of the queue
@param N/A
@return takes in an item of E type that is added as input by the user
*/
template <typename E>
void AQueue<E>::enqueue(const E& item){
  if(queueSize>=maxSize){
    return;
  }
  else{
    queueArray[rear]=item;
    rear++;
  }
  queueSize++;
}

/*
dequeue()
pops out and returns the element at the front of the queue as well as deletes it from the queue
@param N/A
@return the element at the front of the queue
*/
template <typename E>
E AQueue<E>::dequeue(){
  if(queueSize == 0){
   throw std::invalid_argument("queue is empty");
  }
  E item = queueArray[front];
  for(int i=front;i<queueSize-1;i++){
    queueArray[i] = queueArray[i+1];
  }
  queueSize--;
  return item;
}

/*
frontValue()
returns the first value in the queue
@param N/A
@return E type which returns the first element that is in the queue
*/
template <typename E>
E AQueue<E>::frontValue(){
  return queueArray[front];
}

/*
length()
returns the number of elements in the queue
@param N/A
@return integer number for amount of elements in the queue
*/
template <typename E>
int AQueue<E>::length(){
  return queueSize;
}

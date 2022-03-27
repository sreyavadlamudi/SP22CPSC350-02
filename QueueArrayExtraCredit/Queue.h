// abstract queue class

template <typename E>
class Queue{
public:
  Queue(){} //default constructor
  virtual ~Queue(){} //destructor

  //reinitialize the queue
  virtual void clear() = 0;

  //place element at the end of the queue
  // @param item: elements being enqueued
  virtual void enqueue(const E& item) = 0;

  //remove and return element at the front of the queue.
  //return: the element at the front
  virtual E dequeue() = 0;

  // return: a copy of the front ekement
  virtual E frontValue() = 0;

  //return: numberof elements in the queue
  virtual int length() = 0;

};

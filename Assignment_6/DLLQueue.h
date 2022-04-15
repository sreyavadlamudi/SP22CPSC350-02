/*
  DLLQueue.h is the header file that declares the front variable, the rear variable,
  the size variable, the dll variable, and the function names
*/
#include "DLList.h"

template <typename E>

class DLLQueue {
  private:
    ListNode<E>* front;  // pointer to the front
    ListNode<E>* rear;  // pointer to the tail
    int size;
    DLList<E> dll;
  public:
    DLLQueue();
    ~DLLQueue();
    void clear();
    void enqueue(const E& item);
    E dequeue();
    E frontValue();
    int length();
    bool isEmpty();
};

/*
  Constructor for DLLQueue.
*/
template <typename E>
DLLQueue<E>::DLLQueue() {
  front = rear = nullptr;
  size = 0;
}

/*
  Destructor for DLLQueue.
*/
template <typename E>
DLLQueue<E>::~DLLQueue() {
  clear();
}

/*
  clear
  Function deletes the DLList and resets front and rear to new List Nodes and
  size to 0.
  @param N/A
  @return N/A
*/
template <typename E>
void DLLQueue<E>::clear() {
  while (front != nullptr) {
    ListNode<E>* temp = front;
    front = front->next;
    delete temp;
  }
  front = rear = new ListNode<E>;
  size = 0;
}

/*
  enqueue
  Function inserts a list node to the back of the queue using insertBack from
  DLList and increments the size variable.
  @param item: item value to be inserted.
*/
template <typename E>
void DLLQueue<E>::enqueue(const E& item) {
  dll.insertBack(item);
  size++;
}

/*
  dequeue
  Function removes a list node from the front of the queue using removeFront
  from DLList and decrements the size variable.
  @return: item value at front.
*/
template <typename E>
E DLLQueue<E>::dequeue() {
  size--;
  dll.removeFront();
}

/*
  frontValue
  Function returns the data value at front of queue using peekFront from DLList.
  @return: item value at front.
*/
template <typename E>
E DLLQueue<E>::frontValue() {
  dll.peekFront();
}

/*
  length
  Function returns the size of the queue.
  @return: size of list.
*/
template <typename E>
int DLLQueue<E>::length() {
  return size;
}

/*
  isEmpty
  Function returns if queue is empty or not by checking size.
  @return: T/F.
*/
template <typename E>
bool DLLQueue<E>::isEmpty() {
  return (size == 0);
}

//stack abstract class

template<typename E>
class Stack{
public:
  Stack(){} //default constructor
  virtual ~Stack() {} //base Destructor

  //reinitialize the stack
  virtual void clear() = 0;

  //push an element onto the top of the stacks
  //@param item: element being pushed
  virtual void push(const E& item) = 0;

  //remove the element from the top of the stack
  //return: element at the top
  virtual E pop() = 0;

  // returns the top element of the stack
  virtual E topValue() = 0;

  //return the number of elements in the stack
  virtual int length() = 0;
};

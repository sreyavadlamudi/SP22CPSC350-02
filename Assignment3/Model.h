/*
This is the header file for the Model class
*/

using namespace std;
#include <string>

class Model{
private:
  string newLetter;
  string newDoubleLetter;
public:
  Model();
  string translateSingleCharacter(char c);
  string translateDoubleCharacter(char c);
  ~Model();
};

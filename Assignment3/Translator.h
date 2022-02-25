/*
This is the header file for the Translator class
*/

#include <string>
using namespace std;

class Translator{
private:
  int i;
  string word;

public:
  Translator();
  string translateEnglishWord(string word);
  string translateEnglishSentence(string sentence);
  ~Translator();

};

/*
Implementation file for the Translator class with a default constructor and methods to translate English words and sentences into Tutnese
*/

#include <iostream>
#include <string>

#include "Model.h"
#include "Translator.h"

/*
Translator
This constructor sets the default for all the variables. i is set to zero and word and newWord2 are set to empty strings
@param there are no parameters for this constructor
@return there is no return type for the constructor
*/

Translator::Translator(){
  i=0;
  word = "";
}

/*
translateEnglishWord
This function translated each english word into Tutnese by calling either the translateDoubleLetter or translateSingleLetter. If there is a pair
of letters, then translateDoubleLetter is called.
@param the parameter for this function is the English word taken from the input file
@return the return type the string of the translated word in Tutnese
*/

string Translator::translateEnglishWord(string word){
  Model model;

  string translated_word = "";

  int j = i;
  for(j;j<word.length();j++){
    if(word[j]==word[j+1]){
      translated_word = translated_word + model.translateDoubleCharacter(word[j]);
      j=j+1;
    }
    else{
        translated_word = translated_word + model.translateSingleCharacter(word[j]);
    }
  }
      return translated_word;
}

/*
translateEnglishSentence
This function translates the English sentence in the input file into Tutnese by calling the translateEnglishWord function
@param the parameter for this function is the sentence taken in from the input file
@return the return type is the sentence after being translated into Tutnese
*/

string Translator::translateEnglishSentence(string sentence){

  string newWord = "";
  for(auto c: sentence){
    if(c==' '||c=='.'||c==','||c=='!'||c=='?'||c==';'){
      newWord += translateEnglishWord(word);
      newWord += c;
      word = "";
    }
    else{
      word+=c;
    }
  }

  return newWord;

}

/*
~Translator
This destructor prints out Object Destroyed and deallocates memory
@param there are no parameters for this destructor
@return the is no return type for the destructor
*/

Translator::~Translator()
{
 cout<<"Object Destroyed"<<endl;
}

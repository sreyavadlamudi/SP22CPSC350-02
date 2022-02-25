/*
Implementation file for the Model class with a default constructor and methods that will translate an english letter
 as well as double letters into Tutnese
*/

#include <iostream>
#include <cctype>
#include <fstream>
#include <string>
using namespace std;

#include "Model.h"

/*
Model
This constructor sets the default for all the variables. Both newLetter and newDoubleLetter are set to empty strings
@param there are no parameters for this constructor
@return there is no return type for the constructor
*/

Model::Model(){
  newLetter = "";
  newDoubleLetter = "";
}

/*
translateSingleCharacter
This function takes in a character and then translates the single English letter into Tutnese through if statements
@param the parameter for this function is char c
@return the return type is a string and it will return the new letter after being translated into Tutnese
*/

string Model::translateSingleCharacter(char c){
  if(c=='a'){
    newLetter = "a";
  }
  if(c=='A'){
    newLetter =  "A";
  }
  else if(c=='b'){
    newLetter =  "bub";
  }
  else if(c=='B'){
    newLetter =  "Bub";
  }
  else if(c=='c'){
    newLetter =  "cash";
  }
  else if(c=='C'){
    newLetter =  "Cash";
  }
  else if(c=='d'){
    newLetter =  "dud";
  }
  else if(c=='D'){
    newLetter =  "Dud";
  }
  else if(c=='e'){
    newLetter =  "e";
  }
  else if(c=='E'){
    newLetter =  "E";
  }
  else if(c=='f'){
    newLetter =  "fuf";
  }
  else if(c=='F'){
    newLetter =  "Fuf";
  }
  else if(c=='g'){
    newLetter =  "gug";
  }
  else if(c=='G'){
    newLetter =  "Gug";
  }
  else if(c=='h'){
    newLetter =  "hash";
  }
  else if(c=='H'){
    newLetter =  "Hash";
  }
  else if(c=='i'){
    newLetter =  "i";
  }
  else if(c=='I'){
    newLetter =  "I";
  }
  else if(c=='j'){
    newLetter =  "jay";
  }
  else if(c=='J'){
    newLetter =  "Jay";
  }
  else if(c=='k'){
    newLetter =  "kuck";
  }
  else if(c=='K'){
    newLetter = "Kuck";
  }
  else if(c=='l'){
    newLetter =  "lul";
  }
  else if(c=='L'){
    newLetter =  "Lul";
  }
  else if(c=='m'){
    newLetter =  "mum";
  }
  else if(c=='M'){
    newLetter =  "Mum";
  }
  else if(c=='n'){
    newLetter =  "nun";
  }
  else if(c=='N'){
    newLetter =  "Nun";
  }
  else if(c=='o'){
    newLetter =  "o";
  }
  else if(c=='O'){
    newLetter =  "O";
  }
  else if(c=='p'){
    newLetter =  "pub";
  }
  else if(c=='P'){
    newLetter =  "Pub";
  }
  else if(c=='q'){
    newLetter =  "quack";
  }
  else if(c=='Q'){
    newLetter = "Quack";
  }
  else if(c=='r'){
    newLetter =  "rug";
  }
  else if(c=='R'){
    newLetter =  "Rug";
  }
  else if(c=='s'){
    newLetter =  "sus";
  }
  else if(c=='S'){
    newLetter =  "Sus";
  }
  else if(c=='t'){
    newLetter =  "tut";
  }
  else if(c=='T'){
    newLetter =  "Tut";
  }
  else if(c=='u'){
    newLetter =  "u";
  }
  else if(c=='U'){
    newLetter =  "U";
  }
  else if(c=='v'){
    newLetter =  "vuv";
  }
  else if(c=='V'){
    newLetter =  "Vuv";
  }
  else if(c=='w'){
    newLetter =  "wack";
  }
  else if(c=='W'){
    newLetter =  "Wack";
  }
  else if(c=='x'){
    newLetter =  "ex";
  }
  else if(c=='X'){
    newLetter =  "Ex";
  }
  else if(c=='y'){
    newLetter =  "yub";
  }
  else if(c=='Y'){
    newLetter =  "Yub";
  }
  else if(c=='z'){
    newLetter =  "zub";
  }
  else if(c=='Z'){
    newLetter =  "Zub";
  }
  return newLetter;
}

/*
translateDoubleCharacter
This function takes in a character and then translates it to Tutnese, but this function is specifically for translating double letters
which are two of the same letters that are next to each other in a pair
@param the parameter for this function is char c
@return the return type is a string which returns the new double letter after being translated to Tutnese
*/

  string Model::translateDoubleCharacter(char c){
    if(c=='a'){
      newDoubleLetter =  "squata";
    }
    if(c=='A'){
      newDoubleLetter =  "Squata";
    }
    else if(c=='b'){
      newDoubleLetter =  "squabub";
    }
    else if(c=='B'){
      newDoubleLetter =  "Squabub";
    }
    else if(c=='c'){
      newDoubleLetter =  "squacash";
    }
    else if(c=='C'){
      newDoubleLetter =  "Squacash";
    }

    else if(c=='d'){
      newDoubleLetter =  "squadud";
    }
    else if(c=='D'){
      newDoubleLetter =  "Squadud";
    }
    else if(c=='e'){
      newDoubleLetter =  "squate";
    }
    else if(c=='E'){
      newDoubleLetter =  "Squate";
    }
    else if(c=='f'){
      newDoubleLetter =  "squafuf";
    }
    else if(c=='F'){
      newDoubleLetter =  "Squafuf";
    }
    else if(c=='g'){
      newDoubleLetter =  "squagug";
    }
    else if(c=='G'){
      newDoubleLetter =  "Squagug";
    }
    else if(c=='h'){
      newDoubleLetter =  "squahash";
    }
    else if(c=='H'){
      newDoubleLetter =  "Squahash";
    }
    else if(c=='i'){
      newDoubleLetter =  "squati";
    }
    else if(c=='I'){
      newDoubleLetter =  "Squati";
    }
    else if(c=='J'){
      newDoubleLetter =  "Squajay";
    }
    else if(c=='j'){
      newDoubleLetter =  "squajay";
    }
    else if(c=='k'){
      newDoubleLetter =  "sqaukuck";
    }
    else if(c=='K'){
      newDoubleLetter =  "Sqaukuck";
    }
    else if(c=='l'){
      newDoubleLetter =  "squalul";
    }
    else if(c=='L'){
      newDoubleLetter =  "Squalul";
    }
    else if(c=='m'){
      newDoubleLetter =  "squamum";
    }
    else if(c=='M'){
      newDoubleLetter =  "Squamum";
    }
    else if(c=='n'){
      newDoubleLetter =  "squanun";
    }
    else if(c=='N'){
      newDoubleLetter =  "Squanun";
    }
    else if(c=='o'){
      newDoubleLetter =  "squato";
    }
    else if(c=='O'){
      newDoubleLetter =  "Squato";
    }
    else if(c=='p'){
      newDoubleLetter =  "squapub";
    }
    else if(c=='P'){
      newDoubleLetter =  "Squapub";
    }
    else if(c=='q'){
      newDoubleLetter =  "squaquack";
    }
    else if(c=='Q'){
      newDoubleLetter =  "Squaquack";
    }
    else if(c=='r'){
      newDoubleLetter =  "squarug";
    }
    else if(c=='R'){
      newDoubleLetter =  "Squarug";
    }
    else if(c=='s'){
      newDoubleLetter =  "squasus";
    }
    else if(c=='S'){
      newDoubleLetter =  "Squasus";
    }
    else if(c=='t'){
      newDoubleLetter =  "squatut";
    }
    else if(c=='T'){
      newDoubleLetter =  "Squatut";
    }
    else if(c=='u'){
      newDoubleLetter =  "squatu";
    }
    else if(c=='U'){
      newDoubleLetter =  "Squatu";
    }
    else if(c=='v'){
      newDoubleLetter =  "squavuv";
    }
    else if(c=='V'){
      newDoubleLetter =  "Squavuv";
    }
    else if(c=='w'){
      newDoubleLetter =  "squawack";
    }
    else if(c=='W'){
      newDoubleLetter =  "Squawack";
    }
    else if(c=='x'){
      newDoubleLetter =  "squaex";
    }
    else if(c=='X'){
      newDoubleLetter =  "Squaex";
    }
    else if(c=='y'){
      newDoubleLetter =  "squayub";
    }
    else if(c=='Y'){
      newDoubleLetter =  "Squayub";
    }
    else if(c=='z'){
      newDoubleLetter =  "squazub";
    }
    else if(c=='Z'){
      newDoubleLetter =  "Squazub";
    }
    return newDoubleLetter;
}

/*
~Model
This destructor prints out Object Destroyed and deallocates memory
@param there are no parameters for this destructor
@return the is no return type for the destructor
*/

Model::~Model()
{
 cout<<"Object Destroyed"<<endl;
}

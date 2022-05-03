/*
Implementation file for the Parser class
*/

#include <iostream>
#include <cctype>
#include <fstream>
#include <string>
using namespace std;

#include "Parser.h"

/*
Parser
This constructor sets the default for all the variables. The integers are set to 0 and the string is set to null
@param there are no parameters for this constructor
@return the return type is void so the constructor does not return anything
*/

Parser::Parser(){
  sentence = "null";
  average_counter = 0;
  non_alphabet_counter = 0;
  alphabet_counter = 0;
  pair_counter = 0;

  a_counter = 0;
  b_counter = 0;
  c_counter = 0;
  d_counter = 0;
  e_counter = 0;
  f_counter = 0;
  g_counter = 0;
  h_counter = 0;
  i_counter = 0;
  j_counter = 0;
  k_counter = 0;
  l_counter = 0;
  m_counter = 0;
  n_counter = 0;
  o_counter = 0;
  p_counter = 0;
  q_counter = 0;
  r_counter = 0;
  s_counter = 0;
  t_counter = 0;
  u_counter = 0;
  v_counter = 0;
  w_counter = 0;
  x_counter = 0;
  y_counter = 0;
  z_counter = 0;
}

/*
User_Input
This function takes in a string from the user as input
@param there are no parameters for this function
@return the return type is void so the function does not return anything
*/

void Parser :: User_Input(){

  cout<<"Enter a string:";
  getline(cin,sentence);

}

/*
Total_Counter
This function uses a for loop as well as if statements within the loop in order to count all the alphabets, non-alphabets, pairs in the string the user inputs as well
as take the average of all the alphabets within the string.
@param there are no parameters for this function
@return the return type is void so the function does not return anything
*/

void Parser :: Total_Counter(){

    for(int i = 0; i<sentence.length(); i++){
      char letter = tolower(sentence[i]);
      char letter2 = tolower(sentence[i+1]);

      if(letter=='a'){
        a_counter = a_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='a'&&letter2=='a'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='b'){
        b_counter = b_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='b'&&letter2=='b'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='c'){
        c_counter = c_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='c'&&letter2=='c'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='d'){
        d_counter = d_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='d'&&letter2=='d'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='e'){
        e_counter = e_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='e'&&letter2=='e'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='f'){
        f_counter = f_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='f'&&letter2=='f'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='g'){
        g_counter = g_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='g'&&letter2=='g'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='h'){
        h_counter = h_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='h'&&letter2=='h'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='i'){
        i_counter = i_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='i'&&letter2=='i'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='j'){
        j_counter = j_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='j'&&letter2=='j'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='k'){
        k_counter = k_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='k'&&letter2=='k'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='l'){
        l_counter = l_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='l'&&letter2=='l'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='m'){
        m_counter = m_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='m'&&letter2=='m'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='n'){
        n_counter = n_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='n'&&letter2=='n'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='o'){
        o_counter = o_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='o'&&letter2=='o'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='p'){
        p_counter = p_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='p'&&letter2=='p'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='q'){
        q_counter = q_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='q'&&letter2=='q'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='r'){
        r_counter = r_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='r'&&letter2=='r'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='s'){
        s_counter = s_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='s'&&letter2=='s'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='t'){
        t_counter = t_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='t'&&letter2=='t'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='u'){
        u_counter = u_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='u'&&letter2=='u'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='v'){
        v_counter = v_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='v'&&letter2=='v'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='w'){
        w_counter = w_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='w'&&letter2=='w'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='x'){
        x_counter = x_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='x'&&letter2=='x'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='y'){
        y_counter = y_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='y'&&letter2=='y'){
          pair_counter = pair_counter + 1;
        }
      }
      else if(letter=='z'){
        z_counter = z_counter+1;
        average_counter = average_counter+1;
        alphabet_counter = alphabet_counter + 1;
        if(letter=='z'&&letter2=='z'){
          pair_counter = pair_counter + 1;
        }
      }
      else{
          non_alphabet_counter = non_alphabet_counter +1;
      }

}
}

/*
Printer
This function will print out the count of each alphabet, as well as print out the non-alphabet count, pairs count,
and average in an output file
@param there are no parameters for this function
@return the return type is void so the function does not return anything
*/

void Parser :: Printer(){
  ofstream out_file;
  out_file.open("Output.txt");
  out_file<<"a:"<<a_counter<<endl;
  out_file<<"b:"<<b_counter<<endl;
  out_file<<"c:"<<c_counter<<endl;
  out_file<<"d:"<<d_counter<<endl;
  out_file<<"e:"<<e_counter<<endl;
  out_file<<"f:"<<f_counter<<endl;
  out_file<<"g:"<<g_counter<<endl;
  out_file<<"h:"<<h_counter<<endl;
  out_file<<"i:"<<i_counter<<endl;
  out_file<<"j:"<<j_counter<<endl;
  out_file<<"k:"<<k_counter<<endl;
  out_file<<"l:"<<l_counter<<endl;
  out_file<<"m:"<<m_counter<<endl;
  out_file<<"n:"<<n_counter<<endl;
  out_file<<"o:"<<o_counter<<endl;
  out_file<<"p:"<<p_counter<<endl;
  out_file<<"q:"<<q_counter<<endl;
  out_file<<"r:"<<r_counter<<endl;
  out_file<<"s:"<<s_counter<<endl;
  out_file<<"t:"<<t_counter<<endl;
  out_file<<"u:"<<u_counter<<endl;
  out_file<<"v:"<<v_counter<<endl;
  out_file<<"w:"<<w_counter<<endl;
  out_file<<"x:"<<x_counter<<endl;
  out_file<<"y:"<<y_counter<<endl;
  out_file<<"z:"<<z_counter<<endl;
  out_file<<"alphabets:"<<alphabet_counter<<endl;
  out_file<<"non-alphabets:"<<non_alphabet_counter<<endl;
  out_file<<"average:" << (float)average_counter/26<<endl;
  out_file<<"pairs:"<<pair_counter<<endl;
  out_file.close();
}

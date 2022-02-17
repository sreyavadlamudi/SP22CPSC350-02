/*
This is a header file for the Parser class
*/

using namespace std;

class Parser{
private:
  int a_counter, b_counter,c_counter,d_counter,e_counter,f_counter,g_counter,h_counter,i_counter,j_counter,k_counter,
  l_counter,m_counter,n_counter,o_counter,p_counter,q_counter,r_counter,s_counter,t_counter,u_counter,v_counter,w_counter,
  x_counter,y_counter,z_counter;

  int average_counter, non_alphabet_counter, alphabet_counter, pair_counter;
  string sentence;

public:
  Parser();

  void Total_Counter();
  void Printer();
  void User_Input();

};

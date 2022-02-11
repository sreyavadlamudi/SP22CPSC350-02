/*
This program asks the user for three ages and then prints the ages from oldest to youngest.
*/

#include <iostream>
using namespace std;

int main(){
  int age1, age2, age3;
  cout<<"Please enter 3 different number ages: ";
  cin>>age1;
  cin>>age2;
  cin>>age3;

  if(age1>age2 && age1>age3 &&age2>age3){
    cout<<age1<<" "<<age2<<" "<<age3<<endl;
  }
  else if(age2>age1 && age2>age3 &&age1>age3){
    cout<<age2<<" "<<age1<<" "<<age3<<endl;
  }
  else if(age1>age2 && age1>age3 &&age3>age2){
    cout<<age1<<" "<<age3<<" "<<age2<<endl;
  }
  else if(age2>age1 && age2>age3 &&age3>age1){
    cout<<age2<<" "<<age3<<" "<<age1<<endl;
  }
  else if(age3>age1 && age3>age2 &&age2>age1){
    cout<<age3<<" "<<age2<<" "<<age1<<endl;
  }
  else{
    cout<<age3<<" "<<age1<<" "<<age2<<endl;
  }
}

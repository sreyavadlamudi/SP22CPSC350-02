/*
This program will ask the user for some prices until the user enters a negative number
and then finds the total cost of all the items.
*/

#include <iostream>
using namespace std;

int main(){
  float sum;
  float price;
  cout<<"Enter the price of an item: ";
  cin>>price;
  sum = price;
  while(price>0){
    cout<<"Enter the price of an item: ";
    cin>>price;
    sum = sum + price;
  }
  cout<<"The total sum of the items is: $"<<sum<<endl;
}

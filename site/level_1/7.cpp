/*
    
    Print the average of three numbers entered by the user by creating a class named 'Average' having
    a function to calculate and print the average without creating any object of the Average class.

*/

#include<iostream>
#include <cmath>
#include<string>
using namespace std;

class Average{
  
  public:
    void calculate(){
      int a,b,c;
      cin>>a>>b>>c;
      cout<<(a+b+c)/3;
  }
    
};

int main(){
    Average _;
    _.calculate();
    
    return 0;
}     

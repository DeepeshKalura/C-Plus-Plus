/*
    Write a program to print the area of a rectangle by creating a class named 'Area' having two functions.
    First function named as 'setDim' takes the length and breadth of the rectangle as parameters and 
    the second function named as 'getArea' returns the area of the rectangle. Length and 
    breadth of the rectangle are entered through keyboard.

*/

#include<iostream>
#include <cmath>
#include<string>
using namespace std;

class Area{
  
  public:
    int s1,s2;
    
    
    void setDim(int l, int b){
        s1 = l;
        s2 = b;
    }
    int getArea(){
        return s1*s2;
    }
    
};

int main(){
    
    Area s;
    int l,b;
    cout<<"Enter The Length :   ";
    cin>>l;
    cout<<"Enter The Breath: ";
    cin>>b;
    s.setDim(l,b);
    cout<<"Area of Rectangle:   "<<s.getArea()<<endl;
    
    return 0;
}

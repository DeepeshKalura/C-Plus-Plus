/*
    Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of its
    length and breadth as parameters of its constructor and having a function named 'returnArea' which
    returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.

*/

#include<iostream>
#include <cmath>
#include<string>
using namespace std;

class Area{
  
  public:
    int s1,s2;
    
    Area(int l, int b){
        s1 = l;
        s2 = b;
    }
    int getArea(){
        return s1*s2;
    }
    
};

int main(){
    int l,b;
    cout<<"Enter The Length :   ";
    cin>>l;
    cout<<"Enter The Breath: ";
    cin>>b;
    Area s = Area(l,b);
    cout<<"Area of Rectangle:   "<<s.getArea()<<endl;
    
    return 0;
}

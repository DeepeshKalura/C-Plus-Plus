/*
Write a program to print the area of two rectangles having sides (4,5) and (5,8) 
respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. 
Length and breadth are passed as parameters to its constructor

*/

#include<iostream>
#include <cmath>
#include<string>
using namespace std;

class Rectangle{
  
  public:
    int s1,s2;
    
    Rectangle(int a, int b){
        s1 = a;
        s2 = b;
    }
    void Perimeter(){
        int perimeter = 2*(s1+s2);
        cout<<"Perimeter of Rectangle is:    "<<perimeter<<endl;
    }
    
    void Area(){

        
        float area = (s1*s2);
        cout<<"Area of Rectangle is:    "<<area<<endl;
    }
    
};

int main(){
    
    Rectangle s = Rectangle(4,5);
    s.Perimeter();
    s.Area();
    cout<<endl;
    Rectangle d = Rectangle(5,8);
    d.Perimeter();
    d.Area();
    
    return 0;
}

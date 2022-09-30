/*
    Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
    creating a class named 'Triangle' with the constructor having the three sides as its parameters.

*/

#include<iostream>
#include <cmath>
#include<string>
using namespace std;

class Triangle{
  
  public:
    int s1,s2,s3;
    
    Triangle(int a, int b, int c){
        s1 = a;
        s2 = b;
        s3 = c;
    }
    void Perimeter(){
        int perimeter = (s1+s2+s3);
        cout<<"Perimeter of Triangle is:    "<<perimeter<<endl;
    }
    
    void Area(){
        float s = (s1+s2+s3)/2;
        
        float area = pow((s*(s-s1)*(s-s2)*(s-s1)) , 0.5);
        cout<<"Area of Triangle is:    "<<area<<endl;
    }
    
};

int main(){
    
    Triangle s = Triangle(3,4,5);
    s.Perimeter();
    s.Area();
    
    return 0;
}

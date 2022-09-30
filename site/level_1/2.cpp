/*

    Assign and print the roll number, phone number and address of two students having names
    "Sam" and "John" respectively by creating two objects of the class 'Student'.

*/

#include<iostream>
#include <string>
using namespace std;

class Student{
  public:
    //string name;
    int rollNumber;
    int phoneNumber;
    string address;
    
    
    void Display(){
        
    } 
};

int main(){
    Student John;
    Student Sam;
    Student Name[2];
    Name[0] = John;
    Name[1]=  Sam;
    for(int i = 0; i<2; i++){
        cin>>Name[i].rollNumber;
        cin>>Name[i].phoneNumber;
        cin>>Name[i].address;
    }
    for(int i = 0; i<2; i++){
        cout<<Name[i].rollNumber<<endl;
        cout<<Name[i].phoneNumber<<endl;
        cout<<Name[i].address<<endl;
    }
    
    return 0;
}

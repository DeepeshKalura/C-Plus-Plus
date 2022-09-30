/*
    Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
    Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
*/


#include <iostream>
#include<string>
using namespace std;

class Student{
    public:
        string name;
        int roll_no;
    
};

int main()
{
    Student Class_Section_S;
    Class_Section_S.name = "Jhon";
    Class_Section_S.roll_no = 2;
    
    cout<<"The Name of Student is:  "<<Class_Section_S.name<<endl;
    cout<<"The Roll Number of Student is:   "<<Class_Section_S.roll_no<<endl;
    
    return 0;
}

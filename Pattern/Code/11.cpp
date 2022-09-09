/*

    A B C
    B C D
    C D E
    
 -Made by Deepesh
*/
#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter the Number of Rows:    ";
    cin>>rows;
    char alphabetCounting = 'A';
    for(int i = 0; i<rows; i++)
    {
        for(int j =0; j<rows; j++)
        {
            cout<<alphabetCounting<<" ";
            alphabetCounting += 1;
        }
        cout<<endl;
        alphabetCounting = 'A';
        alphabetCounting += i+1; 
    }
    return 0;
}

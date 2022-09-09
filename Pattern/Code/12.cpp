/*

    A 
    B B 
    C C C
    
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
        for(int j =0; j<=i; j++)
        {
            cout<<alphabetCounting<<" ";
        }
        cout<<endl;
        alphabetCounting += 1;
    }
    return 0;
}

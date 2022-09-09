/*

    D 
    C D 
    B C D
    A B C D
    
 -Made by Deepesh
*/
#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter the Number of Rows:    ";
    cin>>rows;
    char alphabetCounting = 'D';
    for(int i = 0; i<rows; i++)
    {
        alphabetCounting -= i;
        for(int j =0; j<=i; j++)
        {
            cout<<alphabetCounting<<" ";
            alphabetCounting += 1;
        }
        alphabetCounting = 'D';
        cout<<endl;
        
    }
    return 0;
}

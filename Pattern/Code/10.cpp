/*

    A B C
    D E F
    G H I
    
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
    }
    return 0;
}

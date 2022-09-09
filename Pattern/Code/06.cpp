/*

    1
    2 3
    3 4 5 
    4 5 6 7
    
    Made by Deepesh
*/
#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter the Number of Rows:    ";
    cin>>rows;
    int counting = 1;
    for(int i = 0; i<rows; i++)
    {
        counting = i+1;
        for(int j =0; j<=i; j++)
        {
            cout<<counting<<" ";
            counting++;
        }
        cout<<endl;
    }
    return 0;
}

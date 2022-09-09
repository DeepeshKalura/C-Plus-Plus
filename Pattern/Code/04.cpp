/*

    1
    2 2
    3 3 3 
    4 4 4 4
    5 5 5 5 5
    
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
        for(int j =0; j<=i; j++)
        {
            cout<<counting<<" ";
        }
        counting++;
        cout<<endl;
    }
    return 0;
}

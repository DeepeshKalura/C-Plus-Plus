/*
    1 2 3 4 5
    6 7 8 9 10
    11 12 13 14 15
    16 17 18 19 20
    
    Made by Deepesh

*/

#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout<<"Enter Number Of Rows: ";
    cin>>rows;
    int counting = 1;
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<rows; j++)
        {
            cout<<counting<<" ";
            counting++;
        }
        cout<<endl;
    }

    return 0;
}

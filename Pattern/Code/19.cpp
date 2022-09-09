/*
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1

 -Made by Deepesh Kalura
*/

#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout<<"Enter Number of Rows:    ";
    cin>>rows;
    int counting = 0;
    int value = 0;
    
    for(int i = 0; i<rows; i++)
    {
        counting =0;
        value = 0;
        for(int j = 0; j<rows-i; j++)
        {
            cout<<"  ";
        }
        
        for (int k = 0; k<=2*i; k++)
        {
            if (value<i+1){
                counting+=1;
                cout<<counting<<" ";
                value++;
            }
            else{
                counting--;
                cout<<counting<<" ";
                value++;
            }
        }
        cout<<endl;
    }
    
    return 0;
}

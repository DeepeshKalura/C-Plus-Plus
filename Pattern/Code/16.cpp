/*

       *
      **
     ***
    ****

 -Made by Deepesh Kalura
*/

#include<iostream>

using namespace std;

int main(){
    
    int rows;
    cout<<"Enter Number of rows:    ";
    cin>>rows;
    for(int i = 0; i<rows; i++)
    {
        for(int k = 0; k<rows-i; k++)
        {
            cout<<" ";
        }
        
        for(int j = 0; j<=i; j++ )
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
}

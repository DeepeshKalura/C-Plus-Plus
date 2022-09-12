/*

    Number Diamond Pattern
    
            1
          1 2 3
        1 2 3 4 5
      1 2 3 4 5 6 7
        1 2 3 4 5
          1 2 3
            1
            
    Made by Deepesh Kalura
      
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c = 1;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-i; j++)
        {
            cout<<"  ";
        }
        for (int k = 0; k<(2*i+1); k++)
        {
            cout<<c<<" ";
            c++;
        }
        c = 1;
        cout<<endl;
        
    }
    c = 1;
    for(int i = n-2; i>=0; i--)
    {
        for(int j = 0; j<n-i; j++)
        {
            cout<<"  ";
        }
        for (int k = 0; k<(2*i+1); k++)
        {
            cout<<c<<" ";
            c++;
        }
        c = 1;
        cout<<endl;
        
    }
    
    return 0;
}

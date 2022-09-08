#include <iostream>

using namespace std;

int main()
{
  int n;
  cout<<"Enter Number of Rows:";
  cin>>n;
  for(int i = 0; i<n; i++ ){
    int a = 1;
    for(int j = 0; j<n; j++){
      cout<<a;
      a++;
      
    }
    cout<<endl;
    a=1;
  }
  return 0;
}

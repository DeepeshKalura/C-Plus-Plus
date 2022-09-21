#include <iostream>

using namespace std;

int main(){
	char character;
	int assci = -1;
	cin>>character;
	if(character>='A' && character <='Z'){
		assci = character;
	}
	else if(character>='a' && character <='z'){
		assci = character;
	}
	cout<<assci<<endl;
	return 0;
}

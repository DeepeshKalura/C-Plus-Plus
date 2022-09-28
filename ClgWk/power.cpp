#include<iostream>

using namespace std;

double power(double m, int n){
	if(n==0){
		return 1;
	}
	
	return m*power(m, n-1);
}

int main(){
	double m;
	cin>>m;
	int n;
	cin>>n;
	cout<<power(m,n)<<endl;


	return 0;
	
}


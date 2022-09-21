#include<iostream>
using namespace std;

int main(){
	float temperature_clavein, temperature_farneight;
	cin>>temperature_farneight;
	temperature_clavein = 5*(temperature_farneight - 32)/9;
	cout<<temperature_clavein<<endl;
	
	return 0;
	
}

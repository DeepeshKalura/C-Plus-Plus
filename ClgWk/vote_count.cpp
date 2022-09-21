#include<iostream>
using namespace std;

int main(){
	int canditate[6] = {0}, voter;
	cin>>voter;
	int arr[voter];
	for(int i = 0; i<voter; i++){
		cin>>arr[i];
		if(arr[i]==1){
			canditate[0]++;
		}
		else if(arr[i]==2){
			canditate[1]++;
		}
		else if(arr[i]==3){
			canditate[2]++;
		}
		else if(arr[i]==4){
			canditate[3]++;
		}
		else if(arr[i]==1){
			canditate[4]++;
		}
		else{
			canditate[5]++;
		}
	}
	
	int a = 1,d = canditate[0];
	
	for(int i = 1; i<6; i++)
	{
		if(d<canditate[i]){
			a = i+1;
			d = canditate[i];
		}
	}
	cout<<"The Candiate Who Wins Is "<<a<<" with a votes of "<<d<<endl;
	return 0;
}

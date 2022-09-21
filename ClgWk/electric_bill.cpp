#include<iostream>
using namespace std;

int main(){
	string name;
	float money, payMoney;
	cout<<"Enter The Name :";
	cin>>name;
	cout<<"Enter The Money: ";
	cin>>money;
	if(money<=100){
		payMoney = money*0.6;
	} 
	else if(money<=300){
		payMoney = (money-100)*0.8 + 100*0.6;
	}
	else{
		payMoney = 100*0.6 + 200 * 0.8 + (money - 300) *0.9;
	}
	if (payMoney>300){
		payMoney = payMoney*0.15	
	}
	cout<<name<<" has to pay "<<payMoney<<endl;

	return 0;
}

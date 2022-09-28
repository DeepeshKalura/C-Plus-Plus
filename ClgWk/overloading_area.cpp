#include<iostream>


using namespace std;
float area(float r){
	return 3.14*r*r;
}
float area(float l, float b){
	return l*b;
}
float area(float b, int h){
	return 0.5*b*h;
}

int main(){
	char s;
	cin>>s;
	
	while(s!='/'){
		int choice;
		cout<<"Press 1 to The Area of Rectangle"<<endl;
		cout<<"Press 2 to The Area of triangle"<<endl;
		cout<<"Press 3 to The Area of Circle"<<endl;
		cout<<"Press 4 to exit"<<endl;
		cin>>choice;
		
		switch(choice){
		
			case 1:
				float l , b;
				cout<<"Enter the base and height";
				cin>>l>>b;
				cout<<area(l,b);
				break;
			case 2:
				float base;
				int h;
				cout<<"Enter the length and breath";
				cin>>l>>b;
				cout<<area(base,h);
				break;
			case 3:
				float r;
				cout<<"Enter the radius";
				cin>>r;
				cout<<area(r);
				break;
			case 4:
				s = '/';
				break;
				
			default:
				cout<<"Enter The given value:	";
				break;
		
		}
	}

	return 0;
}

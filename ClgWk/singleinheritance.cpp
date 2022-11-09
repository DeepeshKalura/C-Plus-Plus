#include <iostream>
using namespace std;

class A{
    int a;
    public:
        int b;
        void getdata(){
            a = 100;
            b = 200;
        }
        int geta(){
            return a;
        }

};

class B:public A{
    int d;
    public:
        int c;
        void display(){
            getdata();
            d = 100;
            cout<<"b * c = "<<b*c<<endl;
            cout<<"d * a = "<<d*geta()<<endl;
        }
};

int main(){
 B base;
 base.display();
 return 0;

}

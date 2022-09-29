#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Vector{
    private:
        unsigned int size;
    public:
        float arr[1];
        float *p = arr;
        bool isVectorCreated = false;
        void IsVectorCreated(bool isDone){
            isVectorCreated = isDone;
            
        }
        void CreateVector(unsigned int Size, int *p = p){
            for (unsigned int i = 0; i<Size; i++){
                cin>>*(p+i);
                cout<<endl;
            }
            size = Size;
            IsVectorCreated(true);
        }
    
        void ModifyValue(float a, int *p = p,unsigned int b = size+1){
            *(p+b) = a;
            size++;
        }
        void MultipyScalar(int a){
            for(unsigned int i = 0; i<size; i++ ){
                *(p+i) = a * *(p+i);
            }
        }
        void ShowingVector(unsigned int Size = size, float *p = p){
            for(unsigned int i = 0;i<Size;i++){
                cout<<*(p+i);
            }
        }
    
    
};


int main(){
    cout<<"It is a demmo account for creating vector"<<endl;
    char s;
    cout<<"Please '/' to exit the program\nOr Press any key to continue....\t";
    cin>>s;
    
    while(s!='/'){
        
        cout<<"Press 1 to create a vector"<<endl;
        cout<<"Press 2 to Modify value of a vector"<<endl;
        cout<<"Press 3 to Multipy Scalar value to a vector"<<endl;
        cout<<"Press 4 to Display a vector"<<endl;
        cout<<"Press 5 to exit a vector"<<endl;
        
        unsigned short int t;
        cin>>t;
        Vector array;
        switch(t){
            case 1:
            {
                unsigned int size;
                
                array.CreateVector(size);
            
                break;
            }
            case 2:
            {
                if(array.isVectorCreated == false){
                    cout<<"Please Create Vector First"<<endl;
                }
                float a;
                cout<<"Enter The Value  :";
                cin>>a;
                array.ModifyValue(a);
                break;
            }        
            case 3:
            {
                if(array.isVectorCreated == false){
                    cout<<"Please Create Vector First"<<endl;
                }
                int a;
                cout<<" Please Enter Multipier vaklue:  ";
                cin>>a;
                array.MultipyScalar(a);
                break;
            }
            case 4:
            {
                if(array.isVectorCreated == false){
                    cout<<"Please Create Vector First"<<endl;
                }
                array.ShowingVector();
                break;
            }
            case 5:
            {
                s = '/';
                break;
            }
            
        }
        
        

    }
    return 0;    
}

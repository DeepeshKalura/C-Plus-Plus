#include <iostream>
#include <string>
#include <random>
using namespace std;

class BankAccount{
    private:
        static int accountNumber;
        
    public:
        string typeOfAccount[4];
        float balanceAmount;
        string name = "-1";
        
        
        
        void UserName(string Name){
            name = Name;
            AccountNumber();
        }
        void AccountNumber(){
            int digit = 0;
            for(int i = 0; i<12; i++){
                digit += rand() % 10;
                digit *= 10;
            }
            accountNumber = digit;
        }
        void TypeOfAccount(unsigned short int n){
            typeOfAccount[0] = "Current";
            typeOfAccount[1] = "Saving";
            typeOfAccount[2] = "Hybrid";
            typeOfAccount[3] = "Ultra-Saving";
            if(n<4){
                cout<<typeOfAccount[n]<<endl;
            }
            else{
                cout<<"Please Enter The Right Answer"<<endl;
            }
        }
        void DisplayAmount(float amount){
            cout<<"amount";
        }
        void BalanceAmount(float amount, char s){
            if(s=='+'){
                balanceAmount += amount;
            }
            else if(s=='-'){
                balanceAmount -= amount;
                DisplayAmount(balanceAmount);
            }
            else{
                cout<<"Wrong Command"<<endl;
            }
        }
        
};

int main(){
    char s;
    cout<<"This Is a BankAccount Program\nDo you want to open Account.\nif no then \n...press..'/'\n else press any keyboard"<<endl; 
    cin>>s;
    while (s!= '/'){
        cout<<"Press A to Open an Account"<<endl;
        cout<<"Press B to deposite an ammount"<<endl;
        cout<<"Press C to withdrawn ammount and check the balance"<<endl;
        cout<<"Press D To display the Name and Balance"<<endl;
        cout<<"Press E to exit"<<endl;
        char t;
        cin>>t;
        BankAccount person;
        switch(t){
            case t == 'A':
                //BankAccount person;
                string Name;
                cout<<"Please Enter The UserName:   ";
                cin>>Name;
                person.UserName(Name);
                unsigned short int n;
                cout<<"Your Account Number is generated please Enter Type Of Account"<<endl;
                cout<<"Command are 1 for Current"<<endl;
                cout<<"Command are 2 for Saving Account"<<endl;
                cout<<"Command are 3 for Hybrid"<<endl;
                cout<<"Command are 4 for Ultra-Saving"<<endl;
                cin>>n;
                person.TypeOfAccount(n);
                cout<<"Last Step add money please";
                cin>>person.balanceAmount;
                break;
            case t == 'B' :
                //BankAccount person;
                if(person.name=="-1"){
                    cout<<"please make account first";
                    break;
                }
                person.BalanceAmount(person.balanceAmount, '+');
                break;
                
            case t == 'C': 
                //BankAccount person;
                if(person.name == "-1"){
                    cout<<"please make account first";
                    break;
                }
                person.BalanceAmount(person.balanceAmount, '-');
                break;
            case t == 'D':
                if(person.name == "-1"){
                    cout<<"please make account first"
                    break;
                }
                cout<<person.name<<endl;
                cout<<person.balanceAmount<<endl;
                break;
            case t=='E':
                s = "/";
                break;
            default:
                cout<<"Please Enter Write Button";
        }
    }
    
    
    return 0;
}

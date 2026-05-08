#include<iostream>
using namespace std;

class ATM{
    private:
    int balance;

    public:
    void setBalance(int b){
        balance=b;
    }
// balance 
    int getBalance(){
        return balance;
    }
// withdraw method
    void withdraw(int amount){
        if(amount>balance){
            cout<<"insufficient balance"<<endl;
        }
        else{
            balance-=amount;
            cout<<"Amount withdrawn "<<amount<<endl;
        }
    }
};

int main(){
    ATM a;
    a.setBalance(50000);
    a.withdraw(500);
    cout<<"current balance:"<<a.getBalance()<<endl;
    return 0;
}

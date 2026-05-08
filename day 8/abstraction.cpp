#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    ATM(int balance){
        this->balance=balance;
    }
    void withdarwa(int amount){
        if(amount>balance){
            cout<<"insufficient balance"<<endl;
        }
        else{
        balance-=amount;
        cout<<"Amount withdrawn"<<amount<<endl;
        }
        cout<<"current balance:"<<balance<<endl;
    }
};
int main(){
    ATM a(50000);
    
    a.withdarwa(500);
    return 0;

}

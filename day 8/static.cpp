#include<iostream>
using namespace std;
class Employee{
    public:
    static int reg_no;
    Employee(){
        reg_no++;
    }
    static void show(){
        cout<<"Employee reg no is:"<<reg_no<<endl;
    }

};
int Employee :: reg_no=100;


int main(){
    Employee E1;
    Employee E2;
    Employee E3;
    Employee E4;
    Employee :: show();
    return 0;

}

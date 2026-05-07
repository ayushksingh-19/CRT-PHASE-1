#include <iostream>
using namespace std;

class player{
    public:
    string name;
    int age;

    void setname(string n){
        name=n;
    }
};
class cricketers:public player{
    public:
    int runs;
    void setrun(int r){
        runs=r;
    }
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"runs:"<<runs<<endl;
    }
};

int main(){
    int r;
    cin>>r;
    cricketers c1;
    c1.setname("virat");
    c1.setrun(r);
    c1.show();

    return 0;1

}
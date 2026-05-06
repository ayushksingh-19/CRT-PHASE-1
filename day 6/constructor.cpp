#include <iostream>
using namespace std;
class student{
    //data members
    public:
    string name;
    int rollno;
//default constructor
    student(){
        name="ayush";
        rollno=10;
    }
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
        cout<<"default constructor is called"<<endl;


    }
};

int main(){
    student s1;
    s1.show();
    s1.name;
    s1.rollno;
    return 0;

}
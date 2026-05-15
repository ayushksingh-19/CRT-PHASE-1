#include <iostream>
using namespace std;
class stack{
    private:
    int arr[100];
    int top;

    public:
    stack(){
        top=-1;
    }
    void push(int val){
        if(top<99){
            top++;
            arr[top]=val;

        }else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"stack underflow"<<endl;
        }
    }
    int data(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }
    int size(){
        if(top>=0){
            return ++top;
    }
    else{
        cout<<"stack is empty"<<endl;
    }
}
bool isempty(){
    if(top<=-1){
        return true;
    }
    else return false;
}
};
int main(){
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.data() << endl;
    cout << "Stack size: " << s.size() << endl;
    cout << "Is stack empty? " << (s.isempty() ? "Yes" : "No") << endl;

    s.pop();
    cout << "Top element after pop: " << s.data() << endl;
    cout << "Stack size after pop: " << s.size() << endl;

    return 0;
}
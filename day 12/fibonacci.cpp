#include<iostream>
using namespace std;

int fib(int n){
    if(n==0)
    return 1;

    if(n==1||n==2)
    return 1;
    else
    return(fib(n-1)+fib(n-2));
}

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<"fibonacci of "<<n<<":"<<fib(n);
    return 0;
}
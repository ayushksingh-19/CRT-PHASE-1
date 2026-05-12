#include<iostream>
using namespace std;
int fact(int m)
{
    if(m==0)
    return 1;

    return m*fact(m-1);
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<"factorial of "<<n<<":"<<fact(n);
    return 0;
}
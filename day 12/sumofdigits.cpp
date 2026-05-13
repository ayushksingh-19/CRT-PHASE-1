#include<iostream>
using namespace std;

int sumofdigit(int n)
{
    if(n==0)
    return 0;
    return(n%10 + sumofdigit(n/10));
}
int main()
{
    int num;
    cout<<"enter digit:";
    cin>>num;
    int result=sumofdigit(num);
    cout<<"sum of digit is:"<<result<<endl;
    return 0;
}
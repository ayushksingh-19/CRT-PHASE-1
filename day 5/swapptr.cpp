#include <iostream>
using namespace std;

void swapNumbers(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"before swap:"<<x<<" "<<y<<endl;
    swapNumbers(&x,&y);
    cout<<"after swap:"<<x<<" "<<y<<endl;

    return 0;
}

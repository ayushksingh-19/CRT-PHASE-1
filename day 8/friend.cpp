#include<iostream>
using namespace std;
class Area{
    private:
    int lenght;
    int width;
    public:
    void setsides(int l,int w){
        lenght=l;
        width=w;

        
    }
    friend void showArea(Area b);
};
void showArea(Area b){
    int area=b.lenght*b.width;
    cout<<"Area is:"<<area<<endl;
}
int main(){
    Area a;
    a.setsides(5,10);
    showArea(a);

    return 0;
}

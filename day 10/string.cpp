#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str1="hello";
    string str2="jecrc";
    cout<<str1<<" "<<str2<<endl;

    int n=str1.length();
    cout<<"length of the string:"<<n<<endl;
    //append

    cout<<"sfter appending string:"<<str1.append("students")<<endl;
    //enmptystring
    cout<<"is string empty:"<<str2.empty()<<endl;
    //conatenate string
    cout<<"after conatination of string:"<<str1+str2<<endl;
    cout<<"after concatination of string is 2:"<<str1<<endl;
    //pushback
    str2.append("university");
    cout<<"after push_back:"<<str2<<endl;
    //popback
    str2.pop_back();
    cout<<"after pop back:"<<str2<<endl;
    //find
    int index=str1.find("ello");
    cout<<"index of ello is:"<<index<<endl;
    //swap
    swap(str1,str2);
    cout<<"after swapping str1 and str2:"<<endl;
    cout<<"str1:"<<str1<<endl;
    cout<<"str2:"<<str2<<endl;
    //substring
    string substr=str2.substr(5,6);//5 is index nd 6 is total length of substr
    cout<<"substring of str2:"<<substr<<endl;
    //getline()
    string str3;
    getline(cin,str3);
    cout<<"you entered:"<<str3<<endl;

    return 0;
}

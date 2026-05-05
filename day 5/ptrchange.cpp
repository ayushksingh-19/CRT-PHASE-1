#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    cout << "Before change: " << a << endl;
    cout << "Address of a: " << ptr << endl;
    *ptr = 20;
    cout << "After change: " << a << endl;

    return 0;
}

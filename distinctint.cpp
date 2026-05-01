#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            cout << "Largest number is " << a;
        } else {
            cout << "Largest number is " << c;
        }
    } else {
        if (b > c) {
            cout << "Largest number is " << b;
        } else {
            cout << "Largest number is " << c;
        }
    }

    return 0;
}

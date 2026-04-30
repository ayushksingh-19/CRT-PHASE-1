#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Using third variable
    int x = a, y = b;
    int temp = x;
    x = y;
    y = temp;

    cout << "Using third variable: x = " << x << ", y = " << y << endl;

    // Without using third variable
    int p = a, q = b;
    p = p + q;
    q = p - q;
    p = p - q;

    cout << "Without third variable: p = " << p << ", q = " << q << endl;

    return 0;
}

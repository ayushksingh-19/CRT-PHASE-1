#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int maxNum = (a > b) ? a : b;
    cout << "Maximum number is " << maxNum;

    return 0;
}

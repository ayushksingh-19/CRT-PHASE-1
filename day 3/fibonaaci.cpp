#include <iostream>
using namespace std;

int main() {
    int n;
    int first = 0, second = 1, next;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a number greater than or equal to 1.";
        return 0;
    }

    cout << "Fibonacci sequence between 1 and " << n << " is: ";

    while (second <= n) {
        cout << second << " ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

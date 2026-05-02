#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;

    cout << "Enter an integer: ";
    cin >> n;

    cout << "Numbers between 1 and " << n << " divisible by 2 are:" << endl;

    while (i <= n) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}

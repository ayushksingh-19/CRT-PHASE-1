#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    while (true) {
        cout << "Enter a positive integer: ";
        cin >> num;

        if (num < 0) {
            break;
        }

        sum += num;
    }

    cout << "Final sum = " << sum << endl;

    return 0;
}

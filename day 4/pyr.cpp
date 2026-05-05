#include <iostream>
using namespace std;

int main() {
    int i, j, k, rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        if (i == 3 || i == 4) {
            cout << " ";
        } else if (i == 5) {
            cout << "  ";
        }

        for (k = 1; k <= i; k++) {
            cout << " *";
        }

        cout << endl;
    }

    return 0;
}

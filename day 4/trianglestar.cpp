#include <iostream>
using namespace std;

int main() {
    int i, j, rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (i = 1; i <= rows; i++) {
        int spaces = rows - i;

        if (i == 1 || i == 2) {
            spaces = rows - i;
        } else if (i == 3 || i == 4) {
            spaces = rows - i + 1;
        } else if (i == 5) {
            spaces = rows - i + 2;
        } else {
            spaces = rows - i;
        }

        for (j = 1; j <= spaces; j++) {
            cout << " ";
        }
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

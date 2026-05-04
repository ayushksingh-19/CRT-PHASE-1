#include <iostream>
using namespace std;

int main() {
    int i, j, rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            if (i == 1 || i == rows || j == 1 || j == rows) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

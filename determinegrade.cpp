#include <iostream>
using namespace std;

int main() {
    float percentage;

    cout << "Enter student percentage (0 to 100): ";
    cin >> percentage;

    if (percentage < 0 || percentage > 100) {
        cout << "Invalid input" << endl;
    } else if (percentage >= 90) {
        cout << "Grade A" << endl;
    } else if (percentage >= 80) {
        cout << "Grade B" << endl;
    } else if (percentage >= 70) {
        cout << "Grade C" << endl;
    } else if (percentage >= 60) {
        cout << "Grade D" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}

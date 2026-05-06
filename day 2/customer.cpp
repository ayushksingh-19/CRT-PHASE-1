#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Customer Support Menu" << endl;
    cout << "1. Support" << endl;
    cout << "2. Billing" << endl;
    cout << "3. Tech Support" << endl;
    cout << "4. Speak to Agent" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Support." << endl;
            break;
        case 2:
            cout << "You selected Billing." << endl;
            break;
        case 3:
            cout << "You selected Tech Support." << endl;
            break;
        case 4:
            cout << "You selected Speak to Agent." << endl;
            break;
        default:
            cout << "Invalid response." << endl;
    }

    return 0;
}

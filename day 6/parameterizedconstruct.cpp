#include <iostream>
using namespace std;

class cricketers {
public:
    string name;
    int runs;
    double avg;

    // parameterized constructor
    cricketers(string n, int r, double avg) {
        name = n;
        runs = r;
        this->avg = avg;
    }

    void show() {
        cout << "name: " << name << endl;
        cout << "runs: " << runs << endl;
        cout << "average: " << avg << endl;
    }
};

int main() {
    cricketers c1("Virat", 13000, 60);
    cricketers c2("Rohit", 11000, 50);

    c1.show();
    cout << endl;
    c2.show();

    return 0;
}

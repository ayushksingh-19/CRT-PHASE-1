#include <iostream>
using namespace std;

class player {
public:
    string name;
    int age;

    void setPlayer(string n, int a) {
        name = n;
        age = a;
    }
};

class cricketer {
public:
    int runs;

    void setRuns(int r) {
        runs = r;
    }
};

class indianCricketer : public player, public cricketer {
public:
    string state;

    void setState(string s) {
        state = s;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Runs: " << runs << endl;
        cout << "State: " << state << endl;
    }
};

int main() {
    int age, runs;
    string state;
    cin >> age >> runs >> state;

    indianCricketer c1;
    c1.setPlayer("Virat", age);
    c1.setRuns(runs);
    c1.setState(state);
    c1.show();

    return 0;
}

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

class cricketer : public player {
public:
    int runs;

    void setRuns(int r) {
        runs = r;
    }
};

class student {
public:
    string school;

    void setSchool(string s) {
        school = s;
    }
};

class indianCricketer : public cricketer, public student {
public:
    string state;

    void setState(string s) {
        state = s;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Runs: " << runs << endl;
        cout << "School: " << school << endl;
        cout << "State: " << state << endl;
    }
};

int main() {
    indianCricketer c1;

    c1.setPlayer("Virat", 35);
    c1.setRuns(25000);
    c1.setSchool("Delhi Public School");
    c1.setState("Delhi");
    c1.show();

    return 0;
}

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

class batsman : public player {
public:
    int runs;

    void setRuns(int r) {
        runs = r;
    }

    void showBatsman() {
        cout << "Batsman Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Runs: " << runs << endl;
    }
};

class bowler : public player {
public:
    int wickets;

    void setWickets(int w) {
        wickets = w;
    }

    void showBowler() {
        cout << "Bowler Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Wickets: " << wickets << endl;
    }
};

int main() {
    batsman b1;
    bowler b2;

    b1.setPlayer("Virat", 35);
    b1.setRuns(25000);

    b2.setPlayer("Bumrah", 30);
    b2.setWickets(350);

    b1.showBatsman();
    cout << endl;
    b2.showBowler();

    return 0;
}

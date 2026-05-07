#include <iostream>
#include <string>

using namespace std;

class Cricketer {
private:
    string name;
    int runs;

public:
    Cricketer(string playerName, int playerRuns) {
        name = playerName;
        runs = playerRuns;
    }

    // Copy constructor
    Cricketer(const Cricketer& other) {
        name = other.name;
        runs = other.runs;
    }

    void display() const {
        cout << "Cricketer Name: " << name << endl;
        cout << "Runs Scored   : " << runs << endl;
    }
};

int main() {
    Cricketer player1("Virat Kohli", 14000);

    
    Cricketer player2 = player1;

    cout << "Original Object" << endl;
    player1.display();

    cout << "\nCopied Object" << endl;
    player2.display();

    return 0;
}

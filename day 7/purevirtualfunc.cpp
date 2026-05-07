#include <iostream>
using namespace std;

class player {
public:
    virtual void show() = 0;
};

class cricketer : public player {
public:
    void show() override {
        cout << "Cricketer class implementing pure virtual function" << endl;
    }
};

class footballer : public player {
public:
    void show() override {
        cout << "Footballer class implementing pure virtual function" << endl;
    }
};

int main() {
    player *p;

    cricketer c1;
    footballer f1;

    p = &c1;
    p->show();

    p = &f1;
    p->show();

    return 0;
}

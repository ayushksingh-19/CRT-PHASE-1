#include <iostream>
using namespace std;

class player {
public:
    virtual void show(){
        cout << "player class show function" << endl;
    }
};

class cricketers : public player {
public:
    void show() override {
        cout << "cricketers class show function" << endl;
    }
};

int main() {
    player *p;
    cricketers c1;

    p = &c1;
    p->show();

    return 0;
}

#include <iostream>
using namespace std;

int coffeeVolume(int shots) {
    return shots * 30;
}

int main() {
    int shots;
    cin >> shots;
    cout << "Coffee volume = " << coffeeVolume(shots) << " ml" << endl;
    return 0;
}

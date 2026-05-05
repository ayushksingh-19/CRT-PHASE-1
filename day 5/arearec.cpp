#include <iostream>
using namespace std;

int areaRectangle(int length, int width) {
    return length * width;
}

int main() {
    int length, width;
    cin >> length >> width;
    cout << "Area of rectangle = " << areaRectangle(length, width) << endl;
    return 0;
}

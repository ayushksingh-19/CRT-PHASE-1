#include <iostream>
#include <string>
using namespace std;

class Area {
private:
    double areaValue;
    string shapeName;

public:
    Area() {
        shapeName = "No shape selected";
        areaValue = 0;
    }

    Area(int side) {
        shapeName = "Square";
        areaValue = side * side;
    }

    Area(int length, int breadth) {
        shapeName = "Rectangle";
        areaValue = length * breadth;
    }

    Area(double radius) {
        shapeName = "Circle";
        areaValue = 3.14159 * radius * radius;
    }

    void show() {
        cout << "Shape: " << shapeName << endl;
        cout << "Area: " << areaValue << endl;
    }
};

int main() {
    int choice;
    Area a;

    cout << "Find area of:" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Circle" << endl;
    cout << "4. No area" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int side;
        cout << "Enter side of square: ";
        cin >> side;
        a = Area(side);
    } else if (choice == 2) {
        int length, breadth;
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter breadth of rectangle: ";
        cin >> breadth;
        a = Area(length, breadth);
    } else if (choice == 3) {
        double radius;
        cout << "Enter radius of circle: ";
        cin >> radius;
        a = Area(radius);
    } else {
        a = Area();
    }

    a.show();

    return 0;
}

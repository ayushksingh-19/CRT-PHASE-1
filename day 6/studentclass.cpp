#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string studentName, int studentMarks) {
        name = studentName;
        marks = studentMarks;
    }

    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Ayush", 95);
    Student s2("Aryan", 92);
    Student s3("Karan", 78);
    Student s4("bhanu",89);

    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}

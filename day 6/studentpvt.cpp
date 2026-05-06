#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;
    int rollNo;
    int registrationNo;
    static int nextRegistrationNo;

public:
    Student(string studentName, int studentMarks, int studentRollNo) {
        name = studentName;
        marks = studentMarks;
        rollNo = studentRollNo;
        registrationNo = nextRegistrationNo++;
    }

    void display() {
        cout << "Name: " << name
             << ", Marks: " << marks
             << ", Roll No: " << rollNo
             << ", Registration No: " << registrationNo << endl;
    }
};

int Student::nextRegistrationNo = 1001;

int main() {
    Student s1("Ayush", 95, 1);
    Student s2("Aryan", 92, 2);
    Student s3("Karan", 78, 3);
    Student s4("Bhanu", 89, 4);
    Student s5("archit", 89, 5);


    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();

    return 0;
}

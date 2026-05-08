#include <iostream>
#include <string>
using namespace std;

class College {
protected:
    string name;
    int age;

public:
    College(string n, int a) : name(n), age(a) {}

    virtual void category() {
        cout << name << " belongs to the College class." << endl;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual ~College() {}
};

class Student : public College {
private:
    string course;
    int rollNo;

public:
    Student(string n, int a, string c, int r)
        : College(n, a), course(c), rollNo(r) {}

    void category() override {
        cout << name << " belongs to the Student category." << endl;
    }

    void display() override {
        College::display();
        cout << "Course: " << course << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

class Teacher : public College {
private:
    string dept;
    int employeeId;
    double salary;

public:
    Teacher(string n, int a, string d, int id, double s)
        : College(n, a), dept(d), employeeId(id), salary(s) {}

    void category() override {
        cout << name << " belongs to the Teacher category." << endl;
    }

    void display() override {
        College::display();
        cout << "Department: " << dept << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    College c1("Rahul", 45);
    Student s1("Aman", 20, "BCA", 101);
    Teacher t1("Meena", 38, "Computer Science", 5001, 55000);

    College *ptr;

    ptr = &c1;
    ptr->display();
    ptr->category();
    cout << endl;

    ptr = &s1;
    ptr->display();
    ptr->category();
    cout << endl;

    ptr = &t1;
    ptr->display();
    ptr->category();

    return 0;
}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string regNo;
    string email;
    string phoneNumber;
    char grade;

public:
    Student() {
        name = "";
        rollNo = 0;
        regNo = "";
        email = "";
        phoneNumber = "";
        grade = '\0';
    }

    Student(string n, int r, string reg, string e, string phone, char g) {
        name = n;
        rollNo = r;
        regNo = reg;
        email = e;
        phoneNumber = phone;
        grade = g;
    }

    void setDetails(string n, int r, string reg, string e, string phone, char g) {
        name = n;
        rollNo = r;
        regNo = reg;
        email = e;
        phoneNumber = phone;
        grade = g;
    }

    void displayDetails() const {
        cout << "\nStudent Details" << endl;
        cout << "Name        : " << name << endl;
        cout << "Roll No     : " << rollNo << endl;
        cout << "Reg No      : " << regNo << endl;
        cout << "Email       : " << email << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Grade       : " << grade << endl;
    }
};

int main() {
    vector<Student> students;

    Student s1;
    s1.setDetails("Aarav Sharma", 101, "REG2026001", "aarav@gmail.com", "9876543210", 'A');
    students.push_back(s1);

    Student s2;
    s2.setDetails("Diya Patel", 102, "REG2026002", "diya@gmail.com", "9876501234", 'B');
    students.push_back(s2);

    Student s3("Rohan Kumar", 103, "REG2026003", "rohan@gmail.com", "9876512345", 'A');
    Student s4("Meera Singh", 104, "REG2026004", "meera@gmail.com", "9876523456", 'A');
    Student s5("Karthik Rao", 105, "REG2026005", "karthik@gmail.com", "9876534567", 'B');

    students.push_back(s3);
    students.push_back(s4);
    students.push_back(s5);

    cout << "===== Student Management System =====" << endl;
    for (size_t i = 0; i < students.size(); i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        students[i].displayDetails();
    }

    return 0;
}

#include<iostream>
using namespace std;

class Student {
    string name;
    int age;
    float marks;

public:
    Student(string name, int age, float marks) {
        this->name = name;
        this->age = age;
        this->marks = marks;
    }

    string getStudentInfo() {
        return "\nName: " + name + "\nAge: " + to_string(age) + "\nMarks: " + to_string(marks);
    }
};

class Employee {
    string department;

public:
    Employee(string department) {
        this->department = department;
    }

    string getEmployeeInfo() {
        return "\nDepartment: " + department;
    }
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string name, int age, float marks, string department) : Student(name, age, marks), Employee(department) {}

    string getTAInfo() {
        return getStudentInfo() + getEmployeeInfo();
    }
};

int main() {
    TeachingAssistant ta("Anil", 24, 87.32f, "Computer Science");
    cout << ta.getTAInfo() << endl;

    return 0;
}
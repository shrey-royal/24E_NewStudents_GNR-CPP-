#include<iostream>
using namespace std;

class Person {
    string name;
    int age;

    
protected:
    string getPersonDetails() {
        return "\nName: " + name + "\nAge: " + to_string(age);
    }

public:
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person {
    float marks;

public:
    Student(string name, int age, float marks) : Person(name, age) {
        this->marks = marks;
    }

    string getStudentDetails() {
        return getPersonDetails() + "\nMarks: " + to_string(marks);
    }
};

class Employee : public Person {
    string department;

public:
    Employee(string name, int age, string department) : Person(name, age) {
        this->department = department;
    }

    string getEmployeeDetails() {
        return getPersonDetails() + "\nDepartment: " + department;
    }
};

int main() {
    Student s("Ramesh", 18, 78.6f);
    Employee e("Suresh", 30, "Management");

    cout << s.getStudentDetails() << endl;
    cout << e.getEmployeeDetails() << endl;

    return 0;
}
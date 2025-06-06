#include<iostream>
using namespace std;

class Person {
    string name;
    int age;

public:
    Person() : name(""), age(0) {
        cout << "Person() called!" << endl;
    }

    Person(string name, int age) : name(name), age(age) {
        cout << "Person(string, int) called!" << endl;
    }

    string getName() {
        return name;
    }
    
    int getAge() {
        return age;
    }
};

class Teacher : public Person {
    string subject;

public:
    Teacher() : Person(), subject("") {
        cout << "Teacher() called!" << endl;
    }

    Teacher(string name, int age, string subject) : Person(name, age) {
        this->subject = subject;
        cout << "Teacher(string, int, string) called!" << endl;
    }

    string getSubject() {
        return subject;
    }
};

class Student : public Teacher {
    int grade;

public:
    Student() : Teacher(), grade(0) {
        cout << "Student() called!" << endl;
    }

    Student(string name, int age, string subject, int grade) : Teacher(name, age, subject) {
        this->grade = grade;
        cout << "Student(string, int, string, int) called!" << endl;
    }

    int getGrade() {
        return grade;
    }

    void getStudentDetails() {
        cout << "Name: " << getName() << "\nAge: " << getAge() << "\nSubject: " << getSubject() << "\nGrade: " << getGrade() << endl;
    }
};

int main() {
    Student s1;
    s1.getStudentDetails();

    Student s2("Dev Patel", 19, "Physics", 10);
    s2.getStudentDetails();

    return 0;
}

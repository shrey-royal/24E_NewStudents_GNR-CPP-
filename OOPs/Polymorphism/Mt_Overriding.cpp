#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    virtual void displayInfo() {
        cout << "Person Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
public:
    double salary;

    Employee(string name, int age, double salary) : Person(name, age) {
        this->salary = salary;
    }

    void displayInfo() override{
        cout << "Employee Name: " << name << ", Age: " << age << ", Salary: Rs." << salary << endl;
    }
};

class Manager : public Employee {
public:
    string department;

    Manager(string name, int age, double salary, string department) : Employee(name, age, salary) {
        this->department = department;
    }

    void displayInfo() override {
        cout << "Manager Name: " << name << ", Age: " << age << ", Salary: Rs." << salary << ", Deparment: " << department << endl;
    }
};

int main() {
    // Manager manager("john", 23, 12000, "Engineering");
    // manager.displayInfo();

    // Employee employee("jane", 22, 10000);
    // employee.displayInfo();

    // Person person("jacob", 30);
    // person.displayInfo();

    Person *person;
    person = new Manager("john", 23, 12000, "Engineering");
    person->displayInfo();
    person = new Employee("jane", 20, 20000);
    person->displayInfo();

    // person = &manager;
    // person->displayInfo();

    // person = &employee;
    // person->displayInfo();


    return 0;
}

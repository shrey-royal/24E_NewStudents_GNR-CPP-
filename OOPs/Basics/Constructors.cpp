#include<iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    double salary;

public:
    //Default Constructor
    Employee() {
        id = 0;
        name = "";
        salary = 0.0;
        cout << "Default constructor called!" << endl;
    }

    //Parameterized Constructor
    Employee(int id, string name, double salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
        cout << "Parameterized constructor called!" << endl;
    }

    void getEmployeeDetails() {
        cout << "Id: " << id << "\nName: " << name << "\nSalary: " << salary << endl;
    }
};


int main() {
    Employee e; //default constructor will be called
    Employee e1(101, "Jayveer", 340000);    //parameterized constructor will be called

    e.getEmployeeDetails();
    cout << endl;
    e1.getEmployeeDetails();

    return 0;
}


/*
Constructor: A special method that invokes(call) automatically when the object is created.

-> Constructors are used primarily to initialize the objects.

There are 3 types of a constructor:
    1. Default Constructor (no arguments)
    2. Parameterized Constructor (with arguments)
    3. Copy Constructor

Rules to define a constructor:
    1. Always the name of the constructor will be same as the class name.
    2. Constructors do not have any return type.
*/
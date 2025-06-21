/*
// Getters - Accessors (they access the value) 'get'
dataType getVariableName() const {
    retrurn variableName;
}

// Setters - Mutators (they update the value) 'set'
void setVariableName(dataType newValue) const {
    variableName = newValue;
}
*/

#include <iostream>
using namespace std;

class Employee {
private:
    string dept;
    int salary;

public:
    Employee() {
        salary = 0;
        dept = "Accounts";
    }

    //setter
    void setSalary(int s) {
        if (s >= 0) {
            salary = s;
        }
    }

    //getter
    int getSalary() {
        return salary;
    }

    void setDepartment(string newDepartment) {
        if (newDepartment != "") {
            dept = newDepartment;
        }
    }

    string getDepartment() {
        return dept;
    }

};


int main() {
    Employee obj;

    // obj.setSalary(100000);

    cout << "Salary is: " << obj.getSalary() << endl;
    obj.setSalary(100000);
    cout << "Salary is: " << obj.getSalary() << endl;

    // obj.setDepartment("");
    cout << "\nDepartment: " << obj.getDepartment();

    return 0;
}
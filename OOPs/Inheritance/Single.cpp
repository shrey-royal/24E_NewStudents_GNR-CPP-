#include<iostream>
using namespace std;

class Parent {
public:
    int data_p;

    Parent(int data_p) : data_p(data_p) {
        cout << "Parent constructor called" << endl;
    }
};

class Child : public Parent {
public:
    int data_c;

    Child(int data_p, int data_c) : Parent(data_p), data_c(data_c) {
        cout << "Child constructor called" << endl;
    }
};

int main() {
    Child c(23, 2);

    // c.data_c = 23;
    // c.data_p = 2;

    cout << "Child Data: " << c.data_c << endl;
    cout << "Parent Data: " << c.data_p << endl;

    return 0;
}

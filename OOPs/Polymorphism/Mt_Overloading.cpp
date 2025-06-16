#include <iostream>
#include <stdbool.h>
using namespace std;

class Calculator {
private:
    int a, b;

public:
    // constructor overloading
    Calculator() {
        a = 0;
        b = 0;
    }

    Calculator(int a, int b) {
        this->a = a;
        this->b = b;
    }

    // method overloading
    // 1. by changing the number of parameters
    int add(int a, int b) {
        return a + b;
    }

    void add() {
        cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
    }

    void greet(bool flag) {
        cout << "Hello, How are you!" << endl;
    }

    void greet() {
        cout << "Hii, What's up?" << endl;
    }

    // 2. By changing the data type of parameters
    void divide(int a, int b) {
        cout << a/b << endl;
    }

    void divide(float a, int b) {
        cout << a/b << endl;
    }

    // 3. By changing the sequence of parameters
    void mul(int a, float b) {
        cout << a*b << endl;
    }

    void mul(float a, int b) {
        cout << a*b << endl;
    }
};

int main() {
    Calculator c(2, 3);

    c.add();

    int x = 67, y = 1;
    cout << "Addition of " << x << " and " << y << " is " << c.add(x, y) << endl;

    // c.greet();
    // c.greet(true);

    // c.divide(30, 3);
    // c.divide(30.0f, 4);

    c.mul(2, 6.64f);
    c.mul(6.64f, 2);

    return 0;
}
/*
Task:
create method called operation() using method overloading (log, exp)
*/
#include <iostream>
using namespace std;

class A {
public:
    int a_val;
    
    A(int val) {
        a_val = val;
        cout << "A's Constructor is called." << endl;
    }

    void showA() {
        cout << "A_val: " << a_val << endl;
    }
};

class B : public A {
public:
    int b_val;
    
    B(int val_a, int val_b) : A(val_a) {
        b_val = val_b;
        cout << "B's Constructor is called." << endl;
    }

    void showB() {
        cout << "B_val: " << b_val << endl;
    }
};

class C : public A {
public:
    int c_val;
    
    C(int val_a, int val_c) : A(val_a) {
        c_val = val_c;
        cout << "C's Constructor is called." << endl;
    }

    void showC() {
        cout << "C_val: " << c_val << endl;
    }
};

class D : public B, public C {
public:
    int d_val;
    
    D(int val_a, int val_b, int val_c, int val_d) : B(val_a, val_b), C(val_a, val_c) {
        d_val = val_d;
        cout << "D's Constructor is called." << endl;
    }

    void showD() {
        cout << "D_val: " << d_val << endl;
    }
};

int main() {
    cout << "--- Diamond Problem ---" << endl;
    D obj(10, 20, 30, 40);

    // obj.showA();     // ambigious error
    // obj.showB();
    // obj.showC();
    // obj.showD();

    // obj.B::showA();
    // obj.C::showA();

    // cout << obj.a_val << endl;
    cout << obj.b_val << endl;
    cout << obj.c_val << endl;
    cout << obj.d_val << endl;

    cout << obj.B::a_val << endl;
    cout << obj.C::a_val << endl;


    return 0;
}
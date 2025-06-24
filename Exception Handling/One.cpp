#include<iostream>
#include<vector>
using namespace std;

void division(int a, int b) {
    if (b == 0) {
        // cout << "inf" << endl;
        throw invalid_argument("Trying to divide by zero...");
    } else {
        cout << "Result is " << a/b << endl;
    }
}

int main() {
    int a, b;
    string str = "Hello";
    vector<int> v = {1, 2, 1, 2, 1, 1, 2, 1, 1, 2};

    cout << "Before Exception" << endl;
    cout << "Enter a & b: ";
    cin >> a >> b;

    try {
        cout << "In try" << endl;
        cout << str.at(4) << endl;  //out_of_range / logic_error
        division(a, b);             //invalid_argument
        v.reserve(1000000000);   //bad_alloc
        cout << "End try" << endl;
    } catch(const invalid_argument& e) {
        cerr << "Error -> " << e.what() << endl;
        // cerr << "Divide by Zero Exception..." << endl;
    } catch(const out_of_range& e) {
        cerr << "Error -> " << e.what() << endl;
    } catch(...) {
        cerr << "Error -> Exception Occurred" << endl;
    }
    

    cout << "After Exception" << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    // int data;
    // cout << "\nEnter any data: ";
    // cin >> data;
    // cout << "data: " << data << endl;
    
    // int a, b;
    // cout << "Enter a, b: ";
    // cin >> a >> b;
    // cout << "A = " << a << ", B = " << b << endl;

    // String datatype (Derived)
    string name;
    // char name[10];  // last char(name[9]) must be null

    cout << "Enter your name: ";
    // cin >> name;    // one word
    getline(cin, name); // one line (until new line)
    // cin.getline(name, 10);   // works with the char array
    // cout << "Your name is " << name << endl;

    // int i=0;
    // while(name[i] != '\0') {
    //     cout << name[i] << ", ";
    //     i++;
    // }
    // cout << "\b\b " << endl;

    for(char c : name) {    //advanced for loop // for each loop
        cout << "'" << c << "', ";
    }
    cout << "\b\b \n";

    cout << name << "'s length is " << name.length();

    return 0;
}
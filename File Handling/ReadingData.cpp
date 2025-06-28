#include<iostream>
#include<fstream>   //ifstream + ofstream
using namespace std;

int main() {
    string fileName;

    cout << "Enter file name: ";
    cin >> fileName;
    fileName.append(".txt");

    // creating a file for writing
    fstream fin;
    // ifstream fin(fileName);
    
    fin.open(fileName, ios::in);

    if(!fin.is_open()) {
        cout << "Error opening " << fileName << " for reading\n";
    } else {
        string data;

        // line by line
        // while(getline(fin, data)) {
        //     cout << data << endl;
        // }

        // word by word
        // while(fin >> data) {
        //     cout << data << endl;
        // }

        // scanning ints
        int num;
        while(fin >> num) {
            cout << num << endl;
        }
        cout << "\n--- EOF ---\n";
        fin.close();   // close the file stream
    }

    return 0;
}
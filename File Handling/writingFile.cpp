#include<iostream>
#include<fstream>   //ifstream + ofstream
using namespace std;

int main() {
    string fileName;

    cout << "Enter file name: ";
    cin >> fileName;
    fileName.append(".txt");

    // creating a file for writing
    fstream fout;
    // ofstream fout(fileName);
    
    fout.open(fileName, ios::out);

    if(!fout.is_open()) {
        cout << "Error opening " << fileName << " for writing\n";
    } else {
        string line;

        cout << "Enter data: ";
        getline(cin, line);
        while(line != "~") {
            // fout << line << endl;
            fout.write(line.c_str(), line.size());
            fout << endl;
            getline(cin, line);
        }
        cout << "Data written into " << fileName << " successfully!" << endl;
        fout.close();   //close the file stream
    }

    return 0;
}
#include<iostream>
using namespace std;

class User {
private:
    static int userCount;
    int id;

public:
    User() {
        this->id = 0;
        userCount++;
        cout << "User created. Total Users: " << userCount << endl;
    }

    
    User(int id) {
        this->id = id;
        userCount++;
        cout << "User created. Total Users: " << userCount << endl;
    }

    static void showUserCount() {
        cout << "Current number of users: " << userCount << endl;
    }

    void getUserDetails() {
        cout << "Id: " << this->id << endl;
    }
};

//static member initialization
int User::userCount = 0;  // :: -> Scope Resolution Operator

int main() {
    User u1;
    User u2(2);

    // u1.getUserDetails();
    // u2.getUserDetails();

    User::showUserCount();

    return 0;
}

/*
Tasks:

-> Problem 1: Count Number of Objects Created

Problem Statement:
Create a class `Counter` that uses a constructor to increment a static variable each time an object is created. Add a static function to display the total number of objects created.

Requirements:

* Use a static data member to track the count.
* Display the count from a static method.

-> Problem 2: Student ID Auto-Generation

Problem Statement:
Create a class `Student` with a constructor that automatically assigns a unique roll number to each student object starting from 1001, using a static variable.

Requirements:

* Use a static variable to generate and store the next available ID.
* Constructor assigns and prints the ID during object creation.

-> Problem 3: Track Active User Sessions

Problem Statement:
Design a class `UserSession` that tracks how many active sessions (objects) currently exist using constructors and destructors. Use a static variable to track count.

Requirements:

* Increment count in constructor.
* Decrement count in destructor.
* Show count with a static method.

-> Problem 4: Bank Account Creation Tracker

Problem Statement:
Create a class `BankAccount` where each object represents a new account. Use a static variable to track how many accounts have been created. Display account creation count every time a new object is made.

Requirements:

* Use a constructor to increment the static count.
* Show account number and count during creation.

-> Problem 5: Track Book Inventory

Problem Statement:
Create a class `Book` that contains the book title and uses a static variable to track the total number of books created. Each time a new book is added (via constructor), increment the static count.

Requirements:

* Display book title and current total number of books.
* Add a static function to get total inventory.

*/
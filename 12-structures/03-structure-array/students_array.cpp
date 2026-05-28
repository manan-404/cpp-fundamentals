#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    int marks;
};

int main() {
    const int SIZE = 3;
    Student students[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Enter roll number: ";
        cin >> students[i].rollNumber;
        cout << "Enter marks: ";
        cin >> students[i].marks;
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Name: " << students[i].name 
             << ", Roll Number: " << students[i].rollNumber
             << ", Marks: " << students[i].marks << endl;
    }

    return 0;
}
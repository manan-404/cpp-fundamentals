#include <iostream>
#include <string>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    string name;
    int rollNumber;
    Date dob; // nested structure
};

int main() {
    Student s;

    cout << "Enter student name: ";
    getline(cin, s.name);
    cout << "Enter roll number: ";
    cin >> s.rollNumber;
    cout << "Enter DOB (day month year): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;

    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << "\nRoll Number: " << s.rollNumber
         << "\nDate of Birth: " << s.dob.day << "/" << s.dob.month << "/" << s.dob.year;

    return 0;
}
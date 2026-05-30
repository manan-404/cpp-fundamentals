#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

void inputStudent(Student &s) {
    cin.ignore();
    cout << "Enter student name: ";
    getline(cin, s.name);
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter marks: ";
    cin >> s.marks;
}

void displayStudent(const Student &s) {
    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << "\nRoll: " << s.roll
         << "\nMarks: " << s.marks << endl;
}

int main() {
    Student s1;
    inputStudent(s1);
    displayStudent(s1);
    return 0;
}
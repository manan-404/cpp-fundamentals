#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    int rollNumber;
};

void displayStudent(Student s) {
    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
}

int main() {
    Student s1;

    cout << "Enter student name: ";
    getline(cin, s1.name);

    cout << "Enter student age: ";
    cin >> s1.age;

    cout << "Enter student roll number: ";
    cin >> s1.rollNumber;

    displayStudent(s1);

    return 0;
}
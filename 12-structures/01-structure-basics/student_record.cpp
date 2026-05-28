#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    int rollNumber;
};

int main() {
    Student s1;

    cout << "Enter student name: ";
    getline(cin, s1.name);

    cout << "Enter student age: ";
    cin >> s1.age;

    cout << "Enter student roll number: ";
    cin >> s1.rollNumber;

    cout << "\nStudent Details:\n";
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll Number: " << s1.rollNumber << endl;

    return 0;
}
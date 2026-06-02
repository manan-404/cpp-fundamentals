#include <iostream>
#include <string>
using namespace std;

struct Address {
    string city;
    string street;
    int zip;
};

struct Student {
    string name;
    int roll;
    Address addr; // nested structure
};

int main() {
    Student s1;
    cout << "Enter student name: ";
    getline(cin, s1.name);
    cout << "Enter roll number: ";
    cin >> s1.roll;
    cin.ignore();
    cout << "Enter city: ";
    getline(cin, s1.addr.city);
    cout << "Enter street: ";
    getline(cin, s1.addr.street);
    cout << "Enter ZIP code: ";
    cin >> s1.addr.zip;

    cout << "\nStudent Details:\n";
    cout << "Name: " << s1.name << ", Roll: " << s1.roll << endl;
    cout << "Address: " << s1.addr.street << ", " << s1.addr.city
         << " - " << s1.addr.zip << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    string name;
    int id;
    Date joiningDate;
    float salary;
};

int main() {
    const int SIZE = 2;
    Employee emp[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cin.ignore();
        cout << "Enter employee name: ";
        getline(cin, emp[i].name);
        cout << "Enter ID: ";
        cin >> emp[i].id;
        cout << "Enter joining date (day month year): ";
        cin >> emp[i].joiningDate.day >> emp[i].joiningDate.month >> emp[i].joiningDate.year;
        cout << "Enter salary: ";
        cin >> emp[i].salary;
    }

    cout << "\nEmployee Records:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << emp[i].name << ", ID: " << emp[i].id
             << ", Joining Date: " << emp[i].joiningDate.day << "/" 
             << emp[i].joiningDate.month << "/" 
             << emp[i].joiningDate.year
             << ", Salary: " << emp[i].salary << endl;
    }

    return 0;
}
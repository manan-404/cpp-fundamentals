#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

int main() {
    const int SIZE = 3;
    Employee emp[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cin.ignore();
        cout << "Enter name for employee " << i + 1 << ": ";
        getline(cin, emp[i].name);
        cout << "Enter employee ID: ";
        cin >> emp[i].id;
        cout << "Enter salary: ";
        cin >> emp[i].salary;
    }

    // Sort employees by salary ascending
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (emp[i].salary > emp[j].salary) {
                Employee temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    cout << "\nSorted Employee List by Salary:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Name: " << emp[i].name 
             << ", ID: " << emp[i].id
             << ", Salary: " << emp[i].salary << endl;
    }

    return 0;
}
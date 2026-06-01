#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

void inputEmployee(Employee *e) {
    cin.ignore();
    cout << "Enter employee name: ";
    getline(cin, e->name);
    cout << "Enter ID: ";
    cin >> e->id;
    cout << "Enter salary: ";
    cin >> e->salary;
}

void displayEmployee(const Employee *e) {
    cout << "\nEmployee Details:\n";
    cout << "Name: " << e->name << ", ID: " << e->id
         << ", Salary: " << e->salary << endl;
}

float annualSalary(const Employee *e) {
    return e->salary * 12;
}

int main() {
    Employee emp;
    inputEmployee(&emp);
    displayEmployee(&emp);
    cout << "Annual Salary: " << annualSalary(&emp) << endl;
    return 0;
}
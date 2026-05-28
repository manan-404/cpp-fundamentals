#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

void increaseSalary(Employee &e, float increment) {
    e.salary += increment;
}

void displayEmployee(Employee e) {
    cout << "\nEmployee Details:\n";
    cout << "Name: " << e.name << endl;
    cout << "ID: " << e.id << endl;
    cout << "Salary: " << e.salary << endl;
}

int main() {
    Employee emp;

    cout << "Enter employee name: ";
    getline(cin, emp.name);

    cout << "Enter employee ID: ";
    cin >> emp.id;

    cout << "Enter employee salary: ";
    cin >> emp.salary;

    increaseSalary(emp, 5000); // Increment salary by 5000
    displayEmployee(emp);

    return 0;
}
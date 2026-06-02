#include <iostream>
#include <string>
using namespace std;

struct Department {
    string name;
    int floor;
};

struct Employee {
    string name;
    int id;
    Department dept; // nested structure
};

int main() {
    Employee e1;
    cout << "Enter employee name: ";
    getline(cin, e1.name);
    cout << "Enter employee ID: ";
    cin >> e1.id;
    cin.ignore();
    cout << "Enter department name: ";
    getline(cin, e1.dept.name);
    cout << "Enter department floor: ";
    cin >> e1.dept.floor;

    cout << "\nEmployee Details:\n";
    cout << "Name: " << e1.name << ", ID: " << e1.id << endl;
    cout << "Department: " << e1.dept.name << ", Floor: " << e1.dept.floor << endl;

    return 0;
}
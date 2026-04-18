// Lab: 4
// Topic: Relational and Logical Operators
// Description: Demonstrates ==, <, &&, ||

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nEquality (a == b): " << (a == b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a < 100 AND a < b: " << (a < 100 && a < b) << endl;
    cout << "a < 100 OR a < b: " << (a < 100 || a < b) << endl;

    return 0;
}

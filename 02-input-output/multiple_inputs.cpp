// Lab: 2
// Topic: Multiple Inputs
// Program: Mixed Data Input
// Description: Takes multiple values of different data types

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    float num3, num4;
    char ch;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Enter two decimal values: ";
    cin >> num3 >> num4;

    cout << "Enter any character: ";
    cin >> ch;

    cout << "\nYou entered: "
         << num1 << ", " << num2 << ", "
         << num3 << ", " << num4 << ", "
         << ch << endl;

    return 0;
}

// Lab: 2
// Topic: Boolean Input/Output
// Program: Boolean Example
// Description: Demonstrates boolean input and output

#include <iostream>
using namespace std;

int main()
{
    bool value;

    cout << "Enter 0 (false) or 1 (true): ";
    cin >> value;

    cout << "You entered: " << value << endl;

    return 0;
}

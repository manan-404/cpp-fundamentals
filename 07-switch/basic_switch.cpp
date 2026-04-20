// Lab: 5
// Topic: Switch Basics
// Description: Demonstrates simple switch case

#include <iostream>
using namespace std;

int main()
{
    int value;

    cout << "Enter a value (100, 200, 300): ";
    cin >> value;

    switch(value)
    {
        case 100:
            cout << "Value is 100";
            break;
        case 200:
            cout << "Value is 200";
            break;
        case 300:
            cout << "Value is 300";
            break;
        default:
            cout << "Value not recognized";
    }

    return 0;
}

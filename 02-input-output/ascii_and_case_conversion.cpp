// Lab: 2
// Topic: Input/Output + ASCII + Character Conversion
// Program: ASCII and Case Conversion
// Description: Takes character input and shows ASCII, uppercase, and lowercase conversions

#include <iostream>
using namespace std;

int main()
{
    char ch;
    int ascii;

    cout << "Enter any alphabet: ";
    cin >> ch;

    ascii = ch;

    cout << "\nASCII value of " << ch << " is: " << ascii << endl;

    // Convert to uppercase
    if (ch >= 'a' && ch <= 'z')
    {
        char upper = ch - 32;
        cout << "Uppercase: " << upper << endl;
    }
    else
    {
        cout << "Already uppercase or not a lowercase letter\n";
    }

    // Convert to lowercase
    if (ch >= 'A' && ch <= 'Z')
    {
        char lower = ch + 32;
        cout << "Lowercase: " << lower << endl;
    }
    else
    {
        cout << "Already lowercase or not an uppercase letter\n";
    }

    return 0;
}

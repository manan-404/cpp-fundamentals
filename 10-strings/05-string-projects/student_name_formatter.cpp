#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first, last;

    cout << "Enter first name: ";
    cin >> first;

    cout << "Enter last name: ";
    cin >> last;

    string fullName = first + " " + last;

    cout << "Full Name: " << fullName;

    return 0;
}

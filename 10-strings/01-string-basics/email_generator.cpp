#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName, lastName;

    cout << "Enter first name: ";
    cin >> firstName;

    cout << "Enter last name: ";
    cin >> lastName;

    string email = firstName + "." + lastName[0] + "@iba-suk.edu.pk";

    cout << "Generated Email: " << email;

    return 0;
}

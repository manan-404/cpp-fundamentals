#include <iostream>
#include <string>
using namespace std;

int main()
{
    string email;

    cout << "Enter email address: ";
    getline(cin, email);

    int atSymbol = email.find('@');
    int dotSymbol = email.find('.');

    if(atSymbol != string::npos &&
       dotSymbol != string::npos &&
       atSymbol < dotSymbol)
    {
        cout << "Valid email address";
    }
    else
    {
        cout << "Invalid email address";
    }

    return 0;
}

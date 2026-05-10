#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    cout << "Enter password: ";
    getline(cin, password);

    if(password.length() < 8)
    {
        cout << "Password must contain at least 8 characters.";
        return 0;
    }

    for(int i = 0; i < password.length(); i++)
    {
        if(password[i] >= 'A' && password[i] <= 'Z')
        {
            hasUpper = true;
        }
        else if(password[i] >= 'a' && password[i] <= 'z')
        {
            hasLower = true;
        }
        else if(password[i] >= '0' && password[i] <= '9')
        {
            hasDigit = true;
        }
        else
        {
            hasSpecial = true;
        }
    }

    if(hasUpper && hasLower && hasDigit && hasSpecial)
    {
        cout << "Strong password";
    }
    else
    {
        cout << "Weak password";
    }

    return 0;
}

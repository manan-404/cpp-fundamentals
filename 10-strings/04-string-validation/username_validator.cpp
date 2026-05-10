#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    bool valid = true;

    cout << "Enter username: ";
    getline(cin, username);

    if(username.length() < 5)
    {
        valid = false;
    }

    for(int i = 0; i < username.length(); i++)
    {
        if(username[i] == ' ')
        {
            valid = false;
        }
    }

    if(valid)
    {
        cout << "Valid username";
    }
    else
    {
        cout << "Invalid username";
    }

    return 0;
}

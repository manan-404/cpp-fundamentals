#include <iostream>
using namespace std;

int main()
{
    string email;
    string username;

    cout<<"Enter your email: ";
    getline(cin, email);

    for(int i = 0; i < email.length(); i++)
    {
        if(email[i] == '@')
            break;

        username += email[i];
    }

    cout<<"Username is: "<<username;

    return 0;
}

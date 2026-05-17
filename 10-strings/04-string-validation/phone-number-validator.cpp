#include <iostream>
#include <string>
using namespace std;

int main()
{
    string phone;
    bool valid = true;

    cout << "Enter phone number: ";
    getline(cin, phone);

    if(phone.length() != 11)
    {
        valid = false;
    }

    for(int i = 0; i < phone.length(); i++)
    {
        if(phone[i] < '0' || phone[i] > '9')
        {
            valid = false;
        }
    }

    if(valid)
    {
        cout << "Valid Phone Number";
    }
    else
    {
        cout << "Invalid Phone Number";
    }

    return 0;
}

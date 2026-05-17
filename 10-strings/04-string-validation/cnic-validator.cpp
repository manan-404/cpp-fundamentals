#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cnic;
    bool valid = true;

    cout << "Enter CNIC (XXXXX-XXXXXXX-X): ";
    getline(cin, cnic);

    if(cnic.length() != 15)
    {
        valid = false;
    }

    for(int i = 0; i < cnic.length(); i++)
    {
        if(i == 5 || i == 13)
        {
            if(cnic[i] != '-')
            {
                valid = false;
            }
        }
        else
        {
            if(cnic[i] < '0' || cnic[i] > '9')
            {
                valid = false;
            }
        }
    }

    if(valid)
    {
        cout << "Valid CNIC";
    }
    else
    {
        cout << "Invalid CNIC";
    }

    return 0;
}

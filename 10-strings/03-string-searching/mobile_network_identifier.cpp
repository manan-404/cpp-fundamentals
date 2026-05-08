#include <iostream>
#include <string>
using namespace std;

int main()
{
    string number;

    cout << "Enter phone number with dash: ";
    getline(cin, number);

    int dash = number.find('-');

    string code = number.substr(0, dash);

    if(code == "0300")
    {
        cout << "Network: Jazz";
    }
    else if(code == "0333")
    {
        cout << "Network: Ufone";
    }
    else if(code == "0345")
    {
        cout << "Network: Telenor";
    }
    else
    {
        cout << "Unknown network";
    }

    return 0;
}

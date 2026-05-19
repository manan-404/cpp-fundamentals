#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int size = 5;

    string names[size];
    string numbers[size];

    cout << "===== Contact Book =====\n\n";

    for(int i = 0; i < size; i++)
    {
        cout << "Enter name for contact " << i + 1 << ": ";
        getline(cin, names[i]);

        cout << "Enter phone number: ";
        getline(cin, numbers[i]);

        cout << endl;
    }

    string searchName;
    cout << "Enter name to search: ";
    getline(cin, searchName);

    bool found = false;

    for(int i = 0; i < size; i++)
    {
        if(names[i] == searchName)
        {
            cout << "\nContact Found!\n";
            cout << "Name: " << names[i] << endl;
            cout << "Phone: " << numbers[i] << endl;

            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "\nContact not found.";
    }

    return 0;
}

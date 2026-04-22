// Lab: 5
// Topic: Do-While Loop
// Description: Repeats greeting based on user input

#include <iostream>
using namespace std;

int main()
{
    char choice;

    do
    {
        cout << "\nHello 👋";
        cout << "\nDo you want another greeting? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    return 0;
}

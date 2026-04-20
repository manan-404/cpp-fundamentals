// Lab: 5
// Topic: Switch Case
// Description: Displays season based on month

#include <iostream>
using namespace std;

int main()
{
    int month;

    cout << "Enter month number: ";
    cin >> month;

    switch(month)
    {
        case 12:
        case 1:
        case 2:
            cout << "Winter";
            break;

        case 3:
        case 4:
            cout << "Spring";
            break;

        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "Summer";
            break;

        case 10:
        case 11:
            cout << "Autumn";
            break;

        default:
            cout << "Invalid month";
    }

    return 0;
}

// Lab: 5
// Topic: Switch + Loop
// Description: Menu-driven program

#include <iostream>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n1. Next Assignment";
        cout << "\n2. Last Grade";
        cout << "\n3. Hints";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Next: PF Lab 5";
                break;
            case 2:
                cout << "Grade: A";
                break;
            case 3:
                cout << "Hints: Practice more!";
                break;
            case 4:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice";
        }

    } while(choice != 4);

    return 0;
}

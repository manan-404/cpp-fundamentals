// Lab: 5
// Topic: Do-While + Condition
// Description: Adds numbers only if second number is even

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char choice;

    do
    {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Do you want to add another number? (y/n): ";
        cin >> choice;

        if(choice == 'y' || choice == 'Y')
        {
            cout << "Enter second number: ";
            cin >> num2;

            if(num2 % 2 == 0)
                cout << "Addition = " << num1 + num2 << endl;
            else
                cout << "Second number is odd. Cannot add.\n";
        }

    } while(choice == 'y' || choice == 'Y');

    return 0;
}

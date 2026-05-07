#include <iostream>
using namespace std;

int main()
{
    string firstName[3];
    string lastName[3];

    for(int i = 0; i < 3; i++)
    {
        cout << "Enter first name " << i + 1 << ": ";
        cin >> firstName[i];

        cout << "Enter last name " << i + 1 << ": ";
        cin >> lastName[i];
    }

    cout << "\nFull Names:\n";

    for(int i = 0; i < 3; i++)
    {
        cout << firstName[i] << " " << lastName[i] << endl;
    }

    return 0;
}

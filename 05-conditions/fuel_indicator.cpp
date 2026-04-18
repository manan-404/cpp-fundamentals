// Lab: 5
// Topic: Nested If
// Description: Checks fuel level and gives warning

#include <iostream>
using namespace std;

int main()
{
    float fuel;

    cout << "Enter your fuel level (0 to 1): ";
    cin >> fuel;

    if(fuel < 0.75)
    {
        if(fuel < 0.25)
            cout << "Fuel very low. Caution!";
        else
            cout << "Better find petrol pump";
    }
    else
    {
        cout << "Fuel level is good. Keep going!";
    }

    return 0;
}

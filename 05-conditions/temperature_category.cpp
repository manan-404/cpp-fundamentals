// Lab: 5
// Topic: Conditions
// Description: Categorizes temperature

#include <iostream>
using namespace std;

int main()
{
    float temp;

    cout << "Enter temperature: ";
    cin >> temp;

    if(temp > 30)
        cout << "Hot";
    else if(temp > 20)
        cout << "Moderate";
    else
        cout << "Cold";

    return 0;
}

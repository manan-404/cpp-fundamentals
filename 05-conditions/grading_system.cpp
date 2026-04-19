// Lab: 5
// Topic: If-Else Ladder
// Description: Calculates grade based on marks

#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if(marks >= 90)
        cout << "Grade: A1";
    else if(marks >= 80)
        cout << "Grade: A";
    else if(marks >= 70)
        cout << "Grade: B";
    else if(marks >= 60)
        cout << "Grade: C";
    else
        cout << "FAIL";

    return 0;
}

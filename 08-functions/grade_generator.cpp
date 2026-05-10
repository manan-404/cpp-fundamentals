#include <iostream>
using namespace std;

string grade(float per);

int main()
{
    int percentage;

    cout << "Enter your marks: ";
    cin >> percentage;

    while(percentage < 0 || percentage > 100)
    {
        cout << "Invalid Marks" << endl;
        cout << "Enter valid marks: ";
        cin >> percentage;
    }

    cout << "Your grade is: " << grade(percentage);

    return 0;
}

string grade(float per)
{
    if(per <= 100 && per >= 90)
        return "A+";
    else if(per >= 80 && per < 90)
        return "A";
    else if(per >= 70 && per < 80)
        return "B";
    else if(per >= 60 && per < 70)
        return "C";
    else
        return "F";
}

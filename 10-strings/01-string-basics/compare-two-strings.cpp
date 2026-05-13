#include <iostream>
using namespace std;

int main()
{
    string first, second;

    cout<<"Enter first string: ";
    getline(cin, first);

    cout<<"Enter second string: ";
    getline(cin, second);

    if(first == second)
        cout<<"Both strings are equal.";
    else
        cout<<"Strings are not equal.";

    return 0;
}

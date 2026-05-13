#include <iostream>
using namespace std;

int main()
{
    string first, second, result;

    cout<<"Enter first string: ";
    getline(cin, first);

    cout<<"Enter second string: ";
    getline(cin, second);

    for(int i = 0; i < first.length(); i++)
    {
        result += first[i];
    }

    result += ' ';

    for(int i = 0; i < second.length(); i++)
    {
        result += second[i];
    }

    cout<<"Concatenated string is: "<<result;

    return 0;
}

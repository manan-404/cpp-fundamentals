#include <iostream>
using namespace std;

int main()
{
    string original, copied;

    cout<<"Enter a string: ";
    getline(cin, original);

    for(int i = 0; i < original.length(); i++)
    {
        copied += original[i];
    }

    cout<<"Copied string is: "<<copied;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    bool isNumeric = true;

    cout << "Enter a string: ";
    getline(cin, input);

    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] < '0' || input[i] > '9')
        {
            isNumeric = false;
            break;
        }
    }

    if(isNumeric)
    {
        cout << "String contains only digits";
    }
    else
    {
        cout << "String is not numeric";
    }

    return 0;
}

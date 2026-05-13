#include <iostream>
using namespace std;

int main()
{
    string text;
    
    cout<<"Enter a string: ";
    getline(cin, text);

    int length = 0;

    while(text[length] != '\0')
    {
        length++;
    }

    cout<<"Length of string is: "<<length;

    return 0;
}

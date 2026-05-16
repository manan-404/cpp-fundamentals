#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    char characters[100];

    for(int i = 0; i < text.length(); i++)
    {
        characters[i] = text[i];
    }

    characters[text.length()] = '\0';

    cout << "Character Array: ";

    for(int i = 0; characters[i] != '\0'; i++)
    {
        cout << characters[i];
    }

    return 0;
}

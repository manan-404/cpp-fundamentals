#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i] - 32;
        }
    }

    cout << "Uppercase string: " << text;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;

    cout << "Enter a sentence: ";
    getline(cin, text);

    for(int i = 0; i < text.length(); i++)
    {
        if(islower(text[i]))
        {
            text[i] = toupper(text[i]);
        }
        else if(isupper(text[i]))
        {
            text[i] = tolower(text[i]);
        }
    }

    cout << "Converted string: " << text;

    return 0;
}

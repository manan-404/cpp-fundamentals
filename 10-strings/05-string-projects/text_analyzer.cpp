#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;

    int letters = 0, digits = 0, spaces = 0;

    cout << "Enter text: ";
    getline(cin, text);

    for(int i = 0; i < text.length(); i++)
    {
        if((text[i] >= 'a' && text[i] <= 'z') ||
           (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }
        else if(text[i] >= '0' && text[i] <= '9')
        {
            digits++;
        }
        else if(text[i] == ' ')
        {
            spaces++;
        }
    }

    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}

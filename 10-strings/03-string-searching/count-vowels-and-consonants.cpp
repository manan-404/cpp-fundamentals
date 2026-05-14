#include <iostream>
using namespace std;

int main()
{
    string text;

    int vowels = 0, consonants = 0;

    cout<<"Enter a string: ";
    getline(cin, text);

    for(int i = 0; i < text.length(); i++)
    {
        char ch = tolower(text[i]);

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout<<"Total vowels are: "<<vowels<<endl;
    cout<<"Total consonants are: "<<consonants;

    return 0;
}

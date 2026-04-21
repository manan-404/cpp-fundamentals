// Lab: 5
// Topic: Switch Case
// Description: Checks vowel or consonant

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a letter: ";
    cin >> ch;

    switch(ch)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Vowel";
            break;

        default:
            cout << "Consonant";
    }

    return 0;
}

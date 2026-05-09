#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    bool isPalindrome = true;

    cout << "Enter a word: ";
    cin >> text;

    int last = text.length() - 1;

    for(int i = 0; i < text.length() / 2; i++)
    {
        if(text[i] != text[last - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
    {
        cout << "The word is palindrome";
    }
    else
    {
        cout << "The word is not palindrome";
    }

    return 0;
}

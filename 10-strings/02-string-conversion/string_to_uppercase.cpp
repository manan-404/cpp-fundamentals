#include <iostream>
#include <string>
using namespace std;

string toUpperCase(string text)
{
    string result;

    for(int i = 0; i < text.length(); i++)
    {
        result += toupper(text[i]);
    }

    return result;
}

int main()
{
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Uppercase string: "
         << toUpperCase(sentence);

    return 0;
}

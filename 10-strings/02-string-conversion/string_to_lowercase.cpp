#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string text)
{
    string result;

    for(int i = 0; i < text.length(); i++)
    {
        result += tolower(text[i]);
    }

    return result;
}

int main()
{
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Lowercase string: "
         << toLowerCase(sentence);

    return 0;
}

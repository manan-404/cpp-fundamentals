#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence, word;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter word to search: ";
    getline(cin, word);

    if(sentence.find(word) != string::npos)
    {
        cout << "Word exists in sentence";
    }
    else
    {
        cout << "Word not found";
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int countWords(string str)
{
    int words = 1;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {
            words++;
        }
    }

    return words;
}

int main()
{
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Total words: " << countWords(sentence);

    return 0;
}

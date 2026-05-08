#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    if(sentence[0] >= 'a' && sentence[0] <= 'z')
    {
        sentence[0] = toupper(sentence[0]);
    }

    for(int i = 1; i < sentence.length(); i++)
    {
        if(sentence[i - 1] == ' ')
        {
            sentence[i] = toupper(sentence[i]);
        }
    }

    cout << "Capitalized sentence: "
         << sentence;

    return 0;
}

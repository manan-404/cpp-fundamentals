#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;

    cout << "Enter your full name: ";
    getline(cin, sentence);

    char firstChar = sentence[0];

    int count = 0;

    for(int i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] == firstChar)
        {
            count++;
        }
    }

    cout << "Character '" << firstChar << "' appears "
         << count << " times.";

    return 0;
}

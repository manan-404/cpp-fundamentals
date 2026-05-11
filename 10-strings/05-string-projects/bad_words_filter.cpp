#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    string badWords[3] = {"spam", "hate", "attack"};

    cout << "Enter message: ";
    getline(cin, text);

    for(int i = 0; i < 3; i++)
    {
        int pos = text.find(badWords[i]);

        while(pos != string::npos)
        {
            for(int j = 0; j < badWords[i].length(); j++)
            {
                text[pos + j] = '*';
            }

            pos = text.find(badWords[i], pos + 1);
        }
    }

    cout << "Filtered message: " << text;

    return 0;
}

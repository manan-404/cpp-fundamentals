#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    char target;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Enter character to search: ";
    cin >> target;

    bool found = false;

    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == target)
        {
            cout << "Character found at index "
                 << i << endl;

            found = true;
        }
    }

    if(!found)
    {
        cout << "Character not found";
    }

    return 0;
}

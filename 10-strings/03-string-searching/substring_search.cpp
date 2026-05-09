#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text, word;

    cout << "Enter main text: ";
    getline(cin, text);

    cout << "Enter substring to search: ";
    getline(cin, word);

    int position = text.find(word);

    if(position != string::npos)
    {
        cout << "Substring found at index: "
             << position;
    }
    else
    {
        cout << "Substring not found";
    }

    return 0;
}

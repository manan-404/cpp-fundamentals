#include <iostream>
using namespace std;

int main()
{
    string text;
    string result;

    cout<<"Enter a string: ";
    getline(cin, text);

    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] != ' ')
        {
            result += text[i];
        }
    }

    cout<<"String after removing spaces: "<<result;

    return 0;
}

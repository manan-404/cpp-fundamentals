#include <iostream>
using namespace std;

int main()
{
    string text;
    char target;

    int first = -1;
    int last = -1;

    cout<<"Enter a string: ";
    getline(cin, text);

    cout<<"Enter character to search: ";
    cin>>target;

    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == target)
        {
            if(first == -1)
                first = i;

            last = i;
        }
    }

    if(first != -1)
    {
        cout<<"First occurrence at index: "<<first<<endl;
        cout<<"Last occurrence at index: "<<last;
    }

    else
    {
        cout<<"Character not found.";
    }

    return 0;
}

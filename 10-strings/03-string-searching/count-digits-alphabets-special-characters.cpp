#include <iostream>
using namespace std;

int main()
{
    string text;

    int alphabets = 0;
    int digits = 0;
    int special = 0;

    cout<<"Enter a string: ";
    getline(cin, text);

    for(int i = 0; i < text.length(); i++)
    {
        if((text[i] >= 'A' && text[i] <= 'Z') ||
           (text[i] >= 'a' && text[i] <= 'z'))
        {
            alphabets++;
        }

        else if(text[i] >= '0' && text[i] <= '9')
        {
            digits++;
        }

        else if(text[i] != ' ')
        {
            special++;
        }
    }

    cout<<"Alphabets: "<<alphabets<<endl;
    cout<<"Digits: "<<digits<<endl;
    cout<<"Special Characters: "<<special;

    return 0;
}

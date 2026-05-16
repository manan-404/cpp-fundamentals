#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data;

    cout << "Enter comma separated values: ";
    getline(cin, data);

    string word = "";

    cout << "\nSeparated values are:\n";

    for(int i = 0; i < data.length(); i++)
    {
        if(data[i] == ',')
        {
            cout << word << endl;
            word = "";
        }
        else
        {
            word += data[i];
        }
    }

    cout << word;

    return 0;
}

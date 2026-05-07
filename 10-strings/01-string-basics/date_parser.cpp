#include <iostream>
#include <string>
using namespace std;

int main()
{
    string date;

    cout << "Enter date in DD/MM/YYYY format: ";
    getline(cin, date);

    int firstSlash = date.find('/');
    int secondSlash = date.find('/', firstSlash + 1);

    string day = date.substr(0, firstSlash);
    string month = date.substr(firstSlash + 1, secondSlash - firstSlash - 1);
    string year = date.substr(secondSlash + 1, 4);

    cout << "Day: " << day << endl;
    cout << "Month: " << month << endl;
    cout << "Year: " << year << endl;

    return 0;
}

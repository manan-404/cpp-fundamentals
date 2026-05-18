#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of contacts: ";
    cin >> n;

    string names[n];
    string numbers[n];

    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Enter name: ";
        getline(cin, names[i]);

        cout << "Enter number: ";
        getline(cin, numbers[i]);
    }

    string searchName;
    cout << "\n

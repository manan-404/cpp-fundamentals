#include <iostream>
#include <string>
using namespace std;

struct Author {
    string name;
    string country;
};

struct Book {
    string title;
    Author author; // nested structure
    float price;
};

int main() {
    const int SIZE = 2;
    Book library[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cin.ignore();
        cout << "Enter book title: ";
        getline(cin, library[i].title);
        cout << "Enter author name: ";
        getline(cin, library[i].author.name);
        cout << "Enter author country: ";
        getline(cin, library[i].author.country);
        cout << "Enter book price: ";
        cin >> library[i].price;
    }

    cout << "\nBook Library:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Title: " << library[i].title 
             << ", Author: " << library[i].author.name 
             << " (" << library[i].author.country << ")"
             << ", Price: " << library[i].price << endl;
    }

    return 0;
}
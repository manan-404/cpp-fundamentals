#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int pages;
};

int main() {
    Book b1;

    cout << "Enter book title: ";
    getline(cin, b1.title);

    cout << "Enter author name: ";
    getline(cin, b1.author);

    cout << "Enter number of pages: ";
    cin >> b1.pages;

    cout << "\nBook Details:\n";
    cout << "Title: " << b1.title << endl;
    cout << "Author: " << b1.author << endl;
    cout << "Pages: " << b1.pages << endl;

    return 0;
}
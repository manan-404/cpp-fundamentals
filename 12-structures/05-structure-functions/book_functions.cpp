#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    float price;
};

Book createBook() {
    Book b;
    cin.ignore();
    cout << "Enter book title: ";
    getline(cin, b.title);
    cout << "Enter author: ";
    getline(cin, b.author);
    cout << "Enter price: ";
    cin >> b.price;
    return b;
}

void displayBook(const Book &b) {
    cout << "\nBook Details:\n";
    cout << "Title: " << b.title << "\nAuthor: " << b.author
         << "\nPrice: " << b.price << endl;
}

int main() {
    Book myBook = createBook();
    displayBook(myBook);
    return 0;
}
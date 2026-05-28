#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    float price;
};

void applyDiscount(Book &b, float discountPercent) {
    b.price = b.price - (b.price * discountPercent / 100);
}

void displayBook(Book b) {
    cout << "\nBook Details:\n";
    cout << "Title: " << b.title << endl;
    cout << "Price: " << b.price << endl;
}

int main() {
    Book b1;

    cout << "Enter book title: ";
    getline(cin, b1.title);

    cout << "Enter book price: ";
    cin >> b1.price;

    applyDiscount(b1, 10); // Apply 10% discount
    displayBook(b1);

    return 0;
}
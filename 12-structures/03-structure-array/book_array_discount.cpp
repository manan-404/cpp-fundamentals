#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    float price;
};

int main() {
    const int SIZE = 3;
    Book library[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cin.ignore();
        cout << "Enter book title " << i + 1 << ": ";
        getline(cin, library[i].title);
        cout << "Enter price: ";
        cin >> library[i].price;
    }

    // Apply 10% discount to all books
    for (int i = 0; i < SIZE; i++) {
        library[i].price -= library[i].price * 0.10;
    }

    cout << "\nBook List with Discount Applied:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Title: " << library[i].title 
             << ", Price: " << library[i].price << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int choice, qty;
    int books = 0, shirts = 0, shoes = 0;

    do {
        cout << "\n1. Books (500)\n2. T-Shirts (700)\n3. Shoes (1000)\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Quantity: ";
                cin >> qty;
                books += qty;
                break;

            case 2:
                cout << "Quantity: ";
                cin >> qty;
                shirts += qty;
                break;

            case 3:
                cout << "Quantity: ";
                cin >> qty;
                shoes += qty;
                break;
        }

    } while (choice != 0);

    cout << "\nBill Summary:\n";
    cout << "Books: " << books * 500 << endl;
    cout << "Shirts: " << shirts * 700 << endl;
    cout << "Shoes: " << shoes * 1000 << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Function declarations
void printTable(int num);
void printTable(int num, int range);

int main() {
    int num, range;

    cout << "Enter number: ";
    cin >> num;
    printTable(num);

    cout << "\nEnter number again: ";
    cin >> num;
    cout << "Enter range: ";
    cin >> range;

    printTable(num, range);

    return 0;
}

// Definitions
void printTable(int num) {
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

void printTable(int num, int range) {
    for (int i = 1; i <= range; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

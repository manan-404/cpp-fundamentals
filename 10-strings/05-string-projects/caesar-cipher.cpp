#include <iostream>
using namespace std;

string encrypt(string text, int shift) {
    for (char &c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + shift) % 26 + base;
        }
    }
    return text;
}

string decrypt(string text, int shift) {
    return encrypt(text, 26 - (shift % 26));
}

int main() {
    string text;
    int shift;

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter shift: ";
    cin >> shift;

    string encrypted = encrypt(text, shift);
    string decrypted = decrypt(encrypted, shift);

    cout << "Encrypted: " << encrypted << endl;
    cout << "Decrypted: " << decrypted << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
};

void searchContact(const vector<Contact>& contacts, string key) {
    bool found = false;

    for (auto c : contacts) {
        if (c.name.find(key) != string::npos || c.phone.find(key) != string::npos) {
            cout << "Name: " << c.name << " | Phone: " << c.phone << endl;
            found = true;
        }
    }

    if (!found) cout << "No contact found.\n";
}

int main() {
    vector<Contact> contacts = {
        {"Ali", "03001234567"},
        {"Sara", "03111222333"},
        {"Ahmed", "03214567890"}
    };

    string key;
    cout << "Search Contact: ";
    getline(cin, key);

    searchContact(contacts, key);

    return 0;
}

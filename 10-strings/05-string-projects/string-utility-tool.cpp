#include <iostream>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int l = 0, r = s.length() - 1;

    while (l < r) {
        if (s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

int countVowels(string s) {
    int count = 0;
    for (char c : s) {
        c = tolower(c);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            count++;
    }
    return count;
}

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    cout << "Reversed: ";
    for (int i = s.length()-1; i >= 0; i--)
        cout << s[i];
    cout << endl;

    cout << "Vowels: " << countVowels(s) << endl;

    if (isPalindrome(s))
        cout << "It is a palindrome\n";
    else
        cout << "Not a palindrome\n";

    return 0;
}

#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {
    string text;
    cout << "Enter chat text: ";
    getline(cin, text);

    stringstream ss(text);
    string word;
    map<string, int> freq;

    int wordCount = 0;

    while (ss >> word) {
        freq[word]++;
        wordCount++;
    }

    string mostCommon;
    int maxFreq = 0;

    for (auto p : freq) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            mostCommon = p.first;
        }
    }

    cout << "Words: " << wordCount << endl;
    cout << "Most common word: " << mostCommon << " (" << maxFreq << " times)\n";

    return 0;
}

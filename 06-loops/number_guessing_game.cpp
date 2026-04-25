#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;
    int attempts = 5;

    cout << "Guess the number (1-100). You have 5 attempts.\n";

    while (attempts--) {
        cin >> guess;

        if (guess == secret) {
            cout << "Correct! You win 🎉\n";
            return 0;
        }
        else if (guess > secret) {
            cout << "Too high!\n";
        }
        else {
            cout << "Too low!\n";
        }
    }

    cout << "Game over! Number was: " << secret << endl;
    return 0;
}

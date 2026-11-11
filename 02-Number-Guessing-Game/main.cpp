
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    char choice;

    do {
        int secret = rand() % 100 + 1;
        int guess;
        int attempts = 0;
        int maxAttempts;

        int difficulty;

        cout << "\n===== 0xRealbot Number Guessing Game =====\n";
        cout << "1. Easy (10 attempts)\n";
        cout << "2. Medium (7 attempts)\n";
        cout << "3. Hard (5 attempts)\n";

        cout << "Choose difficulty: ";
        cin >> difficulty;

        switch (difficulty) {
            case 1:
                maxAttempts = 10;
                break;

            case 2:
                maxAttempts = 7;
                break;

            case 3:
                maxAttempts = 5;
                break;

            default:
                cout << "Invalid difficulty!\n";
                continue;
        }

        cout << "\nGuess a number between 1 and 100!\n";

        while (attempts < maxAttempts) {
            cout << "\nEnter your guess: ";
            cin >> guess;

            attempts++;

            if (guess == secret) {
                cout << "\nCORRECT! YOU WON!\n";
                cout << "Attempts used: " << attempts << "\n";
                break;
            }
            else if (guess < secret) {
                cout << "Too low! Try a higher number.\n";
            }
            else {
                cout << "Too high! Try a lower number.\n";
            }
        }

        if (attempts == maxAttempts && guess != secret) {
            cout << "\nGAME OVER!\n";
            cout << "The correct number was: " << secret << "\n";
        }

        cout << "\nPlay again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThanks for playing 0xRealbot Game!\n";

    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int randomNumber;
    int guess;
    int guesses = 0;

    srand(time(0));
    randomNumber = rand() % 100 + 1;

    do {
        cout << "Guess the number: ";
        cin >> guess;

        guesses++;

        if (guess > randomNumber) {
            cout << "Too high, try again." << endl;
        }
        else if (guess < randomNumber) {
            cout << "Too low, try again." << endl;
        }

    } while (guess != randomNumber);

    cout << "You guessed the number!" << endl;

    while (guesses > 0) {
        cout << "Number of guesses: " << guesses << endl;
        break;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int number = 50;
    int guess;

    cout << "Guess the number between 1 and 100: ";

    while (true) {
        cin >> guess;

        if (guess > number) {
            cout << "Too high! Try again: ";
        }
        else if (guess < number) {
            cout << "Too low! Try again: ";
        }
        else {
            cout << "Correct! You guessed the number!" << endl;
            break;
        }
    }

    return 0;
}


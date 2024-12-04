#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int target = rand() % 100 + 1;
    int guess;

    cout << "Guess the number between 1 and 100: ";
    while (true) {
        cin >> guess;
        if (guess > target) {
            cout << "===============\n>>Too high! \nTry again: ";
        } else if (guess < target) {
            cout << "===============\n>>Too low! \nTry again: ";
        } else {
            cout << "===============\nCongratulations! You guessed the correct number.\n";
            break;
        }
    }

    return 0;
}
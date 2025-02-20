#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int guess, value;

    do {
        cout << "Enter your guess value between 1 to 10: ";
        cin >> guess;

        value = rand() % 10 + 1; // Generate random value between 1 to 10
        cout << "Generated Value is " << value << endl;

        if (guess > value) {
            cout << "You guessed a larger value." << endl;
        } else if (guess == value) {
            cout << "Congrats! Your guess is right." << endl;
            break;
        } else {
            cout << "You guessed a smaller value." << endl;
        }
    } while (true);

    return 0;
}

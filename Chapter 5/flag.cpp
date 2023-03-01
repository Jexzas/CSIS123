// number guessing game
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    int num;
    int guess;
    bool isGuessed;

    srand(time(0));
    num = rand() % 100;
    isGuessed = false;

    while(!isGuessed) {
        cout << "Enter a whole number between 0 and 100 (inclusive): " << endl;
        cin >> guess;
        if (guess == num) {
            cout << "You got it!" << endl;
            isGuessed = true;
        } else if (guess < num) {
            cout << "It's higher than that. Try again." << endl;
        } else {
            cout << "It's lower than that. Try again." << endl;
        }
    }

}
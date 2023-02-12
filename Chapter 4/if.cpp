// just checking to see if I know how to use if/then in c++
// pretty sure it's the same as JavaScript/PHP
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double bankBalance;
    double mealCost;
    double tip;
    double mealTotal;
    cout << "How much money do you have in your bank account? " << endl;
    cin >> bankBalance;
    cout << "How much money did the meal cost? " << endl;
    cin >> mealCost;
    tip = mealCost * .2;
    mealTotal = mealCost + tip;
    if (bankBalance > mealTotal) {
        cout << "Okay, the meal cost you $" << fixed << setprecision(2) << mealTotal << " with a 20% tip." << endl;
        cout << "That leaves you with $" << fixed << setprecision(2) << bankBalance - mealTotal << " in your account." << endl;
    } else if (bankBalance == mealCost) {
        cout << "Ooof. That meal completely drained your bank account." << endl;
    } else {
        cout << "You cannot afford this meal. Your account will have $" << fixed << setprecision(2) << bankBalance - mealTotal << " after this $" << fixed << setprecision(2) << mealTotal << " meal." << endl;
    }
}
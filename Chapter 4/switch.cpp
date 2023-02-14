#include <iostream>

using namespace std;
int main() { 
    int dnd;
    cout << "Please enter what class your character will play as: (1 for fighter, 2 for mage, 3 for warlock, 4 for rogue, 5 for bard)" << endl;
    cin >> dnd;
    switch (dnd) {
        case 1:
            cout << "Oh, so you're a fighter?" << endl;
            break;
        case 2:
            cout << "Oh, so you're a mage?";
            break;
        case 3:
            cout << "Oh, so you're a warlock?";
            break;
        case 4:
            cout << "Oh, so you're a rogue?";
            break;
        case 5: 
            cout << "Oh, so you're a bard?";
            break;
        default: 
            cout << "I don't recognize that class.";
    }
}
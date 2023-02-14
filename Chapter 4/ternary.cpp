#include <iostream>
using namespace std;

int main () {
    bool is_false;
    string boolean;
    cout << "Enter true or false: " << endl;
    cin >> boolean;
    boolean == "false" ? is_false = false : is_false = true;
    cout << "Your input was " << is_false << endl;
}
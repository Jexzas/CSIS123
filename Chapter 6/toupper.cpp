#include <iostream>
#include <cctype>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main () {
    char phrase;
    cout << "Give me a letter: \n";
    cin >> phrase;
    cout << char(toupper(phrase));
}
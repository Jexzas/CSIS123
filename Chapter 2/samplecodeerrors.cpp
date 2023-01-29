#include <iostream>
using namespace std;

int main () {
    int num;
    // no semicolon
    num = 18;
    // no error
    int tempNum = 2 * num;
    // no declaration
    cout << "Num = " << num << ", tempNum = " << tempNum << endl;
    // bad stream operator
    return 0;
}
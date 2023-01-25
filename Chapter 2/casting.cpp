#include <iostream>
using namespace std;


// I don't know what else to write down for this lesson. Just messing with const and type conversion implicit/explicit.

int main () {
    int one = 1;
    int two = 2;
    const double three = 3.001;
    cout << one << endl;
    cout << two << endl;
    cout << three << endl; 
    double four = three + one;
    cout << four << endl;
    double five = three + two;
    cout << five << endl;
    cout << static_cast<double>(two) + 1.001;
}
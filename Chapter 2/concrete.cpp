#include <iostream>
#include <cmath>
using namespace std;



int main() {
    // Write your main here
    const int cubYard = 27;
    double preMixYd;
    double thickness;
    double lwRatio;
    double len;
    double wid;

    cout << "Specify the amount, in cubic yards, of premixed concrete you're ordering: " << endl;
    cin >> preMixYd;
    cout << "How thick, in inches, is the patio going to be? " << endl;
    cin >> thickness;
    cout << "What's the ratio, length to width of the sides? (Enter like X Y for X:Y)" << endl;
    cin >> len >> wid;
    lwRatio = len / wid;
    double preMixFt = preMixYd * cubYard;
    double width = sqrt(preMixFt / ((lwRatio * thickness) / 12));
    double length = width * lwRatio;
    cout << "The width of your patio should be " << width << " feet, and the length will be " << length << " feet." << endl;

    return 0;
}

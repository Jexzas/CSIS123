#include <iostream>
#include <cmath>
using namespace std;

double circumference(double radius) {
    return (radius * 2 * 3.14);
}

double area(double radius) {
    return (3.14 * pow(radius, 2));
}

int main () {
    double radius;
    cout << "Enter the radius of a circle: " << endl;
    cin >> radius;
    cout << "The area of the circle is " << area(radius) << " and the circumference is " << circumference(radius) << "." << endl;
}
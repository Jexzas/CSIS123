/*
*
*
*   This is literally just a file to comment some stuff. I didn't know how else to take notes on this lecture lol. There wasn't any important info. 
*
*
*/

// I guess I'm just going to write a program to calculate a perimeter and area of a rectangle. 

#include <iostream>
using namespace std; 

double perimeterCalc(double length, double width) {
    return (length * 2) + (width * 2);
}

double areaCalc(double length, double width) {
    return (length * width);
}

int main() {
    double length; 
    double width;
    double area;
    double perimeter;
    cout << "Please enter the length of the rectangle:" << endl;
    cin >> length;
    cout << "Please enter the width: " << endl;
    cin >> width;
    area = areaCalc(length, width);
    perimeter = perimeterCalc(length, width);

    cout << "Okay, the perimeter of that rectangle is " << perimeter << " and the area is " << area << "." << endl;
}
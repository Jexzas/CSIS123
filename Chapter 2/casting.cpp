#include <iostream>
using namespace std;

int main () {
    int one = 1;
    int two = 2;
    double three = 3.001;
    std::cout << one << endl;
    std::cout << two << endl;
    std::cout << three << endl; 
    double four = three + one;
    std::cout << four << endl;
    double five = three + two;
    std::cout << five << endl;
    std::cout << static_cast<double>(two) + 1.001;
}
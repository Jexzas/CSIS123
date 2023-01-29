#include <iostream>
using namespace std;

int main() {
    string feet;
    string inches;
    std::cout << "How tall are you? (*' *')" << endl;
    std::cin >> feet >> inches;
    std::cout << "Got it, you're " << feet << " " << inches << "." << endl;
}
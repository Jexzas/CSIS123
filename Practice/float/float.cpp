#include <iostream>
#include <vector>
using namespace std;
vector<double> arrayOfNumbers() {
    bool done;
    vector<double> array;
    while(!done) {
        double thisNumber;
        std::cout << "Enter a number to multiply: " << endl;
        std::cin >> thisNumber;
        array.push_back(thisNumber);
        string doneNess;
        std::cout << "Are you finished (y/n)?" << endl;
        std::cin >> doneNess;
        if (doneNess == "y") {
            done = true;
        }
    }
    return array;
}

int main() {
    vector<double> array = arrayOfNumbers();
    double product = 1;
    for (int i = 0; i < array.size(); i ++) {
        product *= array[i];
    }
    std::cout << "Your final result is " << product << "." << endl;
}
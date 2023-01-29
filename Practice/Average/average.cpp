#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double average(vector<double> array) {
    double sum = 0;
    for (int i = 0; i < array.size(); i++) {
        sum += array[i];
    }
    return sum / array.size();
}

int main () {
    vector <double> arrayOfNumbers;
    bool x = true;
    while (x = true) {
        double num;
        string input;
        cout << "Enter a number: " << endl;
        cin >> num;
        arrayOfNumbers.push_back(num);
        cout << "Are you finished? (y/n)" << endl;
        cin >> input;
        if (input == "y") {
            break;
        }
    }
    cout << "The average of those numbers is: "  << average(arrayOfNumbers) << endl;;
}
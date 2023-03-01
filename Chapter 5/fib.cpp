#include <iostream>
using namespace std;

int main () { 
    int previous = 0;
    int next = 1;
    int counter = 0;
    cout << previous << ", ";
    while (counter < 100) {
        cout << next << ", ";
        int current = next;
        next = previous + next;
        previous = current;
        counter++;
    }
}
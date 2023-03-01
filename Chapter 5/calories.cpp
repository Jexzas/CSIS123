#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    vector<int> days = {232, 90, 155, 250, 278, 100, 275};
    int week = 7;
    int calsTotal = 0;
    for (int i : days) {
        calsTotal += i;
    }
    double avg = calsTotal / (double)week;
    cout << "Congrats. You burned an average of " << fixed << setprecision(2) << avg << " calories this week.";
}
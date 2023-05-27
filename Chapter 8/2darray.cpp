#include <iostream>
using namespace std;

int main() {
    int row = 3;
    int col = 4;
    string array[row][col] = {{"Cow", "Horse", "Buffalo", "Goat"}, {"Brown", "Black", "Red", "Spotted"}, {"Adult", "Infant", "Adolescent", "Elderly"}};
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << endl;
        }
    }
}
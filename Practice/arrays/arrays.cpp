#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin;
    fin.open("input.txt");
    string arrayOf[8];
    for (int i = 0; i < sizeof(arrayOf); i++) {
        fin >> arrayOf[i];
    }
    fin.close();
    for (int i = 0; i < sizeof(arrayOf); i++) {
        cout << arrayOf[i] << endl;
    }

    return 0;
}
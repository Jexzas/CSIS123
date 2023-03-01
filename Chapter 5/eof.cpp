// I don't really know where we're going with this
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {

    ifstream fin;
    fin.open("garbage.txt");
    string txt;
    fin >> txt;
    char c;
    while (getline(fin, txt)) {
        cout << txt;
        if (fin.eof()) {
             break;
        }
    }

}
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fout;
    string stuff;
    cout << "Hey, enter some text: " << endl;
    getline(cin, stuff, 100);

    fout.open("output.txt");

    fout << stuff;
    fout.close();
    cout << "Okay, we've saved your note." << endl;
}
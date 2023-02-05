#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cout << "Please enter a filename: " << endl;
    getline(cin, filename);
    string filedata;
    cout << "What do you want to store in the file?" << endl;
    getline(cin, filedata);
    ofstream myfile;
    myfile.open(filename + ".txt");
    myfile << filedata;
    myfile.close();
}
#include <iostream>
#include <fstream> 
#include <iomanip>

using namespace std;

int main() {
    // Write your main here
    string filename;
    ifstream fin;
    ofstream fout;
    cout << "Please enter the filename for the employee salaries: " << endl;
    cin >> filename;
    // I would probably rather make this a for loop but we're not there yet. 
    string lname1, fname1, lname2, fname2, lname3, fname3;
    double salary1, raise1, salary2, raise2, salary3, raise3;
    fin.open(filename);
    fin >> lname1 >> fname1 >> salary1 >> raise1 >> lname2 >> fname2 >> salary2 >> raise2
    >> lname3 >> fname3 >> salary3 >> raise3;
    fin.close();
    fout.open("Ch3_Ex5Output.dat");
    fout << fname1 << " " << lname1  << " " << fixed << setprecision(2) << (salary1 + (salary1 * raise1 / 100)) << endl;
    fout << fname2 << " " << lname2 << " " << fixed << setprecision(2) << (salary2 + (salary2 * raise2 / 100)) << endl;
    fout << fname3 << " " << lname3 << " " << fixed << setprecision(2) << (salary3 + (salary3 * raise3 / 100)) << endl;
    fout.close();
    return 0;
}

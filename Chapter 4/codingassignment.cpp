#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    // Write your main here
    double withdraw;
    double balance;
    ifstream fin;
    ofstream fout;
    fin.open("Ch4_Ex15_Data.txt");
    fin >> balance;
    fin.close();
    cout << "Hello! Your balance is $" << balance << ". How much money are you withdrawing today?" << endl;
    cin >> fixed >> setprecision(2) >> withdraw;
    fout.open("Ch4_Ex15_Output.txt");
    if (withdraw > 300 && withdraw <= 500) {
        cout << "The service fee will be: $" << fixed << setprecision(2) << (withdraw - 300) * .04 << endl;
      withdraw += (withdraw - 300) * .04;
      
    }
    if (withdraw > 500) {
        cout << "You cannot withdraw that much money. Our daily limit is $500, including service fee. Your balance was unchanged.";
        fout << fixed << setprecision(2) << balance;
    } else if (withdraw <= 500) {
        if (withdraw <= balance) {
            cout << "Okay. I'm dispensing your money. Your new balance is $" << fixed << setprecision(2) << balance - withdraw << endl;
            fout << fixed << setprecision(2) << balance - withdraw;
        } else if (withdraw > balance && balance > 0) {
            cout << "Okay, but you're going to incur a $25 overdraft fee. Your new balance is $" << fixed << setprecision(2) << balance - withdraw - 25;
            fout << fixed << setprecision(2) << balance - withdraw - 25;
        } else if (balance <= 0) {
            cout << "You may not withdraw any money. Your balance is $" << fixed << setprecision(2) << balance << endl;
            fout << fixed << setprecision(2) << balance;
        }
    }


    fout.close();

    return 0;
}

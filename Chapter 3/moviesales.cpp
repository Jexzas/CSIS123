#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    string movieName;
    double adultTicketPrice;
    double childTicketPrice;
    int adultTicketsSold;
    int childTicketSold;
    double percentDonated;
    double grossAmount;
    double amountDonated;
    double netSaleAmount;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter the movie name: " << endl;
    getline(cin, movieName);
    cout << endl;
    cout << "Enter the price of an adult ticket: " << endl;
    cin >> adultTicketPrice;
    cout << endl;
    cout << "Enter the price of a child ticket: " << endl;
    cin >> childTicketPrice;
    cout << endl;

    cout << "Enter the number of adult tickets sold: " << endl;
    cin >> adultTicketsSold;
    cout << "Enter the amount of child tickets sold: " << endl;
    cin >> childTicketSold;
    cout << "Enter the percentage of donation: " << endl;
    cin  >> percentDonated;
    cout << endl;

    grossAmount = (adultTicketPrice * adultTicketsSold) + (childTicketPrice * childTicketSold);
    amountDonated = (grossAmount * percentDonated) / 100;
    netSaleAmount = grossAmount - amountDonated;


    cout << setfill('.') << left << setw(35) << "Movie Name: " << right << " " << movieName << endl;
    cout << left << setw(35) << "Number of tickets sold: " << setfill(' ') << right << setw(10) << adultTicketsSold + childTicketSold << endl;
    cout << setfill('.') << left << setw(35) << "Gross Amount: " << setfill(' ') << right << " $" << setw(8) << grossAmount << endl;
    cout << setfill('.') << left << setw(35) << "Percentage of gross amount donated: " << setfill(' ') << right << setw(9) << percentDonated << "%" << endl;
    cout << setfill('.') << left << setw(35) << "Amount Donated: " << setfill(' ') << right << " $" << amountDonated << endl;
    cout << setfill('.') << left << setw(35) << "Net sale: " << setfill(' ') << right << " $" << netSaleAmount << endl;
    return 0;


}
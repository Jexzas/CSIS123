  
#include <iostream>
#include <iomanip>

using namespace std;
 
int main ()  
{
	double loanAmount;
	double interestRate;
    double interestRatePerMonth;
	double monthlyPayment;
    double paymentPrincipal;
    double totalInterest;
	int months;

	cout << fixed << showpoint;
	cout << setprecision(2);

	cout << "Enter the loan amount: ";
	cin >> loanAmount;
	cout << endl;

    cout << "Enter the interest rate per year: ";
    cin >> interestRate;
    cout << endl;

    interestRatePerMonth = (interestRate / 100) / 12;

    cout << "Enter the monthly payment (must be greater than $" << fixed << setprecision(2) << loanAmount * interestRatePerMonth << "): " << endl;
    cin >> monthlyPayment;

    if (monthlyPayment <= loanAmount * interestRatePerMonth)
    {
        cout << "Monthly payment is too low. The loan cannot be repaid."
            << endl;
        return 1;
    }

    months = 0;

    while (loanAmount > 0)
    {
        if (loanAmount - (monthlyPayment - (loanAmount * interestRatePerMonth)) < 0) {
          monthlyPayment = (loanAmount + (loanAmount * interestRatePerMonth));
        }
        paymentPrincipal = monthlyPayment - (loanAmount * interestRatePerMonth);
        totalInterest += (loanAmount * interestRatePerMonth);
        loanAmount = loanAmount - paymentPrincipal;
        cout << totalInterest << endl;
        months++;
    }

    cout << "It will take " << months << " months to repay the loan.";
    cout << "Your final payment was $" << fixed << setprecision(2) << monthlyPayment << endl;
    cout << "You paid $" << fixed << setprecision(2) << (totalInterest) << " in total interest."
         << endl;

	return 0;
}

#include <iostream>
#include <fstream>
#include <iomanip>
 
using namespace std;



  //Function prototypes
void initialize(int&, double&);
void printResults(double avg, int sum);

int main ()
{
  ifstream fin;
  ofstream fout;
  int counter = 1;
  int number;
  int sum;
  double avg;
  
  fin.open("Ch6_Ex20Data.txt");
  fout.open("Ch6_Ex20Out.txt");
  initialize(sum, avg);
  
  while (true) {
    fin >> number;
    fout << number << " ";
    if (counter % 10 == 0) {
        fout << endl;
    }
    sum += number;
    counter++;
    if (fin.peek() == EOF) {
      break;
    }
  }
  avg = sum / counter;
  fout << endl;

  printResults(avg, sum);
  fin.close();
  fout.close();
  return 0;
}

void initialize(int& sum, double& avg) {
  avg = 0;
  sum = 0;
}



void printResults(double avg, int sum) {
  ofstream fout;
  fout.open("Ch6_Ex20Out.txt", ios::app);
  fout << "The average of the given numbers is: " << avg << endl;
  fout << "The sum of them is: " << sum << endl;
} 




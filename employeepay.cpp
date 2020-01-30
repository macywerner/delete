#include <iostream>
using namespace std;

/*An employee is paid at a rate of $16.00 per hour for regular hours worked in a week. Any hours over that
are paid at the overtime rate of one and one-half times that. From the worker’s gross pay, 6% is withheld
for Social Security tax, 14% is withheld for federal income tax, 5% is withheld for state income tax, and
$10 per week is withheld for medical insurance. Write a program that will read in the number of hours
worked in a week as input and that will then output the worker’s gross pay, each withholding amount, and
the net take-home pay for the week.*/

int main(int argc, char **argv){

  //intialize variables
  int hoursWorked;
  int overtimeHours;
  int grossPay;
  double ssTax;
  double fIncomeTax;
  double sIncomeTax;
  int medInsurance = 10; //always 10
  double netPay;


  //prompt user for hours hours worked
  cout << "Enter the amount of hours worked in a week: ";
  cin >> hoursWorked;

  //find overtime hours, assuming 40 hours is the regular hours worked
  overtimeHours = hoursWorked - 40;

  //find grossPay
  grossPay = (40 * 16) + (hoursWorked * (16 + (16 * (1/2))));

  //from grosspay calculate tax
  ssTax = grossPay * 0.06;
  fIncomeTax = grossPay * 0.14;
  sIncomeTax = grossPay * 0.05;

  //find netPay by subtracting all tax and insurance
  netPay = grossPay - (ssTax + fIncomeTax + sIncomeTax + medInsurance);

  //print each amount 
  cout << "Your gross pay is $" << grossPay << "." << endl;
  cout << "Social Security Tax is $" << ssTax << "." << endl;
  cout << "Federal Income Tax is $" << fIncomeTax << "." << endl;
  cout << "State Income Tax is $" << sIncomeTax << "." << endl;
  cout << "Medical Insurance is $" << medInsurance << "." << endl;
  cout << "Your net pay is $" << netPay << "." << endl;

  return 0;

}

#include <iostream>
using namespace std;

/*It is difficult to make a budget that spans several years, because prices are not stable. If your company
needs 200 pencils per year, you cannot simply use this year’s price as the cost of pencils two years from
now. Because of inflation the cost is likely to be higher than it is today. Write a program to gauge the
expected cost of an item in a specified number of years. The program asks for the cost of the item, the
number of years from now that the item will be purchased, and the rate of inflation. The program then
outputs the estimated cost of the item after the specified period. Have the user enter the inflation rate as a
percentage, such as 5.6 (percent). Your program should then convert the percentage to a fraction, such
as 0.056, and should use a loop to estimate the price adjusted for inflation. (Hint: Use a loop.)*/

int main(int argc, char **argv){
  //intialize variables
  double cost;
  int years;
  double rateOfInflation;
  double inflation;
  double inflationRise;


  //prompt user for input of cost, years, and rate of inflation
  cout << "Enter the current cost of the item: ";
  cin >> cost;

  cout << "Enter the number of years from now the item will be purchased: ";
  cin >> years;

  cout << "Enter the rate of inflation (as a percentage): ";
  cin >> rateOfInflation;

  //convert rate of inflation
  inflation = rateOfInflation / 100;

  //calculate cost over the amount of years using a for loop
  for (int i = 0; i < years; ++i){
    inflationRise = cost * inflation;
    cost = cost + inflationRise;
  }

  //print estimated cost 
  cout << "In " << years << " years, the estimated cost of the item is $" << cost << "." << endl;

  return 0;
}

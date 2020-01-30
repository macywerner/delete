#include <iostream>
using namespace std;

/*A metric ton is 35,273.92 ounces. Write a program that will read the weight (console input) of a package
of breakfast cereal in ounces and output the weight in metric tons as well as the number of boxes needed
to yield one metric ton of cereal.*/

int main(int argc, char **argv){

  //intialize variables
  double ounces;
  double tons;
  int numOfBoxes;

  //prompt user for input
  cout << "Enter the weight of a package of breakfast cereal in ounces: ";
  cin >> ounces;

  //convert from ounces to metric tons
  tons = ounces / 35,273.92;

  //equation to find amount of boxes need for one metric ton
  numOfBoxes = 35,273.92 / ounces;

  cout << "The cereal is " << tons << " metric tons." << endl;
  cout << numOfBoxes << " boxes are needed to yield one metric ton of cereal." << endl;

  return 0;

}

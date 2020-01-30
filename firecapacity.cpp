#include <iostream>
using namespace std;

/*Write a program that determines whether a meeting room is in violation of fire law regulations regarding
the maximum room capacity. The program will read in the maximum room capacity and the number of
people to attend the meeting. If the number of people is less than or equal to the maximum room capacity,
the program announces that it is legal to hold the meeting and tells how many additional people may
legally attend. If the number of people exceeds the maximum room capacity, the program announces that
the meeting cannot be held as planned due to fire regulations and tells how many people must be excluded
in order to meet the fire regulations.*/

int main(int argc, char **argv){

  //initialize variables
  int max;
  int numOfAttendees;
  int numOfPeople;

  //prompt for input
  cout << "Enter the maximum room capacity: ";
  cin >> max;

  cout << "Enter the number of people to attend the meeting: ";
  cin >> numOfAttendees;

  //if statement for selected output
  //number of people attedning exceed max
  if (numOfAttendees > max){
    numOfPeople = numOfAttendees - max;

    cout << "The meeting cannot be held as planned due to fire regulations." << endl;
    cout << numOfPeople << " people must be excluded for the meeting to be held." << endl;
  }else {
    //number of attendees does not exceed max
    //find how many more people can attend
    numOfPeople = max - numOfAttendees;

    cout << "With the amount of people currently attending, it is legal to hold the meeting." << endl;
    cout << numOfPeople << " more people can legally attend." << endl;
  }

  return 0;
}

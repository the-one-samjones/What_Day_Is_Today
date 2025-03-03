#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
  string saturday;
  string sunday;
  string wednesday;
  string friday;
  string userIn;
  int dayType;

    cout << "Enter current day of the week: ";                //Prompt user to enter current day of the week
    cin >> userIn;                                            //Get user input
    for (auto& x : userIn) {
        x = tolower(x);
    }
    if ((userIn == "saturday") || (userIn == "sunday") ) {    //If it's a weekend, the day type is 1
        dayType = 1;
    }
    else if (userIn == "wednesday") {                         //If it's wednesday, the day type is 2
        dayType = 2;
    }
    else if (userIn == "friday") {                            //If it's friday, day type is 3
        dayType = 3;
    }
    else {                                                    //If it's none of the above, it's a weekday
        dayType = 4;    
    }
    switch(dayType) {                                         //Initiates the switch based on what number dayType is
        case 1:                                               //and follows one of 4 cases, outputing something different for
        cout << "It's the weekend!" << endl;                  //each special day
        break;

        case 2:
        cout << "Hump DAAAAAAAY" << endl;
        break;

        case 3:
        cout << "TGIF!" << endl;
        break;

        case 4:
        cout << "It's a weekday!" << endl;
        break;
    }
}
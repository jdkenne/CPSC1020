/**************************
Josh Kennerly
CPSC 1020 Fall19
Section 01
jdkenne
Dr. Yvon Feaster
*************************/
#include "functions.hpp"


void readData(fstream& input, vector<CalendarEvent>& good, vector<CalendarEvent>& bad) {
    int month = 0, day = 0, year = 0, hour = 0, min = 0, endLoop = 1;

    string eventName;

    string temp;
    while(endLoop == 1) {
      while(!(input >> month)) {
        input.clear();
        input >> temp;
        eventName+= temp;
        eventName.append(" ");
      }

      //Reads in the numbers to the appropriate variables
      input.ignore(1, '/');

      input >> day;
      input.ignore(1, '/');

      input >> year;

      input >> hour;
      input.ignore(1, ':');

      input >> min;

      CalendarEvent tempCalEvent(month, day, year, hour, min, eventName);
      /*Looks to see if the event time and date are valid to push_back
      that info to the correct vector*/
      if( (tempCalEvent.isEventDateValid() == false) || (tempCalEvent.isEventTimeValid() == false) ) {
          bad.push_back(tempCalEvent);
      } else {
          good.push_back(tempCalEvent);
      }
      eventName.clear();
      getline(input, temp);
      int check = input.peek();
      if(check == EOF) {
          endLoop = 2;
      }
    }
}


void checkArguments(int argc) {
  if(argc != 4) {
    cout << "You did not provide the correct number of command line arguments!" << endl;
    exit(0);
  }
}


void isOpen(fstream& file, char* cp) {
  if(file.fail()) {
    cout << "The file, " << cp << " did not open. Pls try again" << endl;
  }
}

void vectorSort(vector<CalendarEvent>& vec) {

    if(vec.size() == 0) {
      return;
    }
    CalendarEvent* temp = new CalendarEvent();
    vector<CalendarEvent>::iterator i = vec.begin();
    int numSwaps = 1;
    while(numSwaps != 0) {

        numSwaps = 0;

      for(i = vec.begin(); i != (vec.end() - 1); i++) {
        //Sorts by different years first
        if( i->getDate().getYear() > (i+1)->getDate().getYear() ) {
          *temp = *i;
          *i = *(i+1);
          *(i+1) = *temp;
          numSwaps++;
        } else if ( i->getDate().getYear() == (i+1)->getDate().getYear() ) {

          //If the years are the same, it will sort by months
          if( i->getDate().getMonth() > (i+1)->getDate().getMonth() ) {
            *temp = *i;
            *i = *(i+1);
            *(i+1) = *temp;
            numSwaps++;
          } else if( i->getDate().getMonth() == (i+1)->getDate().getMonth() ) {

            //If the year and month are the same, it will sort by days
            if( i->getDate().getDay() > (i+1)->getDate().getDay() ) {
              *temp = *i;
              *i = *(i+1);
              *(i+1) = *temp;
              numSwaps++;
            } else if ( i->getDate().getDay() == (i+1)->getDate().getDay() ) {

              //If the day, year and month are the same, it will sort by hours
              if( i->getTime().getHour() > (i+1)->getTime().getHour() ) {
                *temp = *i;
                *i = *(i+1);
                *(i+1) = *temp;
                numSwaps++;
              } else if ( i->getTime().getHour() == (i+1)->getTime().getHour() ) {

                //If the hour, day, year and month are the same, it will sort by minutes
                if( i->getTime().getMinute() > (i+1)->getTime().getMinute() ) {
                  *temp = *i;
                  *i = *(i+1);
                  *(i+1) = *temp;
                  numSwaps++;
                }
              }
            }
          }
        }
      }
    }
    delete temp;
}

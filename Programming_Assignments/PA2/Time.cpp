/**************************
Josh Kennerly
CPSC 1020 Fall19
Section 01
jdkenne
Dr. Yvon Feaster
*************************/
#include "Time.hpp"

Time::Time(int hours, int mins) {
  this->hour = hours;
  this->min = mins;
}

void Time::setHour(int h) {
  hour = h;
}

void Time::setMinute(int m) {
  min = m;
}

void Time::setTime(int h, int m) {
  min = m;
  hour = h;
}

int Time::getHour() const {
  return hour;
}

int Time::getMinute() const {
  return min;
}

void Time::printTime(fstream& out) const {
  if( (hour > 12) && (min > 10) ) {
    out << (hour - 12) << ":" << min << " PM" << endl;
  } else if ( (min < 10) && (hour > 12) ) {
    out << (hour - 12) << ":0" << min << " PM" << endl;
  } else if ( (hour < 12) && (min > 10) ) {
    out << hour << ":" << min << " AM" << endl;
  } else if ( (hour < 12) && (min < 10) ) {
    out << hour << ":0" << min << " AM" << endl;
  } else if ( (hour == 12) && (min == 0) ) {
    out << hour << ":00" << " Noon" << endl;
  } else if ( (hour == 12) && (min < 10) ) {
    out << hour << ":0" << min << " PM" << endl;
  } else if ( (hour == 12) ) {
    out << hour << ":" << min << " PM" << endl;
  }
}


bool Time::isTimeValid() {
  if( (hour > 24) || (min > 59) || (hour < 0) || (min < 0) )
    {
      cout << "Entered hour is " << hour << endl;
      cout << "Entered minute is " << min << endl;
      cout << "This is an invalid time! Pls enter a valid time!" << endl;
      return false;
    }
  return true;
}

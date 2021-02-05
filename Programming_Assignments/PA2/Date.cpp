/**************************
Josh Kennerly
CPSC 1020 Fall19
Section 01
jdkenne
Dr. Yvon Feaster
*************************/
#include "Date.hpp"


Date::Date(int month, int day, int year) {
  this->month = month;
  this->day = day;
  this->year = year;
}

void Date::setMonth(int m) {
  month = m;
}

void Date::setYear(int y) {
  year = y;
}

void Date::setDay(int d) {
  day = d;
}

void Date::setDate(int d, int m, int y) {
  day = d;
  month = m;
  year = y;
}

string Date::getStrMonth() {
  return ARRAY[getMonth()];
}

int Date::getMonth() const {
  return month;
}

int Date::getDay() const {
  return day;
}

int Date::getYear() const {
  return year;
}

void Date::printDate(fstream& out) {
  out << getStrMonth() << " " << getDay() << ", " << getYear();
}

//Checks to see if the date is valid
bool Date::isDateValid() {
    if( (getYear() < 1900) && (getYear() > 2020) ) {
      if( (getMonth() == 2) && (isLeapYear() != true) ){
        if((getDay()) != 28) {
          return false;
        } else if( (getMonth() == 2) && (isLeapYear() != false) ){
          return false;
        }
      } else if( ( (getMonth() % 2) == 1) && (getDay() < 1) && (getDay() > 31) ) {
        return false;
      } else if( ( (getMonth() % 2) == 0) && (getDay() < 1) && (getDay() > 30) ) {
        return false;
      }

   }
   return true;
}

//Checks to see if it is a leap year
bool Date::isLeapYear() {
  if( (year % 400 == 0 || year % 4 == 0) && (year % 100 != 0)) {
    return true;
  }
  return false;
}

const string Date::ARRAY[13] = {
  "\0", "January", "February", "March", "April", "May", "June",
  "July", "August", "September", "October", "November", "December"
};

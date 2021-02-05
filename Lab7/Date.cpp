/********************\
Joshua Kennerly
jdkenne
Lab 7
Lab Section 003
Alex and Nushrat
\*********************/
#include "Date.h"

// Just an array of strings. Access a month using:
// Date::MONTHS[0] ---> "JANUARY"
const string Date::MONTHS[] = {
  "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY",
  "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER",
  "NOVEMBER", "DECEMBER"
};

Date::~Date() {}

// Implimented constructor
Date::Date(int month, int day, int year)
{
	this->month = month;
  	this->day = day;
  	this->year = year;
}

// Compare function which is true if lhs is earlier than rhs
bool Date::compare(Date& lhs, Date& rhs) {
	if(lhs.year < rhs.year) {
      		return true;
  	}
  	else if(lhs.year == rhs.year) {
   		if(lhs.month < rhs.month) {
      			return true;
  		}
		if(lhs.month == rhs.month)
		{
			if(lhs.day < rhs.day) {
				return true;
			}
		}
	}
}

//Getters and Setters
int Date::get_month() const {
  return month;
}
void Date::set_month(int m) {
  month = m;
}
int Date::get_day() const {
    return day;
}
void Date::set_day(int d) {
  day = d;
}
int Date::get_year() const {
  return year;
}
void Date::set_year(int y) {
  year = y;
}


// Returns a well formatted string representation of this Date
string Date::print() {
  	stringstream ss;
  	ss << left << setw(10) << MONTHS[month - 1];
	  ss << left << setw(3) << day;
  	ss << left << setw(5) << year;
  	return ss.str();
}

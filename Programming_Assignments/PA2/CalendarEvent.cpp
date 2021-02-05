/**************************
Josh Kennerly
CPSC 1020 Fall19
Section 01
jdkenne
Dr. Yvon Feaster
*************************/
#include "CalendarEvent.hpp"


CalendarEvent::CalendarEvent(int month, int day, int year, int hour, int minute, string eventName) {
  this->calDate.setMonth(month);
  this->calDate.setDay(day);
  this->calDate.setYear(year);
  this->calTime.setHour(hour);
  this->calTime.setMinute(minute);
  this->eventName = eventName;
}

void CalendarEvent::printCalendar(fstream& out) {
  out << "***************************************" << endl;
  out << getEvent() << endl;
  getDate().printDate(out);
  out << endl;
  getTime().printTime(out);
  out << "***************************************" << endl;
}

bool CalendarEvent::isEventTimeValid() {
  if( calTime.isTimeValid() == true) {
  return true;
  }
  return false;
}

bool CalendarEvent::isEventDateValid() {
  if( calDate.isDateValid() == true) {
    return true;
  }
  return false;
}


string CalendarEvent::getEvent() const {
  return eventName;
}

Date CalendarEvent::getDate() const {
  return calDate;
}

Time CalendarEvent::getTime() const {
  return calTime;
}

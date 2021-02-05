/**************************
Josh Kennerly
CPSC 1020 Fall19
Section 01
jdkenne
Dr. Yvon Feaster
*************************/
#ifndef CALENDAREVENT_HPP
#define CALENDAREVENT_HPP

#include "Date.hpp"
#include "Time.hpp"


class CalendarEvent{

  private:
    string eventName;
    Time calTime;
    Date calDate;

  public:

    //Constructs our CalendarEvent class values
    CalendarEvent(int month = 1, int day = 1, int year = 1990, int hour = 0, int minute = 0, string eventName = "Default");

    //Prints out of calendar to an output file
    void printCalendar(fstream& out);

    /*Checks to see if the event Date is valid using the Date class's
    funciton to check to see if the date is valid*/
    bool isEventDateValid();

    /*Checks to see if the event time is valid using the Time class's
    funciton to check to see if the time is valid*/
    bool isEventTimeValid();

    //Returns the eventName
    string getEvent() const;

    //Returns our Date class so we can use its members in the sort funciton
    Date getDate() const;

    //Returns our Time class so we can use its members in the sort function
    Time getTime() const;

};

#endif

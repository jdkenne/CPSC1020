/**************************
Josh Kennerly
CPSC 1020 Fall19
Section 01
jdkenne
Dr. Yvon Feaster
*************************/
#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>


using namespace std;

class Date
{
  private:
    int month;
    int day;
    int year;

  public:

    //Constructs our Date class values
    Date(int month = 1, int day = 1, int year = 1990);

    //Sets the number of months to the value passed into the constructor
    void setMonth(int);

    //Sets the number of years to the value passed into the constructor
    void setYear(int);

    //Sets the number of days to the value passed into the constructor
    void setDay(int);

    //Sets the date based off what's passed into the constructor
    void setDate(int, int, int);

    //Returns the string of the month
    string getStrMonth();

    //Returns the months from the constructor
    int getMonth() const;

    //Returns the days from the constructor
    int getDay() const;

    //Returns the years from the constructor
    int getYear() const;

    //Prints out the date class members
    void printDate(fstream&);

    //Checks to see if the date is valid
    bool isDateValid();

    //Checks to see if it is a leap year
    bool isLeapYear();

    //Sets our number of months to name of the corresponding month
    static const string ARRAY[13];

};

#endif

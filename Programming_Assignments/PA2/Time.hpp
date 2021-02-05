/**************************
Josh Kennerly
CPSC 1020 Fall19
Section 01
jdkenne
Dr. Yvon Feaster
*************************/
#ifndef TIME_HPP
#define TIME_HPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

class Time
{
	private:
		int hour;
		int min;

	public:
		//Constructs our Time class values
		Time(int hours = 0, int mins = 0);

		//Sets the number of hours to the value passed into the constructor
		void setHour(int);

		//Sets the number of minutes to the value passed into the constructor
		void setMinute(int);

		//Sets the time based off what's passed into the constructor
		void setTime(int,int);

		//Returns the hours from the constructor
		int getHour() const;

		//Returns the minutes from the constructor
		int getMinute() const;

		//Prints the time, accounting for the time of day and for single digit minutes
		void printTime(fstream&) const;

		/*Check to see if the time is between 0 and 24 hrs and between
		0 and 59 mins*/
		bool isTimeValid();
};

#endif

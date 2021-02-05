/**************************
Josh Kennerly
CPSC 1020 Fall19
Section 01
jdkenne
Dr. Yvon Feaster
*************************/
#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include "CalendarEvent.hpp"

//Reads in data from the input files
void readData(fstream& f, vector<CalendarEvent>& good, vector<CalendarEvent>& bad);

//Checks the number of command line arguments given
void checkArguments(int argc);

//Checks to see if the file is open
void isOpen(fstream& file, char* cp);

//This functions sorts the vector by time and date
void vectorSort(vector<CalendarEvent>& vec);

#endif

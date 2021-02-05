/***********************\
Josh Kennerly
jdkenne
Lab 6
Section 003
Nushrat / Alex          
\***********************/
#include <string.h>
#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

typedef struct Date
{
    int month, day, year;
} date_t;

typedef struct Student
{
    string firstName;
    string lastName;
    date_t bday;

} student_t;

void ascNameSort(Student*);

void decNameSort(Student*);

void printData(Student*);

void readData(ifstream&, Student* );

/********************\
Joshua Kennerly
jdkenne
Lab 7
Lab Section 003
Alex and Nushrat
\*********************/


#include "Date.h"


int main(int argc, char* argv[])
{
	ifstream input(argv[1]);
  ofstream output(argv[2]);

  	int i = 0;

	//Checks number of command line arguments
  	if(argc != 3) {
    		cout << "You did not enter the correct number of arguments";
    		return 0;
  	}

	//Our vector of type Date
 	vector<Date> vectorDate;

  	int month, day, year, loop;

  	input >> loop;
  	vectorDate.reserve(loop);

  	while(input >> month >> day >> year) {
    		Date date(month, day , year);
    		vectorDate.emplace_back(date);
  	}

	Date og;
	vectorDate.push_back(og);

	//Sorts each element in the vector
  	sort(vectorDate.begin(), vectorDate.end(), Date::compare);

	//Prints out the dates to the output file
	for(i=0; i < (loop+ 1); i++) {
    		output << vectorDate.at(i).print() << endl;
  	}

  	vectorDate.clear();
  	input.close();
  	output.close();

  	return 0;
}

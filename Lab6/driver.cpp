/**********************\
Josh Kennerly
jdkenne
Lab 6
Section 003
Nushrat / Alex          
\***********************/
#include "functions.h"

using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 2)
  	{
    		cout << "You did not enter the correct number of arguments.\n";
   	 	return 0;
  	}
  	student_t student[10];
  	ifstream inFile;
  	inFile.open(argv[1]);
  	if (inFile.fail())
  	{
    		cout << "The file failed to open, please try again.\n";
    		return 0;
  	}
  	readData(inFile, student);
  	ascNameSort(student);
  	printData(student);
  	decNameSort(student);
  	printData(student);
  	inFile.close();
 	return 0;
}

/***********************\
Josh Kennerly
jdkenne
Lab 6
Section 003
Nushrat / Alex          
\***********************/
#include "functions.h"

//This function sorts the last names of each person in ascending order
void ascNameSort(student_t* student)
{
	student_t temp;
	int numSwaps = -1;
	while(numSwaps != 0)
	{
		numSwaps = 0;
    		for(int i = 0; i < 9; i++)
    		{
      			if(student[i].lastName > student[i+1].lastName)
      			{	
          			temp = student[i];
          			student[i] = student[i+1];
          			student[i+1] = temp;
          			numSwaps++;
      			}
    		}
  	}

}

//This function sorts the last name of each person in descending order
void decNameSort(student_t* student)
{
	student_t temp;
  	int numSwaps = -1;
  	while(numSwaps != 0)
  	{
   		numSwaps = 0;
   		for(int i = 0; i < 9; i++)
   		{
    			if(student[i].lastName < student[i+1].lastName) 
    			{
				temp = student[i];
				student[i] = student[i+1];
				student[i+1] = temp;
				numSwaps++;
    			}	
   		} 
  	}	    
}

//This function prints out the data from the struct members into an output file
void printData(student_t* student)
{
	ofstream outFile;
	outFile.open("out.txt", ofstream::app);
	for(int i = 0; i < 10; i++) 
	{
		outFile << student[i].lastName << " " << student[i].firstName << " " <<  student[i].bday.month << " ";
		outFile << student[i].bday.day << " " << student[i].bday.year << endl;
	}
	outFile << "\n\n";
	outFile.close();	
}

//This function reads in the data from the input file into the struct members
void readData(ifstream& file, student_t* student)
{
	for(int i = 0; i < 10; i++)
  	{
    		file >> student[i].firstName;
    		file >> student[i].lastName;
    		file >> student[i].bday.month;
    		file >> student[i].bday.day;
    		file >> student[i].bday.year;

  	}	
}

/***********************\
*Joshua Kennerly        *
*CPSC 1020 Fall 2019    *
*jdkenne                *
*Instructer: Dr. Feaster
\***********************/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct matrixInfo
{
    char** words;
    char* letters;
    int rows, cols;
    int numWords;

} matrixInfo_t;

/*This function reads the information from the a file. I included a
 *sample file for your use. */
void readData(FILE*, matrixInfo_t*);

/*This function contains the print statements that will give the user
 *directions. See the sample run in the document. */
void printDirections(matrixInfo_t*);


/*This function is used to print the matrix complete with the characters.
 * the following is the format.
 +-----+-----+-----+
 |  s  |  h  |  o  |
 +-----+-----+-----+
 |  h  |  u  |  t  |
 +-----+-----+-----+
 |  i  |  g  |  h  |
 +-----+-----+-----+
 */
void printMatrix(matrixInfo_t*);

/*This function is used to read the user input*/
int readUserInput(matrixInfo_t*);

/*This function is used to determine if the word
 *the user entered is one of the word in the data
 *file.  If it is one of the words in the data
 *1 is returned and 0 otherwise*/
int checkWords(char*, matrixInfo_t*);

/*This allocates memory for a 1D array for the letters
 *that will displayed in the matrix*/
void allocateLetters(matrixInfo_t*);

/*This allocates memory for a 2D array to hold the possible
 *words in the matrix.  In the data file you will be given
 *the number of words. so you will first allocate for that
 *number of pointers.  You will then need to allocate the
 *space for each word.  But how do you know how large the
 *word may be?  Think about what is the largest possible
 *size a word in the matrix could be. Allocate that size
 *for each word.*/
void allocateWords(matrixInfo_t*);

/*This function reads the letters from the data file for
 *the matrix*/
void readLetters(FILE*, matrixInfo_t*);

/*This function reads the words from the data file*/
void readWords(FILE*, matrixInfo_t*);

/*This function checks to make sure the appropriate number of
 *command line arguements are used when running. The program
 *should have one argument for <executable> <file name>*/
void checkArguments(int);

/*This function gives the memory back to the operating system.
 *This is used for a 1D matrix*/
void free1DMemory(matrixInfo_t*);

/*This function gives the memory back to the operating system.
 *This is used for a 2D matrix*/
void free2DMemory(matrixInfo_t*);

#endif

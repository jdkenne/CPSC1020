/************************\
*Joshua Kennerly         *
*CPSC 1020 Fall 2019     *
*jdkenne                 *
*Instructer: Dr. Feaster *
\************************/
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <time.h>

void readData(FILE* fp, matrixInfo_t* matrix) {
  fscanf(fp, "%d %d", &matrix->rows, &matrix->cols);
  allocateLetters(matrix);
  readLetters(fp, matrix);
  fscanf(fp, "%d", &matrix->numWords);
  allocateWords(matrix);
  readWords(fp, matrix);
}

void printDirections(matrixInfo_t* matrix) {
 printf("In the above matrix,");
 printf(" there are at least %d words.\n", matrix->numWords);
 printf("You have to find as many of these words as possible.\n");
 printf("The letters of each word must touch each other.\n");
 printf("Type each word, and when done, type Quit.\n");
}

void printMatrix(matrixInfo_t* matrix) {
  int f = 0;
  for(int i = 0; i < matrix->rows; i++) {
    int c;

    printf("\t\t\t");
    for(c = 0; c < matrix->cols; c++) {
      printf("+-----");
      if(c == )
    }

  }
}
int readUserInput(matrixInfo_t* matrix) {

}

int checkWords(char* cp, matrixInfo_t* matrix) {

}

void allocateLetters(matrixInfo_t* matrix) {
  int x = matrix->cols * matrix->rows;
  matrix->letters = (char*)malloc(x*sizeof(char));
}

void allocateWords(matrixInfo_t* matrix) {
  int x = matrix->cols * matrix->rows;
}

void readLetters(FILE* fp, matrixInfo_t* matrix) {

}

void readWords(FILE* fp, matrixInfo_t* matrix) {

}

void checkArguments(int x) {
  if (x != 2) {
	printf("You did not provide the correct amount of arguments");
 }
}

void free1DMemory(matrixInfo_t* matrix) {
  free(matrix->letters);
}

void free2DMemory(matrixInfo_t* matrix) {
  for (int j = matrix->cols; j > 0; j--) {
      free(matrix->words[j]);
    }
    free(matrix->words);
}

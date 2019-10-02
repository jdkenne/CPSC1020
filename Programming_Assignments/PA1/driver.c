/************************\
*Joshua Kennerly         *
*CPSC 1020 Fall 2019     *
*jdkenne                 *
*Instructer: Dr. Feaster *
\************************/
#include "functions.h"

int main (int argc, char* argv[]) {
  checkArguments(argc);
  FILE* fp = fopen(argv[1], "r");
  matrixInfo_t matrix;
  readData(fp, &matrix);
  printMatrix(&matrix);
  printDirections(&matrix);
  time_t begin = time(NULL);
  readUserInput(&matrix);
  time_t fin = time(NULL);
  free1DMemory(&matrix);
  free2DMemory(&matrix);
  return 0;
}

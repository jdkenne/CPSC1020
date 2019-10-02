/*********************
Josh Kennerly
CPSC 1021, Lab Section 003, F19
jdkenne@clemson.edu
Feaster
*********************/
#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main()
{
  char** name; 
  name = (char**)malloc(2*sizeof(char*));
  for(int i = 0; i < 2; i++) {
          name[i] = (char*)malloc(50*sizeof(char*));
  }
  sizeOfName(name);

  for (int j = 2; j > 0; j--) {
           free(name[j]);
  }
free(name);
  return 0;
}

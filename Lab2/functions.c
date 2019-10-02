/******************
Josh Kennerly
CPSC 1021, Lab Section 003, F19
jdkenne@clemson.edu
Feaster
****************/

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


void sizeOfName(char** name)
{
 printf("What is your first name? ");
 scanf("%s", name[0]);
 printf("\nWhat is your last name? ");
 scanf("%s", name[1]);
 printf("\n\n");
 int firstCount = 0;
 int lastCount = 0;

 for (int i = 0; i < 100; i++) {
     if (name[0][i] >= 'A' && name[0][i] <= 'z') {
        firstCount++;
    } 
  }
 for (int i = 0; i < 100; i++) {
     if (name[1][i] >= 'A' && name[1][i] <= 'z') {
        lastCount++;
   }
 }
 printSizeOfName(&firstCount, &lastCount, name);
}

void printSizeOfName(int *firstCount, int *lastCount, char** name)
{
 printf("%s, your first name is %d characters long.\n", name[0], *firstCount);
 printf("Your last name, %s, is %d characters long.\n", name[1], *lastCount);
 printf("\n\n");
 reverseString(firstCount, lastCount, name);
}

void reverseString(int *first, int *last, char** name)
{
 int i;
 printf("Your name in reverse is:\n");
 for(i = *first; i >= 0; i--) {
      printf("%c ", name[0][i-1]);

 }
 printf("\n");
 for(i = *last; i >= 0; i--) {
      printf("%c ", name[1][i-1]);
 }
printf("\n");
}

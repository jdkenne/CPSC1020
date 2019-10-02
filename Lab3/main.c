/***********************************
Josh Kennerly
CPSC 1021, Section 003 Fall 2019
jdkenne@clemson.edu
Yvon Feaster
*********************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "functions.h"

int main () {

int num = 0;
int* numStudents = &num;
struct Student* s = (struct Student*)malloc(10*sizeof(struct Student));
for (int i = 0; i < 10; i ++) {
        s[i].firstName = (char*)malloc(25*sizeof(char));
}
bool function = true;
while (function == true) {
printMenu();
int i = 0;
scanf("%d", &i);
if (i == 1) {
  addStudents(s, numStudents);
}
else if (i == 2) {
  printStudents(s, numStudents);
}
else if (i == 3) {
  addGPA(s);
}
else if (i >= 4) { 
  int k;
  for(k = 0; k < 10; k++) {
   free(s[k].firstName);
	}
free(s);
function = false;
	}
}
return 0;
}

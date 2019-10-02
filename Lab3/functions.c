/****************************
Josh Kennerly
Lab Section 03, Fall 2019
jdkenne@clemson.edu
Yvon Feaster
****************************/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

void addStudents(struct Student* s, int *numStudents) {
   printf("Please add student first name: \n");
   scanf("%s", s[*numStudents].firstName);
   printf("Please enter their age: \n");
   scanf("%d", &s[*numStudents].age);
   printf("Enter the student's CUID: \n");
   scanf("%d", &s[*numStudents].cuid);
   printf("Enter the student's GPA: \n");
   scanf("%f", &s[*numStudents].GPA);
++*numStudents;
}

void printStudents(struct Student* s, int *numStudents) {
  for (int j = 0; j < *numStudents; j++) {
    printf("\nStudent #%d: \n", j+1);
    printf("\tStudent's Name: %s\n", s[j].firstName);
    printf("\tStudent's Age: %d\n", s[j].age);
    printf("\tStudent's CUID: %d\n", s[j].cuid);
    printf("\tStudent's GPA: %.2f\n", s[j].GPA); 
 }
}
void addGPA(struct Student* s) {
   int studentID = 0;
   int confirm;
   printf("Please enter the student's CUID: \n");
   scanf("%d", &studentID);
   for (int i = 0; i < s[i].cuid; i++) {
     if (studentID == s[i].cuid) {
        printf("Is %s, the student you were looking for? Press 1 for yes, and 0 for no. \n", s[i].firstName);
        scanf("%d", &confirm);
        if (confirm == 1) {
           printf("Please enter the new GPA: \n");
           scanf("%f", &s[i].GPA); 
        }
     }
  }
}

int printMenu() {
  printf("\nPlease selection an option: \n");
  printf("1. add a student\n");
  printf("2. print students currently saved\n");
  printf("3. change a student's GPA\n");
  printf("4. end the program\n");
  return 0;
}

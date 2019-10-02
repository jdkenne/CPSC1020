/*********************************
Joshua Kennerly / jdkenne@clemson.edu
CPSC 1021 Section 003
Lab 1
Nushrat
This program calculates the fibonacci sequence
The hard part about this was not being able to use a temporary variable AND the array starting out at size two.
The easiest part was figuring out the math portion for finding the sequence.
*********************************/
#include <stdio.h>
#include <stdlib.h>

void fib1(int a[]);
void fib2(int* a);

int main()
{
  int arr[2] = {0, 1};
  int *pointer;
  pointer = arr;
  pointer = (int*)malloc(1000*sizeof(int));
  printf("Printing with arrays: \n");
  fib1(arr);
  printf("Now printing with pointers: \n");
  fib2(pointer);
  free(pointer);
  return 0;
}

void fib1(int a[]) //This is pass by value since arrays are storing a value that we are accessing to begin the sequence 
{
 for(int i = 0; i < 12; i++) {
      printf("%d ", (a[0]));
      a[0] = a[0] + a[1];
      a[1] = a[0] - a[1];
   }
 printf("\n");
}

void fib2(int* a) //This is pass by reference since we will be changing the address values of *pointer
{
*(a+1) = 1;
for(int i = 0; i < 12; i++) {
      printf("%d ", *a);
      *a = *a + *(a+1);
      *(a+1) = *a - *(a+1);
  }
printf("\n");
}

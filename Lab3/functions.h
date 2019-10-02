#ifndef FUNCTIONS
#define FUNCTIONS

//Do not forget to allocate space appropriately and free memory used. 
struct Student
{
    char* firstName;
    int age, cuid;
    float GPA;
};

//You are not allowed to change the function prototypes. 

void addStudents(struct Student* s, int *numStudents);
void printStudents(struct Student* s, int *numStudents);
//If you do not passed in the size of the structure, how can you
//tell you're at the end of the structure when iterating through
//the array?
void addGPA(struct Student* s);
//Instead of printing everything from main, you will call this function
int printMenu();

#endif 

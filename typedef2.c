/*  
    Author  : Umair Farooq
    Program : typedef in Structure

   In C, the typedef keyword is used to give a new name (or nickname) (alias) to an existing data type.
   This makes the code easier to read and manage. */

#include<stdio.h>
#include<string.h>

// without using typedef
struct InformationTechnologyStudent {
    int roll;
    float cgpa;
    char name[100];
};

// using typedef — we create an alias "CSS" for the structure ComputerScienceStudent
typedef struct ComputerScienceStudent {
    int roll;
    float cgpa;
    char name[100];
} CSS;  // CSS is the alias

int main() {

    // Structure variable without typedef
    struct InformationTechnologyStudent s1;
    s1.roll = 101;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Ali Khan");

    // Structure variable with typedef (short & simple)
    CSS s2;
    s2.roll = 102;
    s2.cgpa = 8.9;
    strcpy(s2.name, "Umair Farooq");

    // Printing values
    printf("Information Technology Student:\n");
    printf("Name: %s\nRoll: %d\nCGPA: %.2f\n\n", s1.name, s1.roll, s1.cgpa);

    printf("Computer Science Student:\n");
    printf("Name: %s\nRoll: %d\nCGPA: %.2f\n", s2.name, s2.roll, s2.cgpa);

    return 0;
}






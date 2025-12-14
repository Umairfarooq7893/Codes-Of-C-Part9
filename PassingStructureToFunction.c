/*
        Author  : Umair Farooq
        Program : Passing Function to Pointer

*/

// Passing Structure to Functions

/*There are two main ways to pass a structure to a function:

=> Pass by Value — A copy of the structure is passed
 (changes inside function don’t affect the original).

 => Pass by Reference (using Pointer) — The address of the structure is passed
 (changes inside function affect the original).*/
/*  Author  : Umair Farooq
    Program :  */

    #include<stdio.h>
#include <string.h>
//Structure definition
    struct student {
        int roll;
        float cgpa;
        char name[50];
    };
//Function Declaration
    void display(struct student std1);

int main(){
//using struct student data_type create structure variable
    struct student std1;
// Assign values
    std1.roll = 101;
    std1.cgpa = 8.9;
    strcpy(std1.name, "Umair Farooq");

// Pass structure to function
    display(std1);

    return 0;
}
// Function that takes structure as argument
void display(struct student std1) {
    printf("Student Details:\n");
    printf("Name: %s\n", std1.name);
    printf("Roll: %d\n", std1.roll);
    printf("CGPA: %.2f\n", std1.cgpa);
}

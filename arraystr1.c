 
/* 
    Author  : Umair Farooq
    Program : Array of Structures
*/

#include<stdio.h>
#include<string.h>

// Defining the structure
struct student {
    char name[100];   // student name
    int roll;         // roll number
    float cgpa;       // cgpa
};

int main() {

    struct student INF[100];  // Array of 100 students (only using first 3)

    // Initializing values for first 3 students
    strcpy(INF[0].name, "Ali");
    INF[0].roll = 601;
    INF[0].cgpa = 8.5;

    strcpy(INF[1].name, "Umair");
    INF[1].roll = 602;
    INF[1].cgpa = 9.1;

    strcpy(INF[2].name, "Fatima");
    INF[2].roll = 603;
    INF[2].cgpa = 8.9;

    // Printing details of all 3 students
    for (int i = 0; i < 3; i++) {
        printf("Name: %s | Roll: %d | CGPA: %.2f\n",
               INF[i].name, INF[i].roll, INF[i].cgpa);
    }

    return 0;
}

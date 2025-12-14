/*  Author  : Umair Farooq
    Program : Nested Structures */

// Nested Structures :- A nested structure is a structure that contains
// another structure as its member.

#include<stdio.h>

// defining first structure for Date of Birth
struct DOB {
    int day;
    int month;
    int year;
};

// defining new structure for student
struct student {
    int rollno;
    char name[20];
    struct DOB date;   // nested structure (student has a DOB)
};
int main() {
    struct student s;  // declaring a variable of structure student

    printf("Enter Roll No: ");
    scanf("%d", &s.rollno);   // taking roll number input

    printf("Enter Name: ");
    scanf("%s", s.name);      // taking name input

    // asking user for date of birth
    printf("Enter Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &s.date.day, &s.date.month, &s.date.year);
    // storing the day, month and year inside nested structure

    // printing all stored values
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.rollno);           // display roll no
    printf("Name: %s\n", s.name);                // display name
    printf("DOB: %d-%d-%d\n",                    // display date of birth
           s.date.day, s.date.month, s.date.year);

    return 0;
}



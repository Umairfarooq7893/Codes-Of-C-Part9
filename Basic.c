/* 
    Author  : Umair Farooq
    Program :  Structures
*/

/* A structure (or struct) is a user-defined data type 
that groups together variables of different data types into a single unit. 
Unlike arrays, which can only hold elements of the same type, 
structures allow you to combine varied data types—such as integers, floats, and characters—under one name, 
making it easier to manage related data.
*/

// => struct is a keyword used to define a data type of our own interest

#include<stdio.h>
#include<string.h>
int main(){
//1. make Data type,combine of varied data types. 
//   such as integers, floats, and characters under one name.
    struct Student {
        int roll_number;
        char name[100];
        float weight;
    };   // semicolon is important here

//2.Creating a structure Variable
    struct Student s1; //s1 is a variable of data type Student

//3. Accessing Structure Members
// dot operator is used to access members of a structure 
    s1.roll_number = 601;    
    strcpy(s1.name,"Umair");
    s1.weight = 80;

//4. Print values
    printf("%d\n%s\n%.2f",s1.roll_number, s1.name,s1.weight);
    return 0;
} 

 



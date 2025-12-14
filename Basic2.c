/* 
    Author  : Umair Farooq
    Program :  Structures
*/
#include <stdio.h>
#include <string.h>
// Defining and decalaring person data type
struct Person{
    int height;
    long long int number;
    float weight;
    char name[100];
}; // here semicoln is important
// Defining and decalaring Student data type
struct Student{
    char name[50];
    int age;
    float marks;
};
// Defining and decalaring Teacher data type
struct Teacher{
    int age;
    int experience;
    int salary;
};
int main(){
/*To access or modify members of a structure variable,
  the dot operator (.) is used:*/

    struct Person str1; // data_type, Name_Structure, variable
    str1.height = 6;
    str1.number = 7889389577;
    str1.weight = 80;
    strcpy(str1.name,"Farooq");

    struct Student str2;
    strcpy(str2.name,"Umair");
    str2.age = 20;
    str2.marks = 20;

    struct Teacher str3;
    str3.age = 40;
    str3.experience = 16;
    str3.salary = 200000;

    // Printing Person structure
    printf("\nPerson Details:\n");

    printf("Name:   %s\n",   str1.name);
    printf("Height: %d\n",   str1.height);
    printf("Number: %d\n",   str1.number);
    printf("Weight: %.2f\n", str1.weight);

    // Printing Student structure
    printf("\nStudent Details:\n");

    printf("Name:  %s\n",  str2.name);
    printf("Age:   %d\n",  str2.age);
    printf("Marks: %.2f\n",str2.marks);

    // Printing Teacher structure
    printf("\nTeacher Details:\n");
    
    printf("Age:        %d\n",       str3.age);
    printf("Experience: %d years\n", str3.experience);
    printf("Salary:     %d\n",       str3.salary);

    return 0;
}
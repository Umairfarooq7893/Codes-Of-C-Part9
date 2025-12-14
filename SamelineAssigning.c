/*  
    Author  : Umair Farooq
    Program : Same line Assigning
*/
#include<stdio.h>
#include <string.h>

int main(){

struct student {
    int roll;
    float cgpa;
    char name[50];
    char nickname[50];
};
// assigning values in same line
    struct student s1 = {601, 9.5, "Umair Farooq","Umi"};
    printf("Name: %s\n", s1.name);
    printf("Nickname: %s\n", s1.nickname);

    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %.2f\n", s1.cgpa);

    return 0;
}


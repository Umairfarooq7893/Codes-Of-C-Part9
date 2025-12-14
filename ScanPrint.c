#include<stdio.h>
#include<string.h>
    struct Mechanical_Student{
    int roll;
    float cgpa;
    };
int main() {
    struct Mechanical_Student s2;
    scanf("%d",&s2.roll);
    scanf("%f",&s2.cgpa);

    printf("%d \n",s2.roll);
    printf("%f",s2.cgpa);

    return 0;
}
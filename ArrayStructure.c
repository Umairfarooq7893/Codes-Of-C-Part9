/* 
    Author  : Umair Farooq
    Program : Array Structures
*/
#include<stdio.h>
#include<string.h>

/*Lets take three arrays (INF, CSE, and EEE) for different branches.
declaring and defining datatype */
    struct student{
        char name[100];
        int roll;
        float cgpa ;
    };
    int main() {
        // using struct student data_type
        struct student INF[100]; //defining an Array INF[100]
        INF[0].roll = 601;
        INF[1].roll = 602;
        INF[2].roll = 603;

        INF[0].cgpa = 9.4;
        INF[1].cgpa = 9.1;
        INF[2].cgpa = 9.0;

        strcpy(INF[0].name,"Umair");
        strcpy(INF[1].name, "Faizan");
        strcpy(INF[2].name, "Kamran");
         
        struct student CSE[100]; //defining an Array CSE[100]
        CSE[0].roll = 602;
        CSE[0].cgpa = 9.4;
        strcpy(CSE[0].name,"Musaib");

        struct student EEE[100]; // Array of students
        EEE[0].roll = 603;
        EEE[0].cgpa = 9.0;
        strcpy(EEE[0].name,"Adnan");

        // displaying the data
        printf("CSE Department:\nName: %s\nRoll: %d\nCGPA: %.2f\n\n", CSE[0].name, CSE[0].roll, CSE[0].cgpa);
        printf("EEE Department:\nName: %s\nRoll: %d\nCGPA: %.2f\n\n", EEE[0].name, EEE[0].roll, EEE[0].cgpa);
        // displaying the data using Loop
        for (int i =0 ; i <=2;i++){
            printf("Name: %s | Roll: %d | CGPA: %.2f \n",INF[i].name,INF[i].roll,INF[i].cgpa);
        }

    return 0;
}

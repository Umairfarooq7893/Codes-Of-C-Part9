 /*  
    Author  : Umair Farooq
    Program : Structure Size
*/
#include<stdio.h>

struct employee{
    int emp_no;        // 4
    char empname[20];  // 20
    int age;           // 4
    float experience;  // 4
    float emp_sal;     // 4
};
int main() {

    // Method 1
    int Size_of_Structure = sizeof(struct employee);
    // sum of all individual Data_Types = 4+20+4+4+4 = 36
    printf("Size of structure = %d bytes", Size_of_Structure);
    return 0;
}

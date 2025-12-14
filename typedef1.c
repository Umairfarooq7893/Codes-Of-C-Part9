 /*  Author  : Umair Farooq
    Program : typedef */

/*
    The typedef keyword enables the programmer to create a
    new data type from an existing data type.

    By using typedef "no new data" is created,
    rather an alternate name is given to already existing data type.

    This makes the code easier to read and manage
*/
#include<stdio.h>

int main() {

    typedef char NAME;      // NAME is another name for char
    typedef int Integer;    // Integer is another name for int
    typedef float Decimal;  // Decimal is another name for float

    NAME Name[10] = "Umair";  // must be an array of NAME (char)
    Integer Age = 20;         // variable of type Integer (int)
    Decimal weight = 80.5;    // variable of type Decimal (float)

    printf("Name   = %s\n", Name);
    printf("Age    = %d\n", Age);
    printf("Weight = %.1f\n", weight);

    return 0;
}

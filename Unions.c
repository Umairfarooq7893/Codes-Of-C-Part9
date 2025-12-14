/* 
    A union is a special data type available in C that allows storing 
    different data types in the same memory location.

    • A union can have many members
    • BUT only ONE member holds a valid value at a time because
      all members share the SAME memory space.
*/
#include <stdio.h>
// defining a union
union Job {
    float salary;     // 4 bytes
    int workerNo;     // 4 bytes
} j;   // declaring a union variable 'j'

int main() {

    j.salary = 12.3;    // store value in salary
    j.workerNo = 100;   // now salary value is overwritten

    // salary is destroyed because workerNo is stored last
    printf("Salary = %f\n", j.salary);        // garbage value
    printf("Number of workers = %d\n", j.workerNo);  // prints 100

    // sizeof union = size of largest member (here: 4 bytes)
    printf("Size of union Job = %lu bytes\n", sizeof(j));

    return 0;
}

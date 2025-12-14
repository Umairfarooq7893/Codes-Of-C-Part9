struct Job {
    float salary;
    int workerNo;
} j;

int main() {
    j.salary = 12.3;
    j.workerNo = 100;

    printf("Salary = %f\n", j.salary);
    printf("Number of workers = %d\n", j.workerNo);
}
/*  Output is
    Salary = 12.300000
    Number of workers = 100
    Because structure stores each member separately.
*/
union Job {
    float salary;
    int workerNo;
} j;

int main() {
    j.workerNo = 100;
    j.salary = 12.3;


    printf("Number of workers = %d\n", j.workerNo);
    printf("Salary = %f\n", j.salary);

}
/*  Output is
    Salary = 0.000000   (garbage)
    Number of workers = 100
    Because union uses only ONE shared memory location for all members.

 Memory
Sum of all members
Size of largest member
*/

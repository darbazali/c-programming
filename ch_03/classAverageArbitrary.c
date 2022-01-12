/* 
    Class Average Problem with Arbitrary grades

    @file: classAverageArbitrary
    @author: Darbaz Ali
    @date: Jan 12, 2022

    @description
    Class-average problem is a common problme to find the average grade of students.
    In this problem, the number of stuents are unknow. To solve this problem,
    we use a technique called, (Sentinel-Controlled Iterarion)

    @algorithm
    1. Initialize total to zero
    2. Intialize counter to zero

    3. Input the first grade (possibly the sentinel)
    4. While the user has not as yet entered the sentinel
        5. Add this grade into the running total
        6. Add one to the grade counter
        7. Input the next grade (possibly the sentinel)

    8. if the counter is not equal to zero
        9. Set the average to the total devided by counter
        10. Print the average

    11. else
        12. Print "No grades were entered"

 */
 #include <stdio.h>

//  function main begins program execution
int main(void)
{
    unsigned int counter;
    int grade, total;

    float average;

    // initialization phase
    counter = 0;
    total = 0;

    // proccessing phase
    printf("%s", "Enter grade, -1 to end: "); // prompt for input
    scanf("%d", &grade); // read grade from user

    // loop while snetinel value not yet read from user
    while ( grade != -1) {
        total = total + grade;
        counter = counter + 1;

        // get next grade from user
        printf("%s", "Enter grade, -1 to end: "); // prompt for input
        scanf("%d", &grade); // read grade from user
    } // end while

    // termination phase
    if ( counter != 0) {

        // calculate average
        average = (float)  total / counter;

        // display average with two digits of precision
        printf("Class average is %.2f\n", average);
    } // end if
    else {
        puts("No grades were enterd");
    } // end else
} // end function main
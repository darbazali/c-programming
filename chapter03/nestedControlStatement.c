// Fig. 3.10
// Analysis of examination results
/* 
Algorithm:

    Initialize passes to zero
    Initialize failures to zero
    Initialize student to one

    White stuend counter is less than or equal to 10
        Input the next exam result

        If the stuent passed
            Add one to passes
        else
            Add one to failures

        Add one to student counter

    Print the number of passes
    Print the number of failures

    If more that 8 sutends passed
        Print "Bonus to instructor!"
 */
#include <stdio.h>

// function main begins porgram execution
int main(void)
{
    // intialize variables in definitions
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;

    int result;

    // proccess 10 stuents using counter-controlled loop
    while (student <= 10) {
        printf("%s", "Enter Result (1=pass, 2=fail): "); // prompt
        scanf("%d", &result); // read result from user

        if (result == 1) {
            passes += 1;
        } // end if
        else {
            failures += 1;
        }

        // increment stuent
        student += 1;
    } // end while


    // termination phase: display number of passes and failures
    printf("Passed %u \n", passes);
    printf("Failed %u \n", failures);

    // If more than 8 stuends passed, print "Bonus to instructor!"
    if (passes > 8) {
        puts("Bonus for instructor!");
    } // end if
}
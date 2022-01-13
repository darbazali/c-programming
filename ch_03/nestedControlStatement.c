/* 
    Nested Control Statement

    @file: nestedControlStatement
    @author: Darbaz Ali
    @date: Jan 13, 2022

    @desc
    Analyze exam results and decide whether instructor should recive a bonus

    @algorithm
    1. Initialize passes to zero
    2. Initialize failures to zero
    3. Initialize student to zero

    4. While stuent counter is less than or equal to ten
        5. Input the next exam result
        
        6. If the student passed
            7. Add one to passes
        8. else
            9. Add one to failures

        10. Add one to student counter

    11. Print the number of passes
    12. Print the number of failures
    13. If more thant eight students passed
        14. Print "Bonus to instructor!"

    15. End
 */
 #include <stdio.h>

//  function mian begins program execution
int main(void)
{

    // initialization phase
    // 1. Initialize passes to zero
    unsigned int passes = 0;

    // 2. Initialize failures to zero
    unsigned int failures = 0;

    //  3. Initialize student to zero
    unsigned int student = 1;

    int result;

    // proccessing phase
    while (student <= 10) {

        // prompt user for input
        printf("%s", "Enter result ( 1=pass, 2=fail ): ");
        scanf("%d", &result);
        printf("%d stuents left\n", 10 - student);

        // if result is 1, increament passes
        if ( result == 1) {
            passes += 1;
        }

        // else, increament failures
        else {
            failures +=1;
        }

        // increament counter in either cases
        student++;

    } // end while

    // termination phase
    printf("Passed %u\n", passes);
    printf("Failed %u\n", failures);

    //If more thant eight students passed, Print "Bonus to instructor!"
    if ( passes > 8) {
        puts("Bonus to instructor!");
    }
} // end function
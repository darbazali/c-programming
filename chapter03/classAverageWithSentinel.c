// Fig. 3.8
// Class average program with sentinel-controlled interation
#include <stdio.h>

// function main begins program execution
int main(void)
{
    unsigned counter; // number of grades intered
    int grade; // grade value 
    int total; // sum of grades

    float average; // number with decimal point for average

    // init phase
    counter = 0;
    total = 0;

    // proccessing phase
    // get first grade from user
    printf("%s", "Enter grade, -1 to end: "); // prompt to input
    scanf("%d", &grade); // read grade from user

    // loop while sentinel value not yet read from user
    while (grade != -1)
    {
        total = total + grade;
        counter += 1; // increment counter

        // get next grade from user
        printf("%s", "Enter grade, -1 to end: "); // prompt to input
        scanf("%d", &grade); // read grade from user
    } // end while

    // termination phase
    // if user is enterd at least one grade
    if ( counter != 0)  {
        // calculate the average
        average = (float) total / counter ;

       // display average with two degits of precison
       printf("Class average is %.2f \n", average); 
    } // end if
    
    else {
        puts("No grades were entered");
    } // end else
    
} // end function main
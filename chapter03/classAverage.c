// Fig 3.6
// Class Average program with counter-controlled iteration
#include <stdio.h>

// function main begins program execution
int main(void)
{
    unsigned int counter; // number of grades to be entered next
    int grade; // curent grade of the student
    int total; // sum of all grades enterd by user
    int average; // average grade

    // initialization phase
    counter = 1;
    total = 0;

    // proccessing phase
    while (counter <= 10) // loop 10 times
    {
        printf("%s", "Enter grade: "); // prompt
        scanf("%d", &grade); // read grade from user
        total = total + grade; // add grade to total
        counter += 1; // add 1 to counter
    }   // end while


    // termination phase
    average = total / 10; // integer division

    printf("Class average is %d \n", average); // dispaly result
} // end function main
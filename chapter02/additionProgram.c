// Fig 2.5
// Addition Program
// @desc: Reads 2 integers from standard input and adds these 2 integer together
// @author: Darbaz Ali
// @date: May 10th, 2022

// include stdio header
#include <stdio.h>

// function main begins program execution
int main(void)
{

    int integer1; // first integer to be entered by user
    int integer2; // second integer to be entered by user

    // prompt user to enter first number
    printf("Enter the first number: \n");
    scanf("%d", &integer1); // read an integer

    // prompt user to enter second number
    printf("Enter the second number: \n");
    scanf("%d", &integer2); // read an integer

    // variable sum to save the addition of both numbers
    int sum;

    // add integer1 on to integer2 and put the result inside sum variable
    sum = integer1 + integer2;

    // termination phase
    printf("The sum is %d \n", sum);

} // end of main
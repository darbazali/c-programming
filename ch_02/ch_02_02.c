/* 
    Adding two numbers with C

    @chapter 2
    @file: ch_02_02
    @desc: Addition Program
    @auther: Darbaz Ali
    @date: Jan 3, 2022

 */

// import stdio header
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int integer1; // first number to be enterd by the user
    int integer2; // second number to be enterd by the user

    // prompt user to enter first integer
    printf("Enter first integer\n");
    scanf("%d", &integer1);

    // prompt user to enter second integer
    printf("Enter second integer\n");
    scanf("%d", &integer2);

    // store sum in the sum variable
    int sum;
    sum = integer1 + integer2;

    // print sum
    printf("Sum is %d \n", sum);
} // end of main function
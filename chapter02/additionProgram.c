// Figure 2.3
// Addition Program
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int integer1; // first number to be enterd by user
    int integer2; // second number to be enterd by user

    printf("Enter first integer \n"); // prompt
    scanf("%d", &integer1); // read an integer

    printf("Enter second integer \n"); // prompt
    scanf("%d", &integer2);

    int sum; // the variable in which sum will be stored
    sum = integer1 + integer2;

    printf("The sum is %d \n", sum); // print sum 
} // end of function main
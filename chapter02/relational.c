// Fig 2.13
// Using if statement, relations
#include <stdio.h>

// function main begins program execution
int main (void)
{
    // Prompt user to enter 2 different integers
    printf("Enter two integers, and I will tell you \n");
    printf("the relations they satisfy: ");

    int num1; // first number to be enterd
    int num2; // second number to be enterd

    scanf("%d %d", &num1, &num2); // read the integers

    if (num1 == num2) {
        printf("%d is equal to %d\n", num1, num2);
    } // end if

    if (num1 != num2) {
        printf("%d is not equal to %d\n", num1, num2);
    } // end if

    if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    } // end if

    if (num1 > num2) {
        printf("%d is grater than %d\n", num1, num2);
    } // end if

    if (num1 <= num2) {
        printf("%d is less than or equal to %d\n", num1, num2);
    } // end if

    if (num1 >= num2) {
        printf("%d is grater than or equal to %d\n", num1, num2);
    } // end if


} // end of function main
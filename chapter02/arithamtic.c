// Ex. 2.16 - Arithmatics
// print the sum, product, difference, quotient and remainder of two numbers
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int num1; // first number to be enterd
    int num2; // second number to be enterd

    puts("Enter first integer: "); // prompt
    scanf("%d", &num1); // read from user

    puts("Enter second integer: "); //prompt
    scanf("%d", &num2); // read from user

    // define the coresponding value holders
    int sum, product, diff, quot, remainder;

    // summation
    sum = num1 + num2;

    // product
    product = num1 * num2;

    // difference
    diff = num1 - num2;

    // quotient
    quot = num1 / num2;

    // remainder
    remainder = num1 % num2;

    // print the results
    printf("The sum of %d and %d is %d \n", num1, num2, sum);
    printf("The product of %d and %d is %d \n", num1, num2, product);
    printf("The difference of %d and %d is %d \n", num1, num2, diff);
    printf("The quotient of %d by %d is %d \n", num1, num2, quot);
    printf("The remainder of %d by %d is %d \n", num1, num2, remainder);

}
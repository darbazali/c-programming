/* 
    Write a program that aks the user to enter two numbers,
    obtains them from the user an dprints their sum, product, difference,
    qutioent and remainder

    @file: ch_02_05
    @auther: Darbaz Ali
    @date: Jan 5, 2022

 */

#include <stdio.h>

// function main begnis program execution
int main(void) {

    int a, b;

    // prompt user to enter first integer
    printf("Enter first integer: \n");
    scanf("%d", &a);


    // prompt user to enter second integer
    printf("Enter second integer: \n");
    scanf("%d", &b);

    int sum = a + b;

    int product = a * b;

    int difference = a - b;

    int quotient = a / b;

    int remainder = a % b;

    printf("Sum of %d and %d is %d \n", a, b, sum); 
    printf("Product of %d and %d is %d \n", a, b, product); 
    printf("Difference of %d and %d is %d \n", a, b, difference); 
    printf("Quotient of %d and %d is %d \n", a, b, quotient); 
    printf("Remainder of %d and %d is %d \n", a, b, remainder); 
}
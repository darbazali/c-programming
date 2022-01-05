/* 
    Self review excercises

    @file: Excercises
    @author: Darbaz Ali
    @date: Jan 5, 2022

 */

 #include <stdio.h>

// function main begins program execution
 int main (void) {
    //  wiret a program to calcultea the product of three numbers

    int a, b, c;

    // prompt to get first integer
    printf("Enter the first integer \n");
    scanf("%d", &a);

    // prompt user to enter second integer
    printf("Enter the second integer \n");
    scanf("%d", &b);

    // prompt the user to ener third integer
    printf("Enter the third integer \n");
    scanf("%d", &c);

    int product = a * b * c;

    printf("The product of %d, %d, and %d is %d \n", a, b, c, product);
 
 }



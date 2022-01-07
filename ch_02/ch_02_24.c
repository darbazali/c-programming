/*============================================== 

    Odd or Even Numbers

    @file: ch_02_24
    @author: Darbaz Ali
    @date: Jan 7, 2022

 ==============================================*/
#include <stdio.h>

// function main begins program execution
int main(void) {

    int n;
    // promt user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is Even \n", n);
    }

    if ( n % 2 != 0) {
        printf("%d is Odd \n", n);
    }
}
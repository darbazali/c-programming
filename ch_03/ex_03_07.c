/* 
    Rise X to the Y Power

    @file: ex_03_07
    @author: Darbaz Ali
    @date: Jan 15, 2022

 */
 #include <stdio.h>

//  function main begins program execution
int main(void)
{
    // read x from user
    unsigned int x;
    printf("%s", "Enter first Integer: ");
    scanf("%u", &x);

    // read y from user
    unsigned int y;
    printf("%s", "Enter second integer: ");
    scanf("%u", &y);

    unsigned int i = 1;
    unsigned int power = 1;

    // proccessing phase
    while ( i <= y) {
        power *= x;
        i++;
    } // end while

    // termination phase
    printf("%u\n", power);
} // end main function

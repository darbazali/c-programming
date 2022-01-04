/* 
    Using if statements, relations

    Compare 2 numbers together
    @file: ch_02_03
    @auther: Darbaz Ali
    @date: Jan 4, 2022

 */

// include standard io header
#include <stdio.h>

// function main begins program execution
int main(void)
{
    printf("Enter two integers, and I will tell you\n");
    printf("the relationship they satisfy: ");

    int num1, num2;

    // get num1 and num2 from user
    scanf("%d %d", &num1, &num2);

    if (num1 == num2)
    {
        printf("%d is equal to %d \n", num1, num2);
    } // end if

    if (num1 != num2)
    {
        printf("%d is not equal to %d \n", num1, num2);
    } // end if

    if (num1 < num2)
    {
        printf("%d is less than %d \n", num1, num2);
    } // end if

    if (num1 > num2)
    {
        printf("%d is grater than %d \n", num1, num2);
    } // end if

    if (num1 <= num2)
    {
        printf("%d is less than or equal to %d \n", num1, num2);
    } // end if

    if (num1 >= num2)
    {
        printf("%d is grater or equal than %d \n", num1, num2);
    } // end if
} // end function main
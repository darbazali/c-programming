/* 
    Arethmatic, Largest Value and Smallest Value

    @file: ch_02_19
    @author: Darbaz Ali
    @date: Jan 7, 2022

 */
#include <stdio.h>

// function main begins program execution
int main(void)
{

    int integer1, integer2, integer3, max, min;
    // promt user to enter three different integers
    printf("Enter three different integers: ");
    scanf("%d %d %d", &integer1, &integer2, &integer3);

    int sum = integer1 + integer2 + integer3;

    int average = (integer1 + integer2 + integer3) / 3;

    int product = integer1 * integer2 * integer3;

    if (integer1 > integer2)
    {
        if (integer2 > integer3)
        {
            max = integer1;
            min = integer3;
        }

        if (integer3 > integer2)
        {
            max = integer1;
            min = integer2;
        }
    }

    if (integer2 > integer1)
    {
        if (integer1 > integer3)
        {
            max = integer2;
            min = integer3;
        }
        if (integer3 > integer1)
        {
            max = integer2;
            min = integer1;
        }
    }

    if (integer3 > integer2)
    {
        if (integer2 > integer1)
        {
            max = integer3;
            min = integer1;
        }

        if (integer1 > integer2)
        {
            max = integer3;
            min = integer2;
        }
    }

    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    printf("Max is %d\n", max);
    printf("Min is %d\n", min);
}
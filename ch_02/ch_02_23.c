/* 
    Largest and Smallest Integers of three numbes

    @file: ch_02_23
    @author: Darbaz Ali
    @date: Jan 7, 2022

 */
#include <stdio.h>

// function main begins program execution
int main(void) {

    int integer1, integer2, integer3;
    printf("Enter three different integers: ");
    scanf("%d %d %d", &integer1, &integer2, &integer3);

    int min, max;

    if (integer1 >= integer2)
    {
        if (integer2 >= integer3)
        {
            max = integer1;
            min = integer3;
        }

        if (integer3 >= integer2)
        {
            max = integer1;
            min = integer2;
        }
    }

    if (integer2 >= integer1)
    {
        if (integer1 >= integer3)
        {
            max = integer2;
            min = integer3;
        }
        if (integer3 >= integer1)
        {
            max = integer2;
            min = integer1;
        }
    }

    if (integer3 >= integer2)
    {
        if (integer2 >= integer1)
        {
            max = integer3;
            min = integer1;
        }

        if (integer1 >= integer2)
        {
            max = integer3;
            min = integer2;
        }
    }

    printf("Max is %d\n", max);
    printf("Min is %d\n", min);
}
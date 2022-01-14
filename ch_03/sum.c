/* 
    Calculate the sum of integers from 1 to 10

    @author: Darbaz Ali
    @date: Jan 14, 2022
 */
 #include <stdio.h>

 int main(void) {

    unsigned int x = 1;
    unsigned int sum = 0;

    while ( x <= 10 ) {
        sum += x;
        x++;
    }

    // display sum
    printf("The sum is %u\n", sum);
 }
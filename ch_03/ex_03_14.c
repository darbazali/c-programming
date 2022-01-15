/* 
    Obtain a series of positive numbers form the keyboard, and determaine
    and display the average

    @author: Darbaz Ali
    @date: Jan 15, 2022

 */
 #include <stdio.h>

//  function main begins program execution
int main(void)
{
    unsigned int counter;
    int number, total;
    float average;

    total = 0;
    counter = 0;

    printf("%s", "Enter number, -1 to end: ");
    scanf("%d", &number);

    while( number != -1) {
        total += number;
        counter++;

        printf("%s", "Enter number, -1 to end: ");
        scanf("%d", &number);
    } // end while

    // termination phase
    if ( counter != 0) {
        average = (float) total / counter;
    }

    printf("Average is %.2f\n", average);
} // end main function
/* 
    Converting from seconds to Hours, Minutes, and Seconds.

    @file: ch_02_20
    @author: Darbaz Ali
    @date: Jan 7, 2022

    Algorithm
    Number of Hours = ⌊ (n % (24 * 3600)) / 3600 ⌋ 
    Number of Minutes = ⌊ (n % (24 * 3600 * 3600)) / 60 ⌋ 
    Number of Seconds = ⌊ (n % (24 * 3600 * 3600 * 60)) / 60 ⌋

 */
#include <stdio.h>

// function main begins program execution
int main(void)
{

    // time in decons
    int secs, hour, minute;
    long int second;
    // promt user to enter time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &secs);

    hour = (secs % (24 * 3600)) / 3600;
    minute = (secs % (24 * 3600 * 3600)) / 60;
    second = (secs % (24 * 3600 * 3600L * 60)) / 60;

    printf("%d:%d:%li \n", hour, minute, second);
}
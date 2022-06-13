// Ex. 2.20
// Converting from seconds to Hours, Minutes, and seconds
#include <stdio.h>

// fuction main begins program execution
int main(void)
{
    int timeInSeconds;
    printf("Enter time in seconds: "); // prompt
    scanf("%d", &timeInSeconds); // read seconds from user

    int hour, min, sec;

    hour = timeInSeconds / 3600;

    min = (timeInSeconds - (3600 * hour)) / 60;

    sec = timeInSeconds - (3600 * hour) - (min * 60);

    printf("H:M:S - %d:%d:%d \n", hour, min, sec);
} // end of function main
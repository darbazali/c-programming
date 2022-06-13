// Ex. 2.17 Final Velocity
// Find the Final Velocity and Distance travled fro a given object
#include <stdio.h>

// function main begins program execution
int main(void)
{
    // the inputs that required for the object
    int initialVelocity, acceleration, time;

    puts("Enter initial velocity: "); // prompt
    scanf("%d", &initialVelocity); // read initialVelocity from user

    puts("Enter acceleration: ");
    scanf("%d", &acceleration); // read acceleration from user

    puts("Enter time elapsed: ");
    scanf("%d", &time); // read time from user

    int findalVelocity, distance;

    findalVelocity = initialVelocity + acceleration * time;

    distance = initialVelocity * time + (1/2 * (acceleration * time * time));

    printf("Final velocity is %d \n", findalVelocity);

    printf("distance is %d \n", distance);
}
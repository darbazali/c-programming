/* 

    Calculate Final Velocity

    @file: ch_02_17
    @author: Darbaz Ali
    @date: Jan 5, 2022

 */
#include <stdio.h>

// function main begins program execution
int main(void) {

    int u, a, t;
    // prompt user to ente initial velocity
    printf("Enter initial velocity: \n");
    scanf("%d", &u);

    // prompt user to enter accelaration
    printf("Enter accelaration: \n");
    scanf("%d", &a);

    // promt user to enter time
    printf("Enter the time: \n");
    scanf("%d", &t);

    int finalVelocity = u + a * t;

    int distance = (u * t) + (1 / 2) * (a * (t * t));

    printf("Final Velocity is %d \n", finalVelocity);

    printf("Distance Travled is %d \n", distance); 


}
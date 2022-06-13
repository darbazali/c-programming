// Ex. 2.18 Comparing Values
// Identify highest rainfall
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int highestRainfall;
    int currentYearRainfall;

    puts("Enter highest rainfall hight: "); // prompt
    scanf("%d", &highestRainfall); // read highest rainfall hight from user

    puts("Enter current year rainfall hight: ");
    scanf("%d", &currentYearRainfall);

    if (currentYearRainfall >= highestRainfall) {
        puts("Current year reainfall is the highest");
    }

    if (currentYearRainfall < highestRainfall) {
        puts("Current year rainfall is not the highest one");
    }
}
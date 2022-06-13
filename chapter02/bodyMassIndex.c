// Ex. 32 - Body Mass Index Calculator
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int weightInKilograms; 
    float heightInMeters;

    printf("%s", "Enter your weight in Kilograms: "); // prompt
    scanf("%d", &weightInKilograms); // read weight in Kgs

    printf("%s", "Enter your height in Meters: ");
    scanf("%f", &heightInMeters);

    float bmi;
    bmi = weightInKilograms / (heightInMeters * heightInMeters);

    printf("Your BMI is %f \n", bmi);
    puts("BMI VALUES");
    puts("Underweight:  less than 18.5");
    puts("Normal:       between 18.5 and 24.9");
    puts("Overweight:   between 25 and 29.9");
    puts("Obese:        30 or greater");
} // end of function main
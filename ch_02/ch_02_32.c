/*============================================== 

    Body Mass Index Calculator
    
    @file: ch_02_32
    @author: Darbaz Ali
    @date: Jan 8, 2022

 ==============================================*/
 #include <stdio.h>

 int main(void) {

     int weight;
     double height;
    //  prompt user to enter his wight in kgs and his  hight in meters
    printf("Enter your weight in kelograms, like 78: ");
    scanf("%d", &weight);

    printf("Enter your hight in meters, like 1.8: ");
    scanf("%lf", &height);

    double bmi = weight / ( height * 2);
    printf("Your BMI is %lf \n", bmi);

 }
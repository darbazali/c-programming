/* 
    class-average problem

    @algorithm
    1. Set total to zero
    2. Set grade counter to 1
    3. while grade counter is less than or equal to 10
        4. input the next grade
        5. add the grade into the total
        6. add 1 to the grade counter
    7. set the class average to the total divided by 10
    8. print the class average

    @auther: Darbaz Ali
    @date: Jan 10, 2022

 */
 #include <stdio.h>

//  function main begins program execution
int main(void) {

    unsigned int counter; // number of grade to be entered next
    int grade; // grade value
    int total; // sum bo grades enterd by user
    int average; // average of grades

    // initialization phase
    total = 0;
    counter = 1;

    // proccessing phase
    while ( counter <= 10) {  // loop 10 times

        // prompt for input
        printf("%s", "Enter grade: ");

        // read grade from user
        scanf("%d", &grade);

        // add grade to total
        total = total + grade;

        // increament counter
        counter = counter +1;
    } // end while

    // termination phase
    average = total / 10;

    // display the result
    printf("Class average is %d\n", average);

}
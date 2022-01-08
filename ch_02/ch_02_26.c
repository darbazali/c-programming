/*============================================== 

    Multiples

    @file: ch_02_26
    @author: Darbaz Ali
    @date: Jan 8, 2022

 ==============================================*/
 #include <stdio.h>

//  function main begins program execution
int main(void)
{
    int firstNumber, secondNumber;

    // prompt user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &firstNumber, &secondNumber);

    if ( firstNumber % secondNumber == 0) {
        printf("%d is multiple of %d\n", secondNumber, firstNumber);
    }

    if ( firstNumber % secondNumber != 0) {
        printf("%d is not multiple of %d\n", secondNumber, firstNumber);
    }
}
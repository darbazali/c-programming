// Calcluate the sum of integers from 1 to 10
#include <stdio.h>

// function main begins program execution
int main(void){
	
	// eclaration phase
	unsigned int counter = 1;
	unsigned int sum = 0;
	
	// proccessing phase
	while ( counter <= 10) {
		sum += 1;
		counter++;
	} // end while
	
	// termination phase
	printf("Counter is %d \n", counter);
} // end function main
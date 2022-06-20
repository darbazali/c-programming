// rise x to the y power
#include <stdio.h>

// function main begins program execution
int main(void)
{
	unsigned int x;
	unsigned int y;
	
	printf("%s", "Enter first integer ");
	scanf("%d", &x); // read from user
	
	printf("%s", "Enter second integer "); // prompt
	scanf("%d", &y);
	
	unsigned int i = 1;
	unsigned int power;
	
	while ( i <= y) {
			power *= x;
			i++;	
	}
	
	printf("%u \n", power);
}
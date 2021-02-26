/* prog0504. Revising the program to determine if a number is even or odd */

#include <stdio.h>

int main(void)
{
	int numberToTest, remainder;

	printf("Enter your number to be tested: ");
	scanf("%i", &numberToTest);

	remainder = numberToTest % 2;

	if (remainder == 0)
		printf("The number is even.\n");
	else
		printf("The number is odd.\n");

	return 0;
}

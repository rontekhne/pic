/* prog0409. Implementing a revised program to reverse the digits of a number */

#include <stdio.h>

int main(void)
{
	int number, rightDigit;

	printf("Enter your number.\n");
	scanf("%i", &number);

	do {
		rightDigit = number % 10;
		printf("%i", rightDigit);
		number = number / 10;
	}
	while (number != 0);

	printf("\n");

	return 0;
}

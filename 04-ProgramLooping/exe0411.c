/* exe0411. Write a program that calculates the sum of the digits of an
 * integer. For example, the sum of the digits of the number 
 * 2155 is 2 + 1 + 5 + 5 or 13. The program should accept any arbitrary
 * integer typed in by the user.
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
	int n, number, digit, sum = 0;

	printf("Enter a number to sum its digits: ");
	scanf("%i", &number);

	n = number;

	do {
		digit = number % 10;
		sum += digit;
		number /= 10;
	}
	while (number != 0);

	printf("The sum of the digits in %i is %i\n", n, sum);

	return 0;
}

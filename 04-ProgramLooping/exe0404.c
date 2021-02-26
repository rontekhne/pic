/* exe0404. The factorial of an integer n, written n!, is the product of
 * the consecutive integers 1 through n. For example, 5 factorial is
 * calculated as 5! = 5 x 4 x 3 x 2 x 1 = 120
 * Write a program to generate and print a table of the first 10 factorials.
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
	int n, factorial, count;

	printf("TABLE OF FACTORIALS\n");
	printf(" !n      factorial\n");
	printf("----     ---------\n");

	for (count = 1; count <= 10; ++count) {
		factorial = count;

		for (n = count - 1; n > 0; --n)
			factorial = factorial * n;

		printf("%3i%13i\n", count, factorial);
	}

	return 0;
}

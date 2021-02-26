/* exe0402. Write a program to generate and display a table of n and
 * n to the power of 2, for integer values of n ranging from 1 to 10.
 * Be certain to print appropriate column headings.
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
	int n;

	printf("TABLE OF n and n to the power of 2\n");
	printf(" n     n to the power of 2\n");
	printf("---    -------------------\n");

	for (n = 1; n <= 10; ++n)
		printf("%3i%13i\n", n, n * n);

	return 0;
}

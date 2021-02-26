/* exe0409A. Rewrite Programs 4.2 through 4.5, replacing all uses of the for
 * statement with equivalent while statements. Run each program to verify that 
 * both versions are identical.
 * by Ron, Jan 2021 */


/* prog0402. Calculating the 200th triangular number */

#include <stdio.h>

int main(void)
{
	int n, triangularNumber;

	triangularNumber = 0;

	n = 1;
	while (n <= 200) {
		triangularNumber = triangularNumber + n;
		++n;
	}

	printf("The 200th triangular number is %i\n", triangularNumber);

	return 0;
}

/* exe0409B. Rewrite Programs 4.2 through 4.5, replacing all uses of the for
 * statement with equivalent while statements. Run each program to verify that 
 * both versions are identical.
 * by Ron, Jan 2021 */


/* prog0403. Generating a table of triangular numbers */

#include <stdio.h>

int main(void)
{
	int n, triangularNumber;

	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf(" n    Sum from 1 to n\n");
	printf("---   ---------------\n");

	triangularNumber = 0;
	
	n = 1;
	while (n <= 10) {
		triangularNumber += n;
		printf(" %i         %i\n", n, triangularNumber);
		++n;
	}

	return 0;
}

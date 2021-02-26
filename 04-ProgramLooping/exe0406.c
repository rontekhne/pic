/* exe0406. A minus sign placed in front of a field width specification
 * cause the field to be displayed left-justified. Substitute the following
 * printf() statement for the corresponding statement in Program 4.2, 
 * run the program, and compare the outputs produced by both programs.
 * printf("%-2i             %i\n", n, triangularNumber);
 * It's actually Program 4.3.
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

	for (n = 1; n <= 10; ++n) {
		triangularNumber += n;
		printf("%-2i         %i\n", n, triangularNumber);
	}

	return 0;
}

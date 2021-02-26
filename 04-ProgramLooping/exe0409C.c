/* exe0409C. Rewrite Programs 4.2 through 4.5, replacing all uses of the for
 * statement with equivalent while statements. Run each program to verify that 
 * both versions are identical.
 * by Ron, Jan 2021 */


/* prog0404. Asking the user for input */

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber;

	printf("What triangular number do you want? ");
	scanf("%i", &number);

	triangularNumber = 0;

	n = 1;
	while (n <= number) {
		triangularNumber += n;
		++n;
	}

	printf("Triangular number %i is %i\n", number, triangularNumber);

	return 0;
}

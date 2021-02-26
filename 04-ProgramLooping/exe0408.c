/* exe0408. Program 4.5 allows the user to type in only five different
 * numbers. Modify that program so that the user can type in the number
 * of triangular numbers to be calculated.
 * by Ron, Jan 2021 */


/* prog0405. Using nested for loops */

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber, counter, times;

	printf("How many triangular numbers will you calculate? ");
	scanf("%i", &times);

	for (counter = 1; counter <= times; ++counter) {
		printf("What triangular number do you want? ");
		scanf("%i", &number);

		triangularNumber = 0;

		for (n = 1; n <= number; ++n) 
			triangularNumber += n;

		printf("Triangular number %i is %i\n", n, triangularNumber);
	}

	return 0;
}

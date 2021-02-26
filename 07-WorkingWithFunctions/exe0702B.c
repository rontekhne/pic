/* exe0702B. Modify Program 7.4 so the value of triangularNumber is
 * returned by the function. Then go back to Program 4.5 and change 
 * that program so that it calls the new version of the
 * calculateTriangularNumber() function.
 * by Ron, Feb 2021 */
/* prog0405. Using nested for loops */

#include <stdio.h>

int main(void)
{
	int number, counter;
  int calculateTriangularNumber(int n);

	for (counter = 1; counter <= 5; ++counter) {
		printf("What triangular number do you want? ");
		scanf("%i", &number);

		printf("Triangular number %i is %i\n", number, calculateTriangularNumber(number));
	}

	return 0;
}

int calculateTriangularNumber(int n)
{
  int i, triangularNumber = 0;

  for (i = 1; i <= n; ++i)
    triangularNumber += i;

  return triangularNumber;
}

/* exe0309. Write a program to find the next largest even multiple 
 * for the following values of i and j:
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
	int i, j;

	i = 365;
	j = 7;
	printf("next largest even multiple of %i and %i is %i\n", i, j, i + j - i % j);

	i = 12258;
	j = 23;
	printf("next largest even multiple of %i and %i is %i\n", i, j, i + j - i % j);

	i = 996;
	j = 4;
	printf("next largest even multiple of %i and %i is %i\n", i, j, i + j - i % j);

	return 0;
}

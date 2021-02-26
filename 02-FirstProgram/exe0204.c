/* exe0204. Write a program that subtracts the value 15 from 87 and 
 * displays the result, together with an appropriate message, 
 * at the terminal.
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
	int value1, value2, sub;

	value1 = 87;
	value2 = 15;
	sub = value1 - value2;

	printf("The subtraction of %i and %i is %i\n", value1, value2, sub);

	return 0;
}

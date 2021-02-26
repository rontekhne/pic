/* exe0306. Write a program to evaluate the polynomial shown here:
 * 3 x pow(x, 3) - 5 x pow(x, 2) + 6
 * for x = 2.55
 * by Ron, Jan 2021 */

#include <stdio.h>
#include <math.h>

int main(void)
{
	double result;
	double x = 2.55;

	result = 3 * pow(x, 3) - 5 * pow(x, 2) + 6;

	printf("result = %g\n", result);

	return 0;
}

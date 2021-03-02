/* exe1303. Given the following variable declarations:
 * float     f = 1.00
 * short int i = 100
 * long int  l = 500L
 * double    d = 15.00
 * and the seven steps outlined in this chapter for convertion of operands
 * in expressions, determine the type and value of the following expressions:
 * f + i
 * l / d
 * i / l + f
 * l * i
 * f / 2
 * i / (d + f)
 * i / (i * 2.0)
 * l + i / (double) l
 * by Ron, Mar 2021 */

#include <stdio.h>

int main(void)
{
	float     f = 1.00;
	short int i = 100;
	long int  l = 500L;
	double    d = 15.00;
	
	printf("%f\n", f + i);
	printf("%li\n", l / d);
	printf("%f\n", i / l + f);
	printf("%li\n", l * i);
	printf("%f\n", f / 2);
	printf("%f\n", i / (d + f));
	printf("%f\n", i / (i * 2.0));
	printf("%f\n", l + i / (double) l);

	return 0;
}

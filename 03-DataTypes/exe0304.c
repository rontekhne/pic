/* exe0304. Write a program that converts 27 from degrees 
 * Fahrenheit (F) to degrees Celsius (C) using the following formula:
 * C = (F - 32) / 1.8
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
	float C, F;

	F = 27.0f;
	C = (F - 32.0) / 1.8;

	printf("%.0f F = %.1f C\n", F, C);

	return 0;
}

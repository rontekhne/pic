/* prog1502. A simple, yet more interactive, example */

#include <stdio.h>

int main(void)
{
	float d;
	float half, square, cube;

	printf("Enter a number between 1 and 100: \n");
	scanf("%f", &d);

	half = d / 2;
	square = d * d;
	cube = d * d * d;

	printf("\nYour number is %.2f\n", d);
	printf("Half of it is %.2f\n", half);
	printf("Square it to get %.2f\n", square);
	printf("Cube it to get %.2f\n", cube);

	return 0;
}

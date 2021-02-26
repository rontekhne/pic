/* exe0505. You developed Program 4.9 to reverse the digits of an integer
 * typed in from the terminal. However, this program does not function well
 * if you type in a negative number. Find out what happens in such case and
 * then modify the program so that negative numbers are correctly handled.
 * For example, if the number -8645 is typed in, the output of the program
 * should be 5468-.
 * by Ron, Jan 2021 */

 /* prog0409. Implementing a revised program to reverse the digits of a number */

#include <stdio.h>

int main(void)
{
	int originalNumber, number, rightDigit;

	printf("Enter your number.\n");
	scanf("%i", &number);

  if (number < 0) {
    originalNumber = number;
    number = -number;
  }

	do {
		rightDigit = number % 10;
		printf("%i", rightDigit);
		number = number / 10;
	}
	while (number != 0);

  if (originalNumber < 0)
	  printf("-\n");
  else
    printf("\n");

	return 0;
}

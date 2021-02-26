/* exe0407. A decimal point before the field width specification in a
 * printf() statement has a special purpose. try to determine  its purpose
 * by typing in and running the following program. Experiment by typing
 * in different values each time you are prompted.
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
	int dollars, cents, count;

	for (count = 1; count <= 10; ++count) {
		printf("Enter dollars: ");
		scanf("%i", &dollars);
		printf("Enter cents: ");
		scanf("%i", &cents);

		printf("$%i.%.2i\n\n", dollars, cents);
	}

	return 0;
}

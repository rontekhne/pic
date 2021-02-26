/* exe0405. The following perfectly valid C program was written
 * without much attention paid to its format. As you will observe,
 * the program is not very reaable. (And believe it or not, it is 
 * even possible to make this program significantly more unreadable!)
 * Using the programs presented in this chapter as examples, reformat 
 * the program so that it is more readable. Then type the program into 
 * the computer and run it.
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
	int n, power;

	printf("TABLE OF POWERS OF TWO	\n\n");
	printf(" n    2 to the n\n");
	printf("---   ----------\n");

	power = 1;
	for (n = 0; n <= 10; ++n) {
		printf("%2i     %4i\n", n, power);
		power *= 2;
	}

	return 0;
}

/* prog1504. Copying characters from standard input to standard output */

#include <stdio.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);

	return 0;
}

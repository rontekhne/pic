/* exe1506. Write a program that displays the contents of a file at the 
 * terminal 20 lines at a time. At the end of each 20 lines, have the 
 * program wait for a character to be entered  from the terminal. If the 
 * character is the letter q, the program should stop the display of the
 * file; any other character should cause the next 20 lines from the file 
 * to be displayed.
 * by Ron, Mar 2021 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	void display20(FILE *fp);

	if (argc != 2) {
		fprintf(stderr, "%s", "usage: a.out filename\n");
		exit(1);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't open %s for reading.\n", argv[1]);
		exit(2);
	}

	display20(fp);
		return 0;

	fclose(fp);

	return 0;
}	

void display20(FILE *fp)
{
	int line = 1;
	int c, q;

	while ((c = getc(fp)) != EOF) {
		if (c == '\n') {
			++line;
		}

		if (line > 1 && line % 20 == 0) {
			putchar('\n');
			q = getchar();
			if (q == 'q')
				break;
			line = 1;
		}
		putc(c, stdout);
	}
}


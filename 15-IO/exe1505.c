/* exe1505. Write a program that writes columns m through n of each line
 * of the file to stdout. Have the program accept the values of m and n 
 * from the terminal window.
 * by Ron, Mar 2021 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	void mnprintcol(FILE *fp, int m, int n);
	FILE *fp;

	if (argc != 4) {
		fprintf(stderr, "%s", "usage: a.out filename colm coln.\n");
		exit(1);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't open %s for reading.\n", argv[1]);
		exit(2);
	}
	
	mnprintcol(fp, atoi(argv[2]), atoi(argv[3]));

	fclose(fp);

	return 0;
}	

void mnprintcol(FILE *fp, int m, int n)
{
	int c, col = 0;

	while ((c = getc(fp)) != EOF) {
		if (c == '\n') {
			col = 0;
			putc('\n', stdout);
		}
		if (col >= m && col <= n)
			putc(c, stdout);
		++col;
	}
}


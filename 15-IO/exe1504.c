/* exe1504. Write a program that merges lines alternately from two files and
 * writes the results to stdout. If one file has fewer lines than the other,
 * the remaining lines from the larger file should simply be copied to stdout.
 * by Ron, Mar 2021 */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
	FILE *f1, *f2;
	char buf1[81], buf2[81];

	if (argc != 3) {
		printf("usage: a.out f1 f2.\n");
		return 1;
	}

	if ((f1 = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Can't read %s.\n", argv[1]);
		return 2;
	}

	if ((f2 = fopen(argv[2], "r")) == NULL) {
		fprintf(stderr, "Can't read %s.\n", argv[2]);
		return 3;
	}

	/* logic here */
	while (1) {
		if (fgets(buf1, 81, f1) != NULL)
			fputs(buf1, stdout);
		if (fgets(buf2, 81, f2) != NULL)
			fputs(buf2, stdout);
	}

	fclose(f1);
	fclose(f2);

	return 0;
}

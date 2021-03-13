/* exe1503. Write a program to copy one file to another, replacing
 * all lowercase characters  with their uppercase equivalents.
 * by Ron, Mar 2021 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char inFile[64], outFile[64];
	FILE *in, *out;
	int  c;

	printf("Enter file name to be copied: ");
	scanf("%63s", inFile);
	printf("Enter output file: ");
	scanf("%63s", outFile);

	if ((in = fopen(inFile, "r")) == NULL) {
		fprintf(stderr, "Can't open %s for reading.\n", inFile);
		return 1;
	}

	if ((out = fopen(outFile, "w")) == NULL) {
		fprintf(stderr, "Can't opem %s for writing.\n", outFile);
		return 2;
	}

	while ((c = getc(in)) != EOF) {
		if(islower(c))
			c = c - 'a' + 'A';
		putc(c, out);
	}

	fclose(in);
	fclose(out);

	return 0;
}

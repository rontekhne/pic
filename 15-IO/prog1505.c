/* prog1505. Copying files */

#include <stdio.h>

int main(void)
{
	char inName[64], outName[64];
	FILE *in, *out;
	int  c;

	/* get files names from user */

	printf("Enter name of file to be copied: ");
	scanf("%63s", inName);
	printf("Enter name of output file: ");
	scanf("%63s", outName);

	/* open input and output files */

	if ((in = fopen(inName, "r")) == NULL) {
		printf("Can't open %s for reading.\n", inName);
		return 1;
	}

	if ((out = fopen(outName, "w")) == NULL) {
		printf("Can't open %s for writting.\n", outName);
		return 2;
	}

	/* copy in to out */

	while ((c = getc(in)) != EOF)
		putc(c, out);

	/* close open files */

	fclose(in);
	fclose(out);

	printf("File has been copied.\n");

	return 0;
}

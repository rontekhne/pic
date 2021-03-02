/* exe1301. Define a type functionPtr() (using typedef) that represents a
 * pointer to a function that returns an int and that takes no arguments.
 * Refer to Chapter 10, "Pointers", for the details on how to declare a
 * variable of this type.
 * by Ron, March 2021 */

#include <stdio.h>

typedef int (*functionPtr) (void);

int intSize(void)
{
  int x = ~0;
  int i = 0;

  while (x != 0x0) {
    x <<= 1;
    ++i;
  }
  return i;
}	

int main(void)
{
	functionPtr fnPtr;

	fnPtr = intSize;
	printf("%i\n", fnPtr());

	return 0;
}


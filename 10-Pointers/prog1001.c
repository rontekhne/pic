/* prog1001. Illustrating pointers */

#include <stdio.h>

int main(void)
{
  int count = 10, x;
  int *intPointer;

  int_pointer = &count;
  x = *intPointer;

  printf("count = %i, x = %i\n", count, x);

  return 0;
}

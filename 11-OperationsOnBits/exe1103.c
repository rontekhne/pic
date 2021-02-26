/* exe1103. Given that the expression ~0 produces an integer that contains all
 * 1s, write a function called intSize() that returns the number of bits
 * contained in an int on your particular machine.
 * by Ron, Feb 2021 */

#include <stdio.h>

int main(void)
{
  size_t intSize(void);

  printf("intSize() -> %lu bits.\n", intSize());
  printf("sizeof() -> %lu bits.\n", sizeof(int) * 8);

  return 0;
}

size_t intSize(void)
{
  int x = ~0;
  size_t i = 0;

  while (x != 0x0) {
    x <<= 1;
    ++i;
  }

  return i;
}

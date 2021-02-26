/* exe1107. Write a function called bitpatGet() to extract a specified set of
 * bits. Have it takes three arguments: the first an unsigned int, the second
 * an integer starting bit number, and the third a bit count. Using the 
 * convention that bit numbering starts at 0 with the leftmost bit, extract the
 * specified number of bits from the first argument and return the result. So the 
 * call:
 * bitpatGet(x, 0, 3);
 * extracts the three leftmost bits from x, The call:
 * bitpatGet(x, 3, 5);
 * extracts five bits starting with the fourth bit in from the left.
 * by Ron, Feb 2021 */

#include <stdio.h>

int main(void)
{
  size_t intSize(void);
  unsigned int bitpatGet(unsigned int w, int position, int nBits);
  const unsigned int x = 0xe1f4;

  printf("%x\n", bitpatGet(x, 0, 3));

  /* reverse 8-bit word */
  printf("%x", bitpatGet(x, 28, 4));
  printf("%x", bitpatGet(x, 24, 4));
  printf("%x", bitpatGet(x, 20, 4));
  printf("%x\n", bitpatGet(x, 16, 4));

  /* outside of the word boundaries */
  printf("%x\n", bitpatGet(x, 32, 4));
  printf("%x\n", bitpatGet(x, -1, 4));

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

unsigned int bitpatGet(unsigned int w, int position, int nBits)
{
  size_t intSize(void);
  unsigned bitPosition, bits;

  if (position < 0 || position > (int) intSize() - nBits)
    return -1;

  bits = ~(~0 << nBits);
  bitPosition = intSize() - position - nBits;

  return w >> bitPosition & bits;
}


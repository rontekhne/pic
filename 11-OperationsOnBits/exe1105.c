/* exe1105. Write a function called bitTest() that takes two arguments: an
 * unsigned int and a bit number n. Have the function return 1 bit number
 * n if it is on inside the word, and 0 if it is off. Assume that bit number
 * 0 references the leftmost bit inside the integer. Also write a corresponding
 * function called bitSet() that takes two arguments: an unsigned int and a bit
 * number n. Have the function return the result of turning bit n on inside 
 * the integer.
 * by Ron, Feb 2021 */

#include <stdio.h>

int main(void)
{
  size_t intSize(void);
  size_t bitTest(unsigned int w, size_t n);
  unsigned int bitSet(unsigned int w, size_t n);
  unsigned int w = 0xfffff0f0u;
  const size_t bit = 0; /* LSB */

  /* Out of bounds check */
  if (bit < 0 || bit > intSize() - 1) {
    printf("Bit number is outside of word-size bound.\n");
    return -1;
  }

  /* Test the state of the bit */
  printf("%x: bit %lu is %s\n", w, bit, (bitTest(w, bit)) ? "ON" : "OFF");

  /* Change the state of the bit */
  printf("%x: turned bit %lu ON\n", bitSet(w, bit), bit);

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
  
size_t bitTest(unsigned int w, size_t n)
{
  size_t intSize(void);

  size_t offset, mask;

  offset = intSize() - 1 - n;
  mask = 0x1 << offset;

  return w & mask; /* extract en return the bit */
}

unsigned int bitSet(unsigned int w, size_t n)
{
  size_t intSize(void);

  size_t offset, mask;

  offset = intSize() - 1 - n;
  mask = 0x1 << offset;

  return w | mask; /* turn on bit n and return value */
}


/* exe1108. Write a function called bitpatSet() to set a specified set of bits
 * to a particular value. The function should take four arguments: a pointer to 
 * an unsigned int in which the specified bits are to be set; another unsigned 
 * int containing the value to which the specified bits are to be set, right 
 * adjusted in the unsigned int; a third int that specifies the starting bit number
 * (with the leftmost bit numbered 0); and a fourth int specifying the size of
 * the field. So the call:
 * bitpatSet(&x, 0, 2, 5);
 * has the effect of setting the five bits contained in x, beginning with the
 * third bit from the left(bit number 2), to 0. Similarly, the call
 * bitpatSet(&x, 0x55u, 0, 8);
 * sets the eight bits of x to hexadecimal 55.
 * Make no assumptions about the particular size of an int (refer to exercise 
 * 3 in this chapter).
 * by Ron, Feb 2021 */

#include <stdio.h>

int main(void)
{
  size_t intSize(void);
  void bitpatSet(unsigned int *w, unsigned int value, int startingBit, int field);  
  unsigned int x = 0xffff;

  bitpatSet(&x, 0x55u, 16, 8);
  printf("%x\n", x);
  bitpatSet(&x, 0x0u, 28, 4);
  printf("%x\n", x);
  bitpatSet(&x, 0x1u, 31, 1);
  printf("%x\n", x);

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

void bitpatSet(unsigned int *w, unsigned int value, int startingBit, int field)
{
  size_t intSize(void);
  unsigned int mask;
  int pos;

  pos = intSize() - startingBit - field;
  mask = ~(~(~0x0 << field) << pos);
  *w &= mask;
  *w |= (value << pos);
}


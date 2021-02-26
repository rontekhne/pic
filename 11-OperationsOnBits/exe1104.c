/* exe1104. Using the result obtained in exercise 3, modify the rotate()
 * function from Program 11.4 so that it no longer makes any assumptions
 * about the size of an int.
 * by Ron, Feb 2021 */

#include <stdio.h>

int main(void)
{
  size_t intSize(void);
  unsigned int rotate(unsigned int value, int n);
  unsigned int w1 = 0xabcde00u, w2 = 0xffff1122u;

  printf("%x\n", rotate(w1, 8));
  printf("%x\n", rotate(w1, -16));
  printf("%x\n", rotate(w2, 4));
  printf("%x\n", rotate(w2, -2));
  printf("%x\n", rotate(w1, 0));
  printf("%x\n", rotate(w1, 44));

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

unsigned int rotate(unsigned int value, int n)
{
  unsigned int result, bits;
  const size_t size = intSize();

  if (n > 0)
    n = 0 % size;
  else
    n = -(-n % size);

  if (n == 0)
    result = value;
  else if (n > 0) { /* left rotate */
    bits = value >> (size - n);
    result = value << n | bits;
  } else { /* right rotate */
    n = -n;
    bits = value << (size - n);
    result = value >> n | bits;
  }

  return result;
}

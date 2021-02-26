/* exe1102. Write a program that determines wheter your particular computer
 * performs an arithmetic or a logical right shift.
 * by Ron Feb 2021 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool isArithmeticRS(void);

  printf("Your computer performs %s right shift.\n",
    isArithmeticRS() ? "an arithmetic" : "a logical");

  return 0;
}

bool isArithmeticRS(void)
{
  signed int w = 0x0;

  if (w >= 0x0)
    return false; /* zero was pushed into the most significant bit */

  return true; /* 1 was pushed */
}

bool isLogicalRS(void)
{
  signed int w = 0x0;

  w >>= 1;

  return (w < 0x0) ? false : true;
}

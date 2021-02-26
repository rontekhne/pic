/* exe1210. Consider the defintion of the printint macro from this chapter:
 * #define printint(n) printf(# n " = %i\n', n)
 * Could the following be used to display the value of the 100 variables
 * x1-x100? Why or Why not?
 * Answer = Yes
 * for (i = 1; i < 100; ++i)
 *  printint(i);
 *  by Ron, Feb 2021 */

#include <stdio.h>

#define printint(n) printf(# n " = %i\n", n)

int main(void)
{
  int i;

  for (i = 1; i <= 100; ++i)
    printint(i);

  return 0;
}


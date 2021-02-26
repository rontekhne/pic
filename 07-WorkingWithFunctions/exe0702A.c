/* exe0702A. Modify Program 7.4 so the value of triangularNumber is
 * returned by the function. Then go back to Program 4.5 and change 
 * that program so that it calls the new version of the
 * calculateTriangularNumber() function.
 * by Ron, Feb 2021 */
/* prog0704. Calculating the nth triangular number */

#include <stdio.h>

int calculateTriangularNumber(int n)
{
  int i, triangularNumber = 0;

  for (i = 1; i <= n; ++i)
    triangularNumber += i;

  return triangularNumber;
}

int main(void)
{
  printf("%i\n", calculateTriangularNumber(10));
  printf("%i\n", calculateTriangularNumber(20));
  printf("%i\n", calculateTriangularNumber(50));

  return 0;
}

/* exe1209. Write a macro ABSOLUTEVALUE that computes the absolute
 * value of its argument. Make certain that an expression such as
 * ABSOLUTEVALUE(x + delta);
 * is properly evaluated by the macro.
 * by Ron, Feb 2021 */

#include <stdio.h>

#define ABSOLUTEVALUE(x) ((x) >= 0) ? x : -x

int main(void)
{
  int x, delta;

  x = -123;
  delta = 9;

  printf("%i\n", ABSOLUTEVALUE(x + delta));

  return 0;
}

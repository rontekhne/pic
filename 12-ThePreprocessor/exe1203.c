/* exe1203. Define a macro MIN that gives the minimum of two values. Then
 * write a program to test the macro definition.
 * by Ron, Feb 2021 */

#include <stdio.h>

#define MIN(a,b) ((a) < (b)) ? (a) : (b)

int main(void)
{
  int y, x;

  printf("Enter two integer values: ");
  scanf("%i%i", &y, &x);

  printf("%i\n", MIN(y,x));

  return 0;
}

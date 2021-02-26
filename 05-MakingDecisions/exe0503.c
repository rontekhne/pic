/* exe0503. Write a program that accepts two integer values typed in by the
 * user. Display the result of dividing the first integer by the second, to
 * three-decimal-place accuracy. Remember to have the program check for
 * division by zero.
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
  int value1, value2;

  printf("Type in two numbers to divide: ");
  scanf("%i%i", &value1, &value2);

  if (value2 == 0)
    printf("Division by zero.\n");
  else
    printf("%.3f\n", (float) value1 / value2);

  return 0;
}

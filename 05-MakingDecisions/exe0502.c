/* exe0502. Write a program that asks the user to type in two integer values
 * at the terminal. Test these two numbers to determine if the first is
 * evenly divisible by the second, and then display an appropriate message
 * at the terminal.
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
  int value1, value2;

  printf("Enter two integer values to test their divisibility: ");
  scanf("%i%i", &value1, &value2);

  if (value1 % value2 == 0)
    printf("%i is evenly divisible by %i\n", value1, value2);
  else
    printf("%i is NOT evenly divisble by %i\n", value1, value2);

  return 0;
}

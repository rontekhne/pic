/* exe0707. Write a function that raises an integer to a positive integer
 * power. Call the function x_to_the_n() taking two integer arguments x and n.
 * Have the function return a long int, which represents the results of calculating
 * x to the n.
 * by Ron, Feb 2021 */

#include <stdio.h>

long int xToTheN(int x, int n)
{
  long int result = 1;
  int      i;

  do {
    result *= x;
    --n;
  }
  while (n != 0);

  return result;
}

int main(void)
{
  int base, exp;

  printf("Enter base and exponent: ");
  scanf("%i%i", &base, &exp);

  printf("%li\n", xToTheN(base, exp));

  return 0;
}

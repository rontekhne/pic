/* exe0710. Write a function prime() that returns 1 if its argument
 * is a prime number and returns 0 otherwise.
 * by Ron, Feb 2021 */

#include <stdio.h>
#include <stdbool.h>

bool prime(unsigned long long int n)
{
  bool isPrime = false;
  int i;

  if (n < 2)
    return false;
  else if (n == 2)
    return true;
  
  for (i = 2; i < n; ++i)
    if (n % i == 0)
      return false;
    else
      isPrime = true;

  return isPrime;
}

int main(void)
{
  unsigned long long int n;

  printf("Enter a number to test if it's prime: ");
  scanf("%llu", &n);

  printf("%i\n", prime(n));

  return 0;
}

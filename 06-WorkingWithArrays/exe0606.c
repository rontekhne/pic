/* exe0606. You don't need to use an array to generate Fibonacci 
 * numbers. You can simply use three variables: two to store
 * the previous two Fibonacci numbers and one to store the
 * current one. Rewrite Program 6.3 so that arrays are not
 * used. Because you're no longer using an array, you need to
 * display each Fibonacci number as you generate it.
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
  unsigned long long int Fibonacci;
  unsigned long long int previous1, previous2;
  int                    i;

  previous2 = 0;
  previous1 = 1;
  printf("%llu %llu ", previous2, previous1);

  for (i = 0; i < 50; ++i) {
    Fibonacci = previous2 + previous1;
    printf("%llu ", Fibonacci);
    previous2 = previous1;
    previous1 = Fibonacci;
  }
  printf("\n");

  return 0;
}

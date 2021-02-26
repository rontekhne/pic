/* exe0608. Find out if your compiler supports variable-length arrays.
 * If it does, write a small program to test the feature out.
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
  int n;
  int P[n];
  int i, j;

  printf("Generate prime numbers up to... ");
  scanf("%i", &n);

  for (i = 0; i < n; ++i)
    P[i] = 0;

  for (i = 2; i <= n; ++i) 
    for (j = 2; i * j <= n; ++j)
      P[i*j] = 1;

  for (i = 0; i < n; ++i)
    if (P[i] == 0)
      printf("%i ", i);
  printf("\n");

  return 0;
}

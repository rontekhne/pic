/* exe0714A. Rewrite the functions developed in the last four exercises
 * to use global variables instead of arguments. For example, the
 * preceding exercise should sort a globally defined array.
 * by Ron, Feb 2021 */

/* exe0711 */

#include <stdio.h>
 
int a[] = { 1, 3, 5, 7, 9 };

int main(void)
{
 int arraySum(int a[], int n);

 printf("array[] = { 1, 3, 5, 7, 9 } sum = %i\n", arraySum(a, 5));

 return 0;
}

int arraySum(int a[], int n)
{
  int i, sum = 0;

  for (i = 0; i < n; ++i)
    sum += a[i];

  return sum;
}

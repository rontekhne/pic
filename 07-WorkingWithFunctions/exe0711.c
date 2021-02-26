/* exe0711. Write a function called arraySum() that takes two
 * arguments: an integer array and the number of elements
 * in the array. Have the function return as its result the sum
 * of the elements in the array.
 * by Ron, Feb 2021 */

#include <stdio.h>

int main(void)
{
 int arraySum(int a[], int n);
 int array[] = { 1, 3, 5, 7, 9 };

 printf("array[] = { 1, 3, 5, 7, 9 } sum = %i\n", arraySum(array, 5));

 return 0;
}

int arraySum(int a[], int n)
{
  int i, sum = 0;

  for (i = 0; i < n; ++i)
    sum += a[i];

  return sum;
}

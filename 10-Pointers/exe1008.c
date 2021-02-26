/* exe1008. Write a function called sort3() to sort three integers into
 * ascending order. (This function is not to be implemented with arrays
 * by Ron, Feb 2021 */

#include <stdio.h>

void sort3(int *a)
{
  int i, j, temp;

  for (i = 0; i < 3 - 1; ++i)
    for (j = i + 1; j < 3; ++j)
      if (*(a+i) > *(a+j)) {
        temp = *(a+i);
        *(a+i) = *(a+j);
        *(a+j) = temp;
      }
}

int main(void)
{
  int i;
  int array[16] = { 34, -5, 6 };
  void sort3(int *a);

  printf("The array before the sort:\n");
  for (i = 0; i < 3; ++i)
    printf("%i ", array[i]);

  sort3(array);

  printf("\n\nThe array after the sort:\n");
  for (i = 0; i < 3; ++i)
    printf("%i ", array[i]);

  printf("\n");

  return 0;
}

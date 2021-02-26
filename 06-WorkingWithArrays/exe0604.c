/* exe0604. Write a program that calculates the average of an array of
 * 10 floating-point values.
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
  float values[10] = { 2.2f, 9.4f, 2.5f, 1.7f, 7.0f, 5.7f, 3.3f, 9.2f, 8.5f, 5.9f };
  float sum = 0;
  float average;
  int   i;

  for (i = 0; i < 10; ++i)
    sum += values[i];

  average = sum / 10;
  printf("Average = %.1f\n", average);

  return 0;
}

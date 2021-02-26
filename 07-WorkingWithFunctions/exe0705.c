/* exe0705. The criteria for termination of the loop in the
 * squareRoot() function of Program 7.8 is not suitable for use
 * when computing the square root of very large or very small
 * numbers. Rather than comparing the difference between the value
 * of x and the value of guess to power of 2, the program should
 * compare the ratio of the two values to 1. The closer thi ratio 
 * gets to 1, the more accurate the approximation of the square root.
 * by Ron, Feb 2021 */

/* prog0708. Calculating the square root of a number */

#include <stdio.h>

float absoluteValue(float x)
{
  if (x < 0)
    x = -x;
  return x;
}

float squareRoot(float x)
{
  const float epsilon = .00001;
  float       guess = 1.0;

  while (absoluteValue(guess * guess - x) / 1 >= epsilon)
    guess = (x / guess + guess) / 2.0;

  return guess;
}

int main(void)
{
  printf("squareRoot(2.0) = %f\n", squareRoot(2.0));
  printf("squareRoot(144.0) = %f\n", squareRoot(144.0));
  printf("squareRoot(17.5) = %f\n", squareRoot(17.5));

  return 0;
}

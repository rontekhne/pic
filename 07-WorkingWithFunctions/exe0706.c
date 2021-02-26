/* exe0706. Modify Program 7.8 so that the squareRoot() function accepts
 * a double precision argument and returns the result as a double precision
 * value. Be certain to change the value of the variable epsilon to reflect 
 * the fact that double precision variables are now being used.
 * by Ron, Feb 2021 */

/* prog0708. Calculating the square root of a number */

#include <stdio.h>

float absoluteValue(float x)
{
  if (x < 0)
    x = -x;
  return x;
}

double squareRoot(double x)
{
  const float  epsilon = .0000001;
  double       guess = 1.0;

  while (absoluteValue(guess * guess - x) >= epsilon)
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

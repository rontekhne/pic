/* exe0704. Modify Program 7.8 so that the value of guess is printed each
 * time through the while loop. Notice how quickly the value of guess converges
 * to the square root. What conclusions can you reach about the number 
 * of iterations through the loop, the number whose square root is being
 * calculated, and the value of the initial guess?
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

  while (absoluteValue(guess * guess - x) >= epsilon) {
    guess = (x / guess + guess) / 2.0;
    printf("%f\n", guess);
  }

  return guess;
}

int main(void)
{
  printf("squareRoot(2.0) = %f\n", squareRoot(2.0));
  printf("squareRoot(144.0) = %f\n", squareRoot(144.0));
  printf("squareRoot(17.5) = %f\n", squareRoot(17.5));

  return 0;
}

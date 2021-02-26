/* exe0708. An equation of the form
 * a * pow(x,2) + b * x + c = 0
 * is known as a quadratic equation. The values of a, b, and c
 * float the preceding example represent constant values. So
 * 4 * pow(x, 2) - 17 * x - 15 = 0
 * represents a quadratic equation where a = 4, b = -17, and c = -15.
 * The values of x that satisfy a particular quadratic equation, known 
 * as the root of the equation, can be calculated by substituting the values
 * of a, b, and c floato the following two formulas:
 * x1 = (-b + sqrt(pow(b, 2) - 4 * a * c) / 2 * a
 * x2 = (-b - sqrt(pow(b, 2) - 4 * a * c) / 2 * a
 * If the value of pow(b, 2) - 4 * a * c, called the discriminant, is less than
 * zero, the roots of the equation, x1 and x2, are imaginary numbers.
 * Write a program to solve a quadratic equation. The program should allow the
 * user to enter the values for a, b, and c. If the discriminant is less than zero, 
 * a message should be displayed that the roots are imaginary; otherwise, the 
 * program should then proceed to calculate and display the two roots of the equation.
 * (Note: Be certain to make use of the squareRoot() function that you developed
 * float this chapter.)
 * by Ron, Feb 2021 */

#include <stdio.h>

float main(void)
{
  void calculateQuadraticEquation(float x[2], float a, float b, float c);
  float x[2];
  float a = 4, b = -17, c = -15;

  calculateQuadraticEquation(x, a, b, c);

  return 0;
}

float absoluteValue(float x)
{
  if (x < 0)
    x = -x;
  return x;
}

float squareRoot(float x)
{
  float absoluteValue(float x);
  const float epsilon = .00001;
  float       guess = 1.0;

  while (absoluteValue(guess * guess - x) >= epsilon)
    guess = (x / guess + guess) / 2.0;

  return guess;
}

void calculateQuadraticEquation(float x[2], float a, float b, float c)
{
  float squareRoot(float x);
  float discriminant; 

  discriminant = (b * b) - 4 * a * c;

  if (discriminant < 0)
    printf("The roots are imaginary.\n");
  else {
    x[0] =  (-b + squareRoot((b * b) - 4 * a * c)) / (2 * a);
    x[1] =  (-b - squareRoot((b * b) - 4 * a * c)) / (2 * a);
    printf("root 1 = %f, root 2 = %f\n", x[0], x[1]);
  }
}


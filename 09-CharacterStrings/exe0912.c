/* exe0912. Write a function called strToFloat() that converts a character
 * string into a floating-point value. Have the function accept an optional 
 * leading minus sign. So, the call
 * strToFloat("-867.6921");
 * should return the value -867.6921.
 * by Ron, Feb 2021 */

#include <stdio.h>

int main(void)
{
  float strToFloat(char string[]);

  printf("%.4f\n", strToFloat("-867.6921"));

  return 0;
}

float strToFloat(char string[])
{
  float n;

  sscanf(string, "%f", &n);

  return n;
}

/* exe0911. Extend the strToInt() function from Program 9.11 so that if the
 * first character of the string is a minus sign, the value that follows is
 * taken as a negatve number.
 * by Ron, Feb 2021 */

/* prog0911. Converting a string to its integer equivalent */

#include <stdio.h>
#include <stdbool.h>

int strToInt(const char string[])
{
  int i, intValue, result = 0;
  bool isNegative = false;

  if (string[0] == '-')
    isNegative = true;

  for (isNegative ? (i = 1) : (i = 0) ; string[i] >= '0' && string[i] <= '9'; ++i) {
    intValue = string[i] - '0';
    result = result * 10 + intValue;
  }
  
  if (isNegative)
    result = -result;

  return result;
}

int main(void)
{
  int strToInt(const char string[]);

  printf("%i\n", strToInt("-245"));
  printf("%i\n", strToInt("100") + 25);
  printf("%i\n", strToInt("13x5"));

  return 0;
}

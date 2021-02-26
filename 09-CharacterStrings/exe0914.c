/* exe0914. Write a function called intToStr() that converts an integer value
 * into a character string. Be certain the function handles negative integers
 * properly.
 * by Ron, Feb 2021 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  void intToStr(char str[], int n);
  char str[81];
  
  intToStr(str, 497);
  printf("%s\n", str);

  intToStr(str, -497);
  printf("%s\n", str);

  return 0;
} 

void intToStr(char str[], int n)
{
  int i, j, digit;
  char temp[81];
  bool isNegative = false;

  if (n < 0) {
    isNegative = true;
    n = -n;
  }

  i = 0;
  do {
    digit = n % 10;
    temp[i] = digit + '0';
    n /= 10;
    ++i;
  } while (n != 0);
  temp[i] = '\0';

  for (--i, j = 0; i >= 0; --i, ++j) {
    if (j == 0 && isNegative) {
      str[j] = '-';
      ++j;
    }
    str[j] = temp[i];
  }
  str[j] = '\0';
}

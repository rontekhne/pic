/* exe0913. If c is a lowercase character, the expression c - 'a' + 'A' produces
 * the uppercase equivalent of c, assuming an ASCII character set.
 * Write a function called uppercase() that converts all lowercase characters
 * int a string into their uppercase equivalent.
 * by Ron, Feb 2021 */

#include <stdio.h>

int main(void)
{
  void uppercase(char string[]);
  char text[] = "i love cats because they're weird";

  uppercase(text);

  printf("%s\n", text);

  return 0;
}

void uppercase(char string[])
{
  int i;

  for (i = 0; string[i] != '\0'; ++i)
    if (string[i] >= 'a' && string[i] <= 'z')
      string[i] = string[i] - 'a' + 'A';
}

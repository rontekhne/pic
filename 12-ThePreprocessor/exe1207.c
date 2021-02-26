/* exe1207. Write a macro ISALPHABETIC that gives a nonzero value if a
 * character is an alphabetic character. Have the macro use the
 * ISLOWERCASE macro defined in the chapter text and the ISUPPERCASE
 * macro defined in chapter 6.
 * bby Ron, Feb 2021 */

#include <stdio.h>

#define ISUPPERCASE(c)    ((c) >= 'A' && (c) <= 'Z') ? 1 : 0
#define ISLOWERCASE(c)    ((c) >= 'a' && (c) <= 'z') ? 1 : 0
#define ISALPHABETIC(c)   (ISUPPERCASE(c) || ISLOWERCASE(c)) ? 1 : 0

int main(void)
{
  char c;

  printf("Enter a single character to test if it's an alphabetic letter: ");
  scanf("%c", &c);

  printf("%i\n", ISALPHABETIC(c));

  return 0;
}

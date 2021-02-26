/* exe1207. Write a macro ISDIGIT that gives a nonzero value if a character
 * is a digit '0' through '9'. Use this macro in the definition of another
 * macro ISSPECIAL, which gives a nonzero result is a character is a special
 * character; that is, not alphabetic and not a digit. Be certain to use
 * the ISALPHABETIC macro developed in exercise 7.
 * bby Ron, Feb 2021 */

#include <stdio.h>

#define ISUPPERCASE(c)    ((c) >= 'A' && (c) <= 'Z') ? 1 : 0
#define ISLOWERCASE(c)    ((c) >= 'a' && (c) <= 'z') ? 1 : 0
#define ISALPHABETIC(c)   (ISUPPERCASE(c) || ISLOWERCASE(c)) ? 1 : 0
#define ISDIGIT(c)        ((c) >= '0' && (c) <= '9') ? 1 : 0
#define ISSPECIAL(c)      (!ISALPHABETIC(c) && !ISDIGIT(c)) ? 1 : 0

int main(void)
{
  char c;

  printf("Enter a single character: ");
  scanf("%c", &c);

  if (ISALPHABETIC(c))
    printf("alphabetic.\n");
  else if (ISDIGIT(c))
    printf("digit.\n");
  else if (ISSPECIAL(c))
    printf("special.\n");
  else
    printf("undefined.\n");

  return 0;
}

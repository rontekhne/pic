/* exe1206. Write a macro ISUPPERCASE that gives a nonzero value if a 
 * character is an uppercase letter.
 * by Ron, Feb 2021 */

#include <stdio.h>

#define ISUPPERCASE(c) ((c) >= 'A' && (c) <= 'Z') ? 1 : 0

int main(void)
{
  char c;

  printf("Enter a single character: ");
  scanf("%c", &c);

  printf("%i\n", ISUPPERCASE(c));

  return 0;
}

/* exe1211. Test the system library functions that are equivalent to the 
 * macros you developed in the preceding three exercises. The library
 * function are called isupper(), isalpha(), and isdigit(). You need to
 * include the system header file <ctype.h> in your program in order 
 * to use them.
 * by Ron, Feb 2021 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char c;

  printf("Enter a character: ");
  scanf("%c", &c);

  if (isalpha(c))
    printf("alphabetic.\n");
  else if (isdigit(c))
    printf("digit.\n");
  else
    printf("special.\n");

  return 0;
}

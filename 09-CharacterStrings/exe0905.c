/* exe0905. Write a function called findString() to determine if one character
 * string exists inside another string. The first argument to the function should
 * be the character string that is to be searched and the second argument is the 
 * string you are interested in finding. If the function finds the specified string,
 * have it return the location in hte source string where the string was found. If the
 * function does not find the string, have it return -1. So, for example, the call
 * index = findString("a chatterbox", "hat");
 * searches the string "a chatterbox", for the string "hat". Because "hat" does
 * exist inside the source string, the function returns 3 to indicate the starting
 * position inside the source string where "hat" was found.
 * by Ron, Feb 2021 */

#include <stdio.h>

int main(void)
{
  int findString(const char source[], const char search[]);
  int index;

  index = findString("a chatterbox", "hat");
  printf("%i\n", index);

  index = findString("false but true", "bit");
  printf("%i\n", index);

  return 0;
} 

int findString(const char source[], const char search[])
{
  int index, i, j;

  for ( i = 0, j = 0; source[i] != '\0'; ++i) {
    if (source[i] == search[j]) {
      index = i;
      while (source[i] == search[j])
        ++i, ++j;
      if (search[j] == '\0')
        return index;
      else 
        i = index, j = 0;
    }
  }

  return -1;
}

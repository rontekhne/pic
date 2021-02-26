/* Write a function called removeString() to remove a specified number of 
 * characters from a character string. The function should take three arguments:
 * the source string, the starting index number in the source string, and the 
 * number of characters to remove. So, if the character array text contains the
 * string "the wrong son", the call
 * removeString(text, 4, 6);
 * has the effect of removing the characters "wrong" (the word "wrong" plus
 * the space that follows) from the array text. The resulting string inside text
 * is then "the son".
 * by Ron, Feb 2021 */

#include <stdio.h>

int main(void)
{
  void removeString(char source[], int start, int count);
  char text[] = "the wrong son"; 

  removeString(text, 4, 6);
  printf("%s\n", text);

  return 0;
}

void removeString(char source[], int start, int count)
{
  int i, offset;

  for (i = start, offset = start + count; source[offset] != '\0'; ++i, ++offset)
    source[i] = source[offset];
  source[i] = '\0';
}


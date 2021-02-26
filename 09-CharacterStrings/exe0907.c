/* exe0907. Write a function called insertString() to insert one character string
 * into another string. The arguments to the function should consist of the source
 * string, the string to be inserted, and  the position in the source string where
 * the string is to be inserted. So, the call
 * insertString(text, "per", 10);
 * with text as originally defined in the previous exercise, results in the 
 * character string "per" being inserted inside text, beginning at textx[10].
 * Therefore, the character string "the wrong person" is stored inside the text 
 * array after the function returned.
 * by Ron, Feb 2021 */

#include <stdio.h>

int main(void)
{
  void insertString(char source[], char string[], int position);
  char text1[81] = "the wrong son";
  char text2[81] = "black bird";

  insertString(text1, "per", 10);
  printf("%s\n", text1);

  insertString(text2, " sing", 10);
  printf("%s\n", text2);

  return 0;
}

void insertString(char source[], char string[], int position)
{
  char buffer[81];
  int  i, j;

  for (i = 0, j = position; source[j] != '\0'; ++i, ++j)
    buffer[i] = source[j];
  buffer[i] = '\0';

  for (i = 0; string[i] != '\0'; ++i, ++position)
    source[position] = string[i];

  for (i = 0; buffer[i] != '\0'; ++i, ++position)
    source[position] = buffer[i];
  source[position] = '\0';
}


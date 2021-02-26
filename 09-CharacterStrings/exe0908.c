/* exe0908. Using the findString(), removeString(0, and insertString() functions
 * from preceding exercises, write a function called replaceString() that takes 
 * three character string arguments as follows
 * replaceString(source, s1, s2);
 * and that replaces s1 inside source with the character string s2. The function
 * should call the findString() function to locate s1 inside source, then call the
 * removeString() function to remove s1 from source, and finally call the 
 * insertString() function to insert s2 into source at the proper location.
 * So, the function call
 * replaceString(text, "1", "one");
 * replaces the first ocurrence of the string "1" inside the character string text,
 * if it exists, with the string "one". Similarly, the function call
 * replaceString(text, "*", "");
 * has the effect of removing the first asterisk inside the text array because
 * the replacement string is the null string.
 * by Ron, Feb 2021 */

#include <stdio.h>
#include <string.h>

int main(void)
{
  void replaceString(char source[], char s1[], char s2[]);
  char text1[] = "I just got 1 dollar.";
  char text2[] = "I just got 1 *star.";

  replaceString(text1, "1", "one");
  printf("%s\n", text1);

  replaceString(text2, "*", "");
  printf("%s\n", text2);

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

void removeString(char source[], int start, int count)
{
  int i, offset;

  for (i = start, offset = start + count; source[offset] != '\0'; ++i, ++offset)
    source[i] = source[offset];
  source[i] = '\0';
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

void replaceString(char source[], char s1[], char s2[])
{
  int findString(const char source[], const char search[]);
  void removeString(char source[], int start, int count);
  void insertString(char source[], char string[], int position);
  int index;

  index = findString(source, s1);
  removeString(source, index, strlen(s1));
  insertString(source, s2, index);
}

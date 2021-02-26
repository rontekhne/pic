/* exe0909. You can extend even further the usefulness of the replaceString()
 * function from the preceding exercise if you have it return a value that 
 * indicates whether the replacement succeeded, which means that the string 
 * to be replaced was found inside the source string. So, if the function 
 * returns true if the replacement succeeds and false if it does not, the loop
 * do
 *  stillFound = replaceString(text, " ", "");
 * while (stillFound);
 * could be used to remove all blank spaces from text, for example.
 * Incorporate this change into the replaceString() function and try it with
 * various character strings to ensure that it works properly.
 * by Ron, Feb 2021 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
  bool replaceString(char source[], char s1[], char s2[]);
  char text[] = "I just got one freaking dollar.";
  bool stillFound;

  do {
    stillFound = replaceString(text, " ", "");
  } while (stillFound);

  printf("%s\n", text);

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

bool replaceString(char source[], char s1[], char s2[])
{
  int findString(const char source[], const char search[]);
  void removeString(char source[], int start, int count);
  void insertString(char source[], char string[], int position);
  int index;
  bool found;

  if ((index = findString(source, s1)) >= 0)
    found = true;
  else
    return false;
  removeString(source, index, strlen(s1));
  insertString(source, s2, index);

  return found;
}

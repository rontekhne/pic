/* exe1009. Rewrite the readLine() function from Chapter 9 so that it
 * uses a character pointer rather than an array.
 * by Ron, Feb 2021 */

/* prog0908. Counting words in a piece of text */

#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return true;
  else
    return false;
}

void readLine(char *buffer)
{
  char character;

  do {
    character = getchar();
    *(buffer++) = character;
  } while (character != '\n');
  *(buffer-1) = '\0';
}

int countWords(const char string[])
{
  int i, wordCount = 0;
  bool lookingForWord = true;
  bool alphabetic(const char c);

  for (i = 0; string[i] != '\0'; ++i)
    if (alphabetic(string[i])) {
      if (lookingForWord) {
        ++wordCount;
        lookingForWord = false;
      }
    }else 
      lookingForWord = true;

  return wordCount;
}

int main(void)
{
  char text[81];
  int  totalWords = 0;
  int  countWords(const char string[]);
  void readLine(char *buffer);
  bool endOfText = false;

  printf("Type in your text.\n");
  printf("When you're done, press 'RETURN'.\n\n");

  while (!endOfText) {
    readLine(text);

    if (text[0] == '\0')
      endOfText = true;
    else
      totalWords += countWords(text);
  }

  printf("\nThere are %i words in the above text.\n", totalWords);

  return 0;
}

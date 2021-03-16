/* Finish the program that takes a word as a command-line
 * argument and looks up the word to see whether it is in
 * the array of terma and definitions, providing the 
 * definition if it is found, or informs the user that
 * the term is not in the program's glossary if it isn't
 * found.
 * by Ron, Mar 2021 */

#include <stdio.h>

struct entry
{
  char word[15];
  char definition[50];
};

int compareStrings(const char s1[], const char s2[])
{
  int  i = 0, answer;

  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    ++i;

  if (s1[i] < s2[i])
    answer = -1; 
  else if (s1[i] == s2[i])
    answer = 0;
  else
    answer = 1;

  return answer;
}

int lookup(const struct entry dictionary[], const char search[], const int entries)
{
  int low = 0;
  int high = entries - 1;
  int mid, result;
  int compareStrings(const char s1[], const char s2[]);

  while (low <= high) {
    mid = (low + high) / 2;
    result = compareStrings(dictionary[mid].word, search);

    if (result == -1)
      low = mid + 1;
    else if (result == 1)
      high = mid - 1;
    else
      return mid;
  }

  return -1;
}

int main(int argc, char *argv[])
{
  int lookup(const struct entry dictionary[], const char search[], const int entries);
  const struct entry dictionary[100] = 
    {
      { "aardvark", "a burrowing African mammal" },
      { "abyss", "a bottomless pit" },
      { "acumen" , "mentally sharp; keen" },
      { "addle", "to become confused" },
      { "aerie", "a high nest" },
      { "affix", "to append; attach" },
      { "agar", "a jelly made from seaweed" },
      { "ahoy", "a nautical call of greeting" },
      { "aigrette", "an ornamental cluster of feathers" },
      { "ajar", "partially opened" }
    };
  int  entries = 10;
  int  entry;
  
	if (argc != 2) {
		fprintf(stderr, "usage: lookup word.\n");
		return 1;
	}

  entry = lookup(dictionary, argv[1], entries);

  if (entry != -1)
    printf("%s\n", dictionary[entry].definition);
  else
    printf("Sorry, the word '%s' is not in my dictionary.\n", argv[1]);

  return 0;
}

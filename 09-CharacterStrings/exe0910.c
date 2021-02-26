/* exe0910. Write a function called dictionarySort() that sorts a dictionary,
 * as defined in Program 9.9 and 9.10, into alphabetical order.
 * by Ron, Feb 2021 */

/* prog0909. Modifying the dictionary lookup program using binary search */

#include <stdio.h>
#include <string.h>

struct entry
{
  char word[15];
  char definition[50];
};

int main(void)
{
  void dictionarySort(struct entry dictionary[], int entries);
  struct entry dictionary[100] = 
    {
      { "ajar", "partially opened" },
      { "ahoy", "a nautical call of greeting" },
      { "aerie", "a high nest" },
      { "addle", "to become confused" },
      { "agar", "a jelly made from seaweed" },
      { "aardvark", "a burrowing African mammal" },
      { "acumen" , "mentally sharp; keen" },
      { "abyss", "a bottomless pit" },
      { "aigrette", "an ornamental cluster of feathers" },
      { "affix", "to append; attach" }
    };
  int entries = 10;
  int i;

  printf("Dictionary before sort:\n");
  for (i = 0; i < entries; ++i)
    printf("%s - %s\n", dictionary[i].word, dictionary[i].definition);

  dictionarySort(dictionary, entries);

  printf("\nDictionary after sort:\n");
  for (i = 0; i < entries; ++i)
    printf("%s - %s\n", dictionary[i].word, dictionary[i].definition);

  return 0;
}

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

void dictionarySort(struct entry dictionary[], int entries)
{
  int compareStrings(const char s1[], const char s2[]);
  struct entry temp;
  int i, j;

  for (i = 0; i < entries - 1; ++i)
    for (j = i + 1; j < entries; ++j)
      if (compareStrings(dictionary[i].word, dictionary[j].word) == 1) {
        sprintf(temp.word, dictionary[i].word);
        sprintf(temp.definition, dictionary[i].definition);
        sprintf(dictionary[i].word, dictionary[j].word);
        sprintf(dictionary[i].definition, dictionary[j].definition);
        sprintf(dictionary[j].word, temp.word);
        sprintf(dictionary[j].definition, temp.definition);
      }
}

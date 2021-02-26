/* prog1002. More pointer basics */

#include <stdio.h>

int main(void)
{
  char c = 'Q';
  char *charPointer = &c;

  printf("%c %c\n", c, *charPointer);

  c = '/';
  printf("%c %c\n", c, *charPointer);

  *charPointer = '(';
  printf("%c %c\n", c, *charPointer);

  return 0;
}

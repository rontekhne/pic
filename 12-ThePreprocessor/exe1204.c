/* exe1204. Define a macro MAX3 that gives the maximum of three values. Write 
 * a program to test the definition.
 * by Ron, Feb 2021 */

#include <stdio.h>

#define MAX3(a,b,c) ((a) > (b) && (a) > (c)) ? (a) : ((b) > (a) && (b) > (c)) ? (b) : (c)

int main(void)
{
  int x, y, z;

  printf("Enter three integer values to get the maximum: ");
  scanf("%i%i%i", &x, &y, &z);

  printf("%i\n", MAX3(x, y, z));

  return 0;
}

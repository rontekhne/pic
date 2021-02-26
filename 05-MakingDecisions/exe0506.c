/* exe0506. Write a program that takes an integer keyed  in from the
 * terminal and extracts and displays each digit of the integer in english.
 * So, if the user types in 932, the program should dsiplay
 * nine three two
 * Remember to display "zero" if the user types in just a 0.
 * (Note: This exercise is a hard one!)
 * by Ron, jan 2021 */

#include <stdio.h>

int main(void)
{
  int number, reversed, remainder;

  printf("Enter number: ");
  scanf("%i", &number);

  do {
    remainder = number % 10;
    reversed = reversed * 10 + remainder;
    number /= 10;
  }
  while (number != 0);

  do {
    remainder = reversed % 10;

    switch (remainder)
    {
      case 0:
        printf("zero ");
        break;
      case 1:
        printf("one ");
        break;
      case 2:
        printf("two ");
        break;
      case 3:
        printf("three ");
        break;
      case 4:
        printf("four ");
        break;
      case 5:
        printf("five ");
        break;
      case 6:
        printf("six ");
        break;
      case 7:
        printf("seven ");
        break;
      case 8:
        printf("eight ");
        break;
      case 9:
        printf("nine ");
        break;
    }
    reversed /= 10;
  }
  while (reversed != 0);
  printf("\n");

  return 0;
}

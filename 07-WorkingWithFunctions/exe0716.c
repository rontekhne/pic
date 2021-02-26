/* exe0716. Modify Program 7.15 so that the user can convert any
 * number of integers. Make provision for the program to 
 * terminate when a zero is typed in as the value of the 
 * number to be converted.
 * by Ron, Feb 2021 */

/* prog0715. Converting a positive integer to another base */

#include <stdio.h>

int      convertedNumber[64];
long int numberToConvert;
int      base;
int      digit = 0;

int getNumberAndBase(void)
{
  printf("Number to be converted? ");
  scanf("%i", &numberToConvert);
  if (numberToConvert == 0)
    return 0;
  printf("Base? ");
  scanf("%i", &base);

  if (base < 2 || base > 16) {
    printf("Bad base - must be between 2 and 16\n");
    base = 10;
  }
  return numberToConvert;
}

void convertNumber(void)
{
  do {
    convertedNumber[digit] = numberToConvert % base;
    ++digit;
    numberToConvert /= base;
  }
  while (numberToConvert != 0);
}

void displayConvertedNumber(void)
{
  const char baseDigits[16] = { 
    '0', '1', '2', '3', '4', '5', '6', '7', 
    '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
  int nextDigit;

  printf("Converted number = ");

  for (--digit; digit >= 0; --digit) {
    nextDigit = convertedNumber[digit];
    printf("%c", baseDigits[nextDigit]);
  }
  printf("\n");
}

int main(void)
{
  int getNumberAndBase(void);
  void convertNumber(void);
  void displayConvertedNumber(void);

  while (1) {
    if (getNumberAndBase() == 0)
      return 0;
    convertNumber();
    displayConvertedNumber();
  }

  return 0;
}

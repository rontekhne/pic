/* exe0715. Modify Program 7.14 so that the user is asked again to
 * type in the value of the base if an invalid base is entered.
 * The modified program should continue to ask for the
 * value of the base until a valid response is given.
 * ERRATA> actually it's Program 7.15
 * by Ron, Feb 2021 */

/* prog0715. Converting a positive integer to another base */

#include <stdio.h>

int      convertedNumber[64];
long int numberToConvert;
int      base;
int      digit = 0;

void getNumberAndBase(void)
{
  printf("Number to be converted? ");
  scanf("%i", &numberToConvert);
  do {
    printf("Base? ");
    scanf("%i", &base);
  }
  while (base < 2 || base > 16);

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
  void getNumberAndBase(void);
  void convertNumber(void);
  void displayConvertedNumber(void);

  getNumberAndBase();
  convertNumber();
  displayConvertedNumber();

  return 0;
}

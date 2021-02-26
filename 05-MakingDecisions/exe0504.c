/* exe0504. Write a program that acts like a print calculator.
 * The program should allow the user to type in expressions of the form
 * number operator
 * The following operators should be recognized by the program:
 * +   -   *   /   S   E
 * The S operator tells the program to set the "accumulator" to the
 * typed-in number. The E operator tells the program that execution
 * is to end. The arithmetic operations are performed on the contents
 * of the accumulator with the number that was keyed in acting as the
 * second operand. The following is a "sample run" showing how the program
 * should operate:
 * Begin Calculations
 * 10 S               Set Accumulator to 10
 * = 10.000000        Contents of Accumulator
 * 2 /                Divide by 2
 * = 5.000000         Contents of Accumulator
 * 55 -               Subtract 55
 * = -50.000000
 * 100.25 S           Set Accumulator to 100.25
 * = 100.250000
 * 4 *                Multiply by 4
 * = 401.000000
 * 0 E                End of program
 * End of Calculations
 * Make certain that the program detects division by zero and also
 * checks for unknown operators.
 * by Ron, Jan 2021 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  float  number, result = 0;
  char   operator;
  bool   divzero = false, unknownop = false, quit = false;

  printf("PRINTING CALCULATOR\n\n");

  do {
    printf("> ");
    scanf("%f %c", &number, &operator);

    switch (operator)
    {
      case '+':
        result += number;
        break;
      case '-':
        result -= number;
        break;
      case '*':
      case 'X':
      case 'x':
        result *= number;
        break;
      case '/':
        if (number == 0)
          divzero = true;
        else
          result /= number;
        break;
      case 'S':
      case 's':
        result = number;
        break;
      case 'E':
      case 'e':
        quit = true;
        break;
      default:
        unknownop = true;
        break;
    }

    if (quit) {
      return 0;
    }else if (divzero) {
      printf("Division by zero.\n");
      divzero = false;
    }else if (unknownop) {
      printf("Unknown operator.\n");
      unknownop = false;
    }else
      printf("= %f\n", result);
  }
  while (true);

  return 0;
}

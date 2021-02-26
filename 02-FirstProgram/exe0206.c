/* exe0206. What output might you expect from the following program?
 * Output: The result is 95
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
	int answer, result;

	answer = 100;
	result = answer - 10;
	printf("The result is %i\n", result + 5);

	return 0;
}

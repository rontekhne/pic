/* exe0305. What output would you expect from the following program?
 * Output: d = d
 * by Ron, Jan 2021 */

#include <stdio.h>

int main(void)
{
	char c, d;

	c = 'd';
	d = c;
	printf("d = %c\n", d);

	return 0;
}

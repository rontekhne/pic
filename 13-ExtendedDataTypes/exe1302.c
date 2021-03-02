/* exe1302. Write a function called monthName() that takes as its argument a 
 * value of type enum month(as defined in this chapter) and returns a pointer
 * to a character string containing the name of the month. In this way, you
 * can display the value of an enum month variable with a statement such as:
 * printf("%s\n", monthName(aMonth));
 * by Ron, Mar 2021 */

#include <stdio.h>

enum month 
	{ January = 1, February, March, April, May, June, July, 
		August, September, October, November, December };

int main(void)
{
	enum month aMonth;
	char *monthName(enum month aMonth);
	
	printf("%s\n", monthName(aMonth));

	return 0;
}	

char *monthName(enum month aMonth)
{
	char *months[] = 
		{ "", "January", "February", "March", "April", "May", "June", "July", 
		  "August", "September", "October", "November", "December" };

	return months[January];
}


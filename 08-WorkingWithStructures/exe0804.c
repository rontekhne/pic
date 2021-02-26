/* exe0804. If you take the value of N as computed in exercise 2,
 * subtract 621,049 from it, and then take that result modulo 7,
 * you get a number from 0 to 6 that represents the day of
 * the week (Sunday through Saturday, respectively) on which
 * the particular day falls. For example, the value of N computed
 * for August 8, 2004, is 732,239 as derived previously. 
 * 732,239 - 621,049 gives 111,190, and 111,190 % 7 gives 2, 
 * indicating that this date falls on a Tuesday.
 * Use the functions developed in the previous exercise to
 * develop a program that displays the day of the week on
 * which a particular date falls. MAke certain that the
 * program displays the day of the week in English(such as "Monday").
 * by Ron, Feb 2021 */

#include <stdio.h>

struct date
{
  int month;
  int day;
  int year;
};

int main(void)
{
  int calculateN(struct date d);
  char *calculateWeekday(int N);
  struct date d;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%i/%i/%i", &d.month, &d.day, &d.year);

  printf("%s\n", calculateWeekday(calculateN(d)));
}

int f(struct date d)
{
  return d.month <= 2 ? (d.year - 1) : d.year;
}

int g(struct date d)
{
  return d.month <= 2 ? (d.month + 13) : (d.month + 1);
} 

int calculateN(struct date d)
{
  int f(struct date d);
  int g(struct date d);

  return 1461 * f(d) / 4 + 153 * g(d) / 5 + d.day;
} 

char *calculateWeekday(int N)
{
  char *weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  int  day;

  day = (N - 621049) % 7;

  return weekdays[day];
}


/* exe0805. Write a function clockKeeper() that takes as
 * its argument a dateAndTime structure as defined in
 * this chapter. The function should call the timeUpdate()
 * function, and if the time reaches midnight, the function
 * should cal the dateUpdate function to switch over to the
 * next day. Have the function return the updated
 * dateAndTime structure.
 * by Ron, Feb 2021 */

#include <stdio.h>
#include <stdbool.h>

struct date
{
  int month;
  int day;
  int year;
};

struct time
{
  int hour;
  int minutes;
  int seconds;
};

struct dateAndTime
{
  struct date sdate;
  struct time stime;
};

int main(void)
{
  struct dateAndTime clockKeeper(struct dateAndTime now);
  struct dateAndTime now;

  printf("Enter date and time (mm/dd/yyyy hh:mm:ss): ");
  scanf("%i/%i/%i %i:%i:%i",
    &now.sdate.month, &now.sdate.day, &now.sdate.year,
    &now.stime.hour, &now.stime.minutes, &now.stime.seconds);

  now = clockKeeper(now);
  
  printf("%.2i/%.2i/%.2i %.2i:%.2i:%.2i\n", 
    now.sdate.month, now.sdate.day, now.sdate.year % 100,
    now.stime.hour, now.stime.minutes, now.stime.seconds);

  return 0;
}

struct dateAndTime clockKeeper(struct dateAndTime now)
{
  struct time timeUpdate(struct time now);
  struct date dateUpdate(struct date today);

  now.stime = timeUpdate(now.stime);

  if (now.stime.hour == 0)
    if (now.stime.minutes == 0)
      if (now.stime.seconds == 0)
        now.sdate = dateUpdate(now.sdate);

  return now;
}

struct time timeUpdate(struct time now)
{
  ++now.seconds;

  if (now.seconds == 60) { /* next minute */
    now.seconds = 0;
    ++now.minutes;

    if (now.minutes == 60) { /* next hour */
      now.minutes = 0;
      ++now.hour;

      if (now.hour == 24) /* midnight */
        now.hour = 0;
    }
  }

  return now;
}

struct date dateUpdate(struct date today)
{
  struct date tomorrow;  
  int numberOfDays(struct date d);

  if (today.day != numberOfDays(today)) {
    tomorrow.day = today.day + 1;
    tomorrow.month = today.month;
    tomorrow.year = today.year;
  }else if (today.month == 12) { /* end of year */
    tomorrow.day = 1;
    tomorrow.month = 1;
    tomorrow.year = today.year + 1;
  }else { /* end of month */
    tomorrow.day = 1;
    tomorrow.month = today.month + 1;
    tomorrow.year = today.year;
  }

  return tomorrow;
}

int numberOfDays(struct date d)
{
  int days;
  bool isLeapYear(struct date d);
  const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

  if (isLeapYear(d) == true && d.month == 2)
    days = 29;
  else
    days = daysPerMonth[d.month - 1];

  return days;
}

bool isLeapYear(struct date d)
{
  bool leapYearFlag;

  if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
    leapYearFlag = true; /* It's a leap year */
  else
    leapYearFlag = false; /* Not a leap year */

  return leapYearFlag;
}

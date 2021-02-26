/* exe0803. Write a function elapedTime that takes as its arguments two
 * time structures and returns a time structure that represents the elapsed time
 * (in hours, minutes, and seconds) between the two times. So the call
 * elapsedTime(time1, time2)
 * where time1 represents 3:45:15 and time2 represents 9:44:03, should return a 
 * time structure that represents 5 hours, 58 minutes, and 48 seconds. Be careful
 * with times that cross midnight.
 * by Ron, Feb 2021 */

#include <stdio.h>

struct time
{
  int hour;
  int minutes;
  int seconds;
};

int main(void)
{
  struct time elapsedTime(struct time t1, struct time t2);
  struct time t1, t2, elapsed;

  printf("Enter two times (hh:mm:ss hh:mm:ss): ");
  scanf("%i:%i:%i %i:%i:%i", 
    &t1.hour, &t1.minutes, &t1.seconds, 
    &t2.hour, &t2.minutes, &t2.seconds);

  elapsed = elapsedTime(t1, t2);

  printf("elapsed time: %.2i:%.2i:%.2i\n", 
    elapsed.hour, elapsed.minutes, elapsed.seconds);

  return 0;
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

struct time elapsedTime(struct time t1, struct time t2)
{
  struct time timeUpdate(struct time now);
  struct time now = { 0, 0, 0 };

  while (1) {
    t1 = timeUpdate(t1);
    now = timeUpdate(now);

    if (t1.hour == t2.hour)
      if (t1.minutes == t2.minutes)
        if (t1.seconds == t2.seconds)
          break;
  }

  return now;
}



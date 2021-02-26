/* exe0709. The least common multiple (lcm) of two positive integers
 * u and v is the smallest positive integer that is evenly divisible
 * by both u and v. Thus, the lcm of 15 and 10, written lcm(15,10), is 30
 * because 30 is the smallest integer divisible by both 15 and 10. Write a 
 * function lcm() that takes two integer arguments and returns their lcm.
 * The lcm() function should calculate the least common multiple by calling
 * the gcd() function from Program 7.6 in accordance with the following identity:
 * lcm (u, v) = uv / gcd (u, v)  u, v >= 0.
 * by Ron, Feb 2021 */

#include <stdio.h>

int main(void)
{
  int lcm(int u, int v);

  printf("lcm(15,10) = %i\n", lcm(15,10));

  return 0;
}

int gcd(int u, int v)
{
  int temp;

  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }

  return u;
}

int lcm(int u, int v)
{
  int gcd(int u, int v);
 
  return u >= 0 && v >= 0 ? (u * v / gcd(u, v)) : 0;
}


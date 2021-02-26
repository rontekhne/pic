/* exe1005. A doubly linked list is a list in which each entry contains a
 * pointer to the preceding entry in the list as well as a pointer to
 * the next entry in the list. Define the appropriate structure definition
 * for a doubly linked list entry and then write a small program that 
 * implements a small linked list and prints out the elements of the list.
 * by Ron, Feb 2021 */

#include <stdio.h>

struct entry
{
  struct entry *previous;
  int          value;
  struct entry *next;
};

int main(void)
{
  void displayEntries(struct entry *listPointer);
  struct entry n1, n2, n3;
  struct entry *listPointer = &n1;

  n1.value = 100;
  n1.next =  &n2;

  n2.previous = &n1;
  n2.value = 200;
  n2.next = &n3;

  n3.previous = &n2;
  n3.value = 300;
  n3.next = (struct entry *) 0;

  displayEntries(listPointer);

  return 0;
}

void displayEntries(struct entry *listPointer)
{
  while (listPointer != (struct entry *) 0) {
    printf("%i  ", listPointer->value);
    listPointer = listPointer->next;
  }
  printf("\n");
}


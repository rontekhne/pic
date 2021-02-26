/* exe1004. Write a function called removeEntry() to remove an
 * entry from a linked list. The sole argument to the procedure
 * should be a pointer to the list. Have the function remove the 
 * entry after the one pointed to by the argument. (Why can't
 * you remove the entry pointed to by the argument?) You need
 * to use the special structure you set up in exercise 3 to handle
 * the special case of removing the first element from the list.
 * by Ron, Feb 2021 */

#include <stdio.h>

struct entry
{
  int          value;
  struct entry *next;
};

int main(void)
{
  void removeEntry(struct entry *listEntry);
  void displayEntries(struct entry *listPointer);
  struct entry n0, n1, n0_5, n2, n3;
  struct entry *listPointer = &n0;

  n0.next = &n1;

  n1.value = 100;
  n1.next = &n2;

  n2.value = 200;
  n2.next = &n3;

  n3.value = 300;
  n3.next = (struct entry *) 0;

  printf("List before remove:\n");
  displayEntries(++listPointer);

  /* remove entry */
  removeEntry(&n0);

  printf("List after remove:\n");
  displayEntries(++listPointer);

  return 0;
}  

void removeEntry(struct entry *listEntry)
{
  listEntry->next = listEntry->next->next;
}

void displayEntries(struct entry *listPointer)
{
  while (listPointer != (struct entry *) 0) {
    printf("%i ", listPointer->value);
    listPointer = listPointer->next;
  }
  printf("\n");
}

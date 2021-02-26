/* exe1006. Develop insertEntry() and removeEntry() functions
 * for a doubly linked list that are similar in function to 
 * those developed in previous exercises for a singly linked
 * list. Why can your removeEntry() function now take as its
 * argument a direct pointer to the entry to be removed from
 * the list?
 * Answer: because it's a implemented as a doubly linked list.
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
  void insertEntry(struct entry *listEntry, struct entry *insert);
  void removeEntry(struct entry *listEntry);
  struct entry n1, n1_5, n2, n3;
  struct entry *listPointer = &n1;

  n1.value = 100;
  n1.next =  &n2;

  n2.previous = &n1;
  n2.value = 200;
  n2.next = &n3;

  n3.previous = &n2;
  n3.value = 300;
  n3.next = (struct entry *) 0;

  printf("Before insert:\n");
  displayEntries(listPointer);

  n1_5.value = 150;  
  insertEntry(&n1, &n1_5);
  printf("\nAfter insert:\n");
  displayEntries(listPointer);

  removeEntry(&n1_5);
  printf("\nAfter remove:\n");
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

void insertEntry(struct entry *listEntry, struct entry *insert)
{
  insert->previous = listEntry;
  insert->next = listEntry->next;
  listEntry->next = insert;
}

void removeEntry(struct entry *listEntry)
{
  listEntry->previous->next = listEntry->next;
}


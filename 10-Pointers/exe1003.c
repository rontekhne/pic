/* exe1003. The function developed in exercise 2 only inserts an element
 * after an existing element in the list, thereby preventing you from
 * inserting a new entry at the front of the list. How can you use this
 * same function and yet overcome this problem? (Hint: Think about setting
 * up a special structure to point to the beginning of the list.)
 * by Ron, Feb 2021 */

#include <stdio.h>

struct entry
{
  int          value;
  struct entry *next;
};

int main(void)
{
  void insertEntry(struct entry *listEntry, struct entry *insert);
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

  printf("List before insert:\n");
  displayEntries(++listPointer);

  /* insert entry */
  n0_5.value = 50;
  insertEntry(&n0, &n0_5);

  printf("List after insert:\n");
  displayEntries(++listPointer);

  return 0;
}  

void insertEntry(struct entry *listEntry, struct entry *insert)
{
  insert->next = listEntry->next;
  listEntry->next = insert;
}

void displayEntries(struct entry *listPointer)
{
  while (listPointer != (struct entry *) 0) {
    printf("%i ", listPointer->value);
    listPointer = listPointer->next;
  }
  printf("\n");
}

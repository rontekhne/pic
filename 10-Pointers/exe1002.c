/* exe1002. Write a function called insertEntry(() to insert a new entry into
 * a linked list. Have the procedure take as arguments a pointer to the list 
 * entry to be inserted (of type struct entry as defined in this chapter), 
 * and a pointer to an element in the list after which the new entry is to be 
 * inserted.
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
  struct entry n1, n1_5, n2, n3;
  struct entry *listPointer = &n1;

  n1.value = 100;
  n1.next = &n2;

  n2.value = 200;
  n2.next = &n3;

  n3.value = 300;
  n3.next = (struct entry *) 0;

  printf("List before insert:\n");
  displayEntries(listPointer);

  /* insert entry */
  n1_5.value = 150;
  insertEntry(&n1, &n1_5);

  printf("List after insert:\n");
  displayEntries(listPointer);

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


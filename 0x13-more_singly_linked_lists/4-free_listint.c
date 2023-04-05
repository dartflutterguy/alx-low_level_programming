#include "lists.h"

/**
* free_listint - This function frees a memory to avoid memory leak
* @head: listint_t list to be freed after used
*/
void free_listint(listint_t *head)
{
listint_t *mynode;

while (head)
{
mynode = head->next;
free(head);
head = mynode;
}
}

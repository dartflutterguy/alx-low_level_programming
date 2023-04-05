#include "lists.h"

/**
* pop_listint -  Remove the head of a node in a linked list
* @head: pointer that points the first member in the linked list
* Return: the item inside the node that was removed,
* or 0 if the list is null
*/
int pop_listint(listint_t **head)
{
listint_t *mynode;
int elem;

if (!head || !*head)
return (0);

elem = (*head)->n;
mynode = (*head)->next;
free(*head);
*head = mynode;

return (elem);
}

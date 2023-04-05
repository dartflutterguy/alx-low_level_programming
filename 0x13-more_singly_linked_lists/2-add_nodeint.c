#include "lists.h"

/**
 * add_nodeint - This function adds a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return:the address of the new element, NUll if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pntr;

pntr = malloc(sizeof(listint_t));
if (pntr == NULL)
return (NULL);
pntr->n = n;
pntr->next = *head;
*head = pntr;

return (*head);
}

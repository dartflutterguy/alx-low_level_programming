#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer to the first node of the linked list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

for (; *head; )
{
	next = (*head)->next;
	(*head)->next = previous;
	previous = *head;
	*head = next;
}

*head = previous;

return (*head);
}

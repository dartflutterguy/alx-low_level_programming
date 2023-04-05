#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the linked list data (n)
 * @head: first member of the node
 *
 * Return: sum of all the (n) element.
 */
int sum_listint(listint_t *head)
{
int sum_list;

sum_list = 0;

while (head != NULL)
{
sum_list = sum_list + head->n;
head = head->next;
}

return (sum_list);
}

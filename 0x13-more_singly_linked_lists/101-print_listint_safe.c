#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t list
 * @head: pointer to the 1st node of the linked list
 * Return: number of node in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_nd = NULL;
	const listint_t *l_nd = NULL;
	size_t count = 0;
	size_t new_nd;

	tmp_nd = head;
	for (; tmp_nd; )
	{
		printf("[%p] %d\n", (void *)tmp_nd, tmp_nd->n);
		count++;
		tmp_nd = tmp_nd->next;
		l_nd = head;
		new_nd = 0;
		while (new_nd < count)
		{
			if (tmp_nd == l_nd)
			{
				printf("-> [%p] %d\n", (void *)tmp_nd, tmp_nd->n);
				return (count);
			}
			l_nd = l_nd->next;
			new_nd++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}


#include "lists.h"

/**
 * listint_len - A function that returns the number of elements in
 * a linked list.
 * @h: takes an argument, head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
size_t mynode = 0;

for (; h != NULL; )
{
h = h->next;
mynode++;
}
return (mynode);
}

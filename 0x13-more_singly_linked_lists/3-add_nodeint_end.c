#include "lists.h"

/**
 * add_nodeint_end - adding a node at the end of a linked list
 * @head: pointer to the first part of the node
 * @n: data to input in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *mynode;
listint_t *temp = *head;
mynode = malloc(sizeof(listint_t));
if (mynode == NULL)
return (NULL);
mynode->n = n;
mynode->next = NULL;
temp = *head;

if (*head == NULL)
{
*head = mynode;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = mynode;
}
return (mynode);
}

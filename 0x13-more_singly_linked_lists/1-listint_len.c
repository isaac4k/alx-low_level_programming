#include "lists.h"
/**
 * listint_len - print the linked list element
 * @h: the head of linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *traverse = h;

	while (traverse != NULL)
	{
		traverse = traverse->next;
		i++;
	}
	return (i);
}

#include "lists.h"
/**
 * get_nodeint_at_index - a function to access ith element
 * @head: the head of the linked linst
 * @index: the index we need to access element
 * Return: a node at ith position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverse;
	unsigned int i = 0;

	traverse = head;
	while (traverse != NULL)
	{
		if (i == index)
		{
			return (traverse);
		}
		traverse = traverse->next;
		i++;
	}
	return (NULL);
}

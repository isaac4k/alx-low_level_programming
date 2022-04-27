#include "lists.h"
/**
 * sum_listint - the sum all the element of linked list
 * @head: the head of linked list
 * Return: return the sum of all node
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *traverse;

	traverse = head;
	sum = 0;
	while (traverse != NULL)
	{
		sum = sum + traverse->n;
		traverse = traverse->next;
	}
	return (sum);
}

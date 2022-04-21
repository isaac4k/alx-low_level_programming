#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - A function that returns the number of elements in a
 *linked list_t list.
 *
 *@h: A Pointer to the head of the List.
 *
 *Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}

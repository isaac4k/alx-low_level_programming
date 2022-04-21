#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* _strlen - function that that returns the length of a string.
* @s : pointer to a string.
* Return: string lenght
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 *print_list - A function that prints all the elements of a list_t list.
 *
 *@h: A pointer to the head element of the List.
 *
 *Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	size_t sum = 0;
	char *c;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			i = 0;
			c = "(nil)";
		} else
		{
			i = _strlen(h->str);
			c = h->str;
		}
		printf("[%d] %s\n", i, c);
		h = h->next;
		sum++;
	}
	return (sum);
}

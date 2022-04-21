#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 *add_node_end - A function that adds a new node at the
 *end of a list_t list.
 *
 *@head: Pointer to the head element of the list.
 *@str: New element str to be affected with.
 *
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str_ = strdup(str);
	list_t *New_ele = NULL;
	list_t *Last_ele = *head;

	New_ele = malloc(sizeof(list_t));
	if (!New_ele)
		return (NULL);
	New_ele->str = str_;
	if (*head == NULL)
	{
		*head = New_ele;
		return (*head);
	}
	while (Last_ele->next != NULL)
		Last_ele = Last_ele->next;
	Last_ele->next = New_ele;
	return (*head);
}

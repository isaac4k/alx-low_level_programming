#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 *add_node - A function that adds a new node at the
 *beginning of a list_t list.
 *
 *@head: The head element of the list.
 *@str: string of the new element to be added.
 *
 *Return:  the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_ = strdup(str);
	list_t *New_ele = NULL;

	New_ele = malloc(sizeof(list_t));
	if (!New_ele)
		return (NULL);
	New_ele->str = str_;
	New_ele->next = *head;
	*head = New_ele;
	return (*head);
}

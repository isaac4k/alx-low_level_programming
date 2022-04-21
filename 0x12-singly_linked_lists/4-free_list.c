#include "lists.h"
#include <stdio.h>
#include "stdlib.h"
#include <unistd.h>
/**
* free_list -A function that frees a list_t list.
* @head: Pointer to the head element of a list.
*
* Return: Void.
*/
void free_list(list_t *head)
{
	list_t *Tmp_node;

	while (head != NULL)
	{
		Tmp_node = head;
		head = head->next;
		free(Tmp_node->str);
		free(Tmp_node);
	}
}

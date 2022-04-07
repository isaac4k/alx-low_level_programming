#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - function that allocates memory for an array, using malloc.
 *
 *@nmemb: Elements size.
 *@size: Size of one single element.
 *
 *Return: NULL if malloc fails,or 'str': a pointer to the address of
 *the allocated heap space.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *Array = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	Array = malloc(nmemb * size);
	if (Array == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		Array[i] = '\0';
	return (Array);
}

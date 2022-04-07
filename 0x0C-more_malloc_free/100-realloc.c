#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_realloc - A function that reallocates a memory block using malloc and free
 *
 *@ptr: Pointer to the old memory range.
 *@old_size: size of the old memory range.
 *@new_size: size of the reallocated memory range.
 *
 *Return: Pointer to the new reallocated memory range.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	return (ptr);
}

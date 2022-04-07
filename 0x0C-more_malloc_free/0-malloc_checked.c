#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - A function that allocates memory using malloc.
 *
 * @b: number of bytes to be allocated.
 *
 * Return: Pointer to the allocated space address.
 */

void *malloc_checked(unsigned int b)
i{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}


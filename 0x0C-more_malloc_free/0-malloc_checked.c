#include "main.h"
#include "stdlib.h"
/**
 * malloc_checked - malloc allocate a block of memory
 * @b: integer the size of block allocated
 * Return: address of block of memory if successful else the status 98
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}

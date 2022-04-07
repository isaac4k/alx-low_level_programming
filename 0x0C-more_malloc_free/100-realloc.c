#include "main.h"
#include "stdlib.h"
/**
 * _realloc - reallocate the memory
 * @ptr: the old memory block
 * @old_size: the size of the old memory place
 * @new_size: the size of the new memory place
 * Return: a void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		return (p);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = ((char *)ptr)[i];
		free(ptr);
		return (p);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = ((char *)ptr)[i];
		free(ptr);
		return (p);
	}
	return (NULL);
}

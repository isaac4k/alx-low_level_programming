#include "main.h"
#include "stdlib.h"
#include "string.h"
/**
 * _calloc - a function that assign a block of memory and fill them with 0
 * @nmemb: the number of element
 * @size: the size of data type
 * Return: a void pointer to adress of the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	int len;

	len = size * nmemb;
	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(len);
	if (p == NULL)
		return (NULL);
	memset(p, 0, len);
	return (p);
}

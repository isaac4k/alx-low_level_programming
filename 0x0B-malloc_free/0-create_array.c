#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function to dynamically create an array size of size
 * @size: the size of an array
 * @c: a character to memset the memory address
 * Return: if dynamically allocation successfully allocated
 * it returns the char pointer to the first address else it return Null
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] =  c;
	}
	return (p);
}

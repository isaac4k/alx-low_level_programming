#include "main.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
/**
 * _strdup - a function which a copies a given string return a pointer to it
 * @str: a string
 * Return: NULL if unsuccessful allocation return
 * char pointer to copied string if allocation completed with success
 */
char *_strdup(char *str)
{
	int len, i;
	char *p;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	p = (char *)malloc((sizeof(char) * len) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	return (p);
}

#include "main.h"
#include "string.h"
/**
 * _strcpy - copy a string to another string
 * @dest: a string variable to be copied
 * @src: a string variable to copy the content
 * Return: a pointer to a char
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = strlen(dest);
	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < len; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

#include "main.h"
#include "string.h"
/**
 * _strncat - a function that concatenate two strings upto n bytes
 * @dest: the first string we need to concatente and return
 * @src: the second argument
 * @n: the size of the string we need to concatenate
 * Return: string returned
 */

char *_strncat(char *dest, char *src, int n)
{
	int len,  i;

	len = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}

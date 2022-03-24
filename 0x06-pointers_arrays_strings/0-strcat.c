#include "main.h"
#include "string.h"
/**
 * _strcat - contactinate two strings
 * @dest: the first string
 * @src: the second string
 * Return: a string that concatenated
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i < len2 && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + i] = '\0';
	return (dest);
}

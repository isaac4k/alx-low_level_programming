#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_strlen - function that that returns the length of a string.
*
*@s: pointer of char type.
*Return: - The length of a string.
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * string_nconcat - A function that concatenates two strings.
 *
 * @s1: Pointer to the string of the first part.
 * @s2: Pointer to the string of the second part.
 * @n: Number of bytes to be copied from s2
 *
 * Return: Pointer to the resulted string and NULL if malloc fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2;
	unsigned int size, i, index = 0;
	char *str = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n > l2)
		n = l2;
	size = l1 + n + 1;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		str[index] = s1[i];
		index++;
	}
	for (i = 0; i < n; i++)
	{
		str[index] = s2[i];
		index++;
	}
	str[index] = '\0';
	return (str);
}

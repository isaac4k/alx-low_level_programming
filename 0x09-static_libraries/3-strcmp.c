#include "main.h"
#include "string.h"
/**
 * _strcmp - compare two strings
 * @s1: the first string to be compared
 * @s2: the seconde string to be compared
 * Return: 0 if they are equal and 1 if s1 greater else 2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

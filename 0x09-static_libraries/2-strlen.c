#include "main.h"
/**
 * _strlen - a function that return a length of a string
 * @s: a string input
 * Return: a lenght of an string
 */
int _strlen(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}

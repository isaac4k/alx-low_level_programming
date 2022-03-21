#include "main.h"
#include "string.h"
#include <stdio.h>
/**
 * print_rev - print a string in a reverse order
 * @s: a string variable
 * Return: void
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 1; i <= len; i++)
	{
		printf("%c", s[len - i]);
	}
	putchar('\n');
}

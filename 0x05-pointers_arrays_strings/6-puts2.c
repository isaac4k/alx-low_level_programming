#include <stdio.h>
#include "main.h"
#include "string.h"
/**
 * puts2 - a function print jumping on char
 * @str: a string input
 * Return: void
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i = i + 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

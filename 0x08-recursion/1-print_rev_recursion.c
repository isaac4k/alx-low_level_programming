#include "main.h"
#include <string.h>
/**
 * rev_printer - recursively print a string from end to start
 * @s: a char
 * @n: a shift
 * Return: void
 */

void rev_printer(char *s, int n)
{
	if (n < 0)
		return;
	_putchar(*(s + n));
	rev_printer(s, n - 1);
}

/**
 * _print_rev_recursion - recursively print a string from end to start
 * @s: a char
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int n = strlen(s);

	rev_printer(s, n - 1);
}

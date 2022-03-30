#include "main.h"
/**
 * _puts_recursion - recursively prints out a string
 * @s: a string to be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

#include "main.h"
/**
 * print_sign - print a sign of a given number
 * @n: an integer
 * Return:1 if @n is positive number, 0 for zero
 * and -1 for negative number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

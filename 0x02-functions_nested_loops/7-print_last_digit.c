#include "main.h"
/**
 * print_last_digit - print the last digit of any integer
 * @n: any integer value
 * Return: always the last digit of a number
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	_putchar(last + '0');
	return (last);
}

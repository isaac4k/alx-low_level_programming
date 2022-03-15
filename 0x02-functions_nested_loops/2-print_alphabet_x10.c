#include "main.h"
/**
 * print_alphabet_x10 -check the code .
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	a = 'a';
	i = 1;
	while (i <= 10)
	{
		while (a <= 'z')
		{
		_putchar(a);
		a++;
		}
		i++;
		a = 'a';
		_putchar('\n');
	}
}

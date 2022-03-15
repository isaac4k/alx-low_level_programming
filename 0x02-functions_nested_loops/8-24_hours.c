#include "main.h"

/**
 * jack_bauer - print every minut oo:oo to 23:59
 * Return: Always void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int i1;
	int i2;
	int j1;
	int j2;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			i1 = i / 10;
			i2 = i % 10;
			j1 = j / 10;
			j2 = j % 10;
			_putchar(i1 + '0');
			_putchar(i2 + '0');
			_putchar(':');
			_putchar(j1 + '0');
			_putchar(j2 + '0');
			_putchar('\n');
		}
	}
}

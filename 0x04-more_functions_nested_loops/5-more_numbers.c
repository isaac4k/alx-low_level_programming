#include "main.h"
/**
 * more_numbers - print 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j, first, last;

	i = 0;
	j = 1;
	while (j <= 10)
	{
		while (i <= 14)
		{
			first = i / 10;
			last = i % 10;
			if (i > 9)
			{
				_putchar(first + '0');
			}
			_putchar(last + '0');
			i++;
		}
		i = 0;
		_putchar('\n');
		j++;
	}
}

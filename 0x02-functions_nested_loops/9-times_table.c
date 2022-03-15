#include "main.h"
/**
 * times_table -  print a time table
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int result;
	int i1;
	int i2;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			i1 = result / 10;
			i2 = result % 10;
			if (result > 9)
			{
				_putchar(i1 + '0');
				_putchar(i2 + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(result + '0');
				}
				else
					_putchar(result + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

#include <stdio.h>

/**
 * main - Entry point
 * Description - print two two digit combination
 * Return: always 0 (success)
 */
int main(void)
{
	int i, j, firstdigit1, lastdigit1, firstdigit2, lastdigit2, tmp;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			lastdigit1 = i % 10;
			tmp = i / 10;
			firstdigit1 = tmp % 10;
			lastdigit2 = j % 10;
			tmp = j / 10;
			firstdigit2 = tmp % 10;
			if (j > i)
			{
				putchar(firstdigit1 + '0');
				putchar(lastdigit1 + '0');
				putchar(' ');
				putchar(firstdigit2 + '0');
				putchar(lastdigit2 + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

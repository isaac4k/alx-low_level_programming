#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i  % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz");
				putchar(' ');
			}
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

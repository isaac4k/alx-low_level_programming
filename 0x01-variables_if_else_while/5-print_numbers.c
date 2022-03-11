#include <stdio.h>

/**
 * main - Entry point
 * Description - print all single digit number
 * Return: always 0 (success)
 */
int main(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}

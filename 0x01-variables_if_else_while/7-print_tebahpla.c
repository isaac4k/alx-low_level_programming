#include <stdio.h>

/**
 * main - Entry point
 * Description - print all lowercase alphabet in reverse order
 * Return: always 0 (success)
 */
int main(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}

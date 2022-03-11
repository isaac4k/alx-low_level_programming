#include <stdio.h>

/**
 * main - Entry point
 * Description - print all lowercase alphabet
 * Return: always 0 (success)
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

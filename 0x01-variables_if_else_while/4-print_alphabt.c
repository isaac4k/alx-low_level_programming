#include <stdio.h>

/**
 * main - Entry point
 * Description - print all lowercase alphabet except e and q
 * Return: always 0 (success)
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

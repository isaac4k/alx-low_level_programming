#include <stdio.h>

/**
 * main - Entry point
 * Description - print all lowercase alphabet
 * Return: always 0 (success)
 */
int main(void)
{
	char hexdigit;

	for (hexdigit = '0'; hexdigit <= '9'; hexdigit++)
		putchar(hexdigit);
	for (hexdigit = 'a'; hexdigit <= 'f'; hexdigit++)
		putchar(hexdigit);
	putchar('\n');
	return (0);
}

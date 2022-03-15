#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - printing a number starting from n to 98
 * @n: input integer argument
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
	for (; n > 98; n--)
		{
		printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
		printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}

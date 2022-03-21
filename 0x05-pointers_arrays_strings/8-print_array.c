#include "main.h"
#include "string.h"
#include <stdio.h>
/**
 * print_array - printing an array
 * @a: integer address
 * @n: integer lenght
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}

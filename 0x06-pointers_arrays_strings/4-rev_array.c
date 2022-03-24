#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * reverse_array - a function reverse array elements
 * @a: an array
 * @n: length of an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

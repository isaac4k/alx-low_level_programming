#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * alloc_grid - allocate two dimensional arrays
 * @width: the width int input
 * @height: the height input
 * Return: a collection of pointers
 */

int **alloc_grid(int width, int height)
{
	int r = height, c = width, len = 0;
	int *ptr, **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	len = sizeof(int *) * r + sizeof(int) * c * r;
	arr = (int **)malloc(len);
	if (arr == NULL)
		return (NULL);
	ptr = (int *)(arr + r);
	for (i = 0; i < r; i++)
		arr[i] = (ptr + c * i);
	for (i = 0; i < r; i++)
	{

		for (j = 0; j < c; j++)
			arr[i][j] = 0;
	}
	return (arr);
}

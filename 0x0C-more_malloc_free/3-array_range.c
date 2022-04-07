#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers.
 *
 * @min: min value.
 * @max: max value.
 *
 * Return: NULL if malloc fails ,otherwise Array-> a pointer to the
 * result array
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *Array = NULL;

	if (min > max)
		return (NULL);
	Array = malloc((max - min + 1) * sizeof(int));
	if (Array == NULL)
		return (NULL);
	while (min <= max)
		Array[i++] = min++;
	return (Array);
}

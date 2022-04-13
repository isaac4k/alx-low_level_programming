#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @array: The array
 * @size: Size of the array
 * @cmp: Pointer to a function
 * Return: The index of the array or -1 if it fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

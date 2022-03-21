#include "main.h"
/**
 * swap_int - a function swap a variables value
 * @a: a first variable we need to change
 * @b: a second variable memory adress we want to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

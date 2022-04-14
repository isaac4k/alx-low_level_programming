#include "variadic_functions.h"

/**
 *sum_them_all - A function that returns the sum of all its parameters.
 *
 *@n: Number of arguments.
 *
 *Return: sum of all arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int  i = 0, sum = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0 ; i < n; i++)
		sum += va_arg(ap, int);
	return (sum);
}


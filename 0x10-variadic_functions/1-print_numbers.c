#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers, followed by a new line.
 *
 *@separator: String to be printed as separator.
 *@n: Number of parameters.
 *
 *Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	const char *c = separator;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1) && c)
			printf("%s", c);
	}
	va_end(ap);
	printf("\n");
}

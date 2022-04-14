#include "variadic_functions.h"
/**
* print_char - Function that display a char.
*
*@arg: va_list variable.
*
*Return: Void.
*/
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
* print_int - Function that display an integer.
*
*@arg: va_list variable.
*
*Return: Void.
*/
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
*print_str - Function that display a string.
*
*@arg: va_list variable.
*
*Return: Void.
*/
void print_str(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str)
	{
		printf("%s", str);
		return;
	}
	printf("%p", str);
}
/**
*print_float - Function that display a float.
*
*@arg: va_list variable.
*
*Return: Void.
*/
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 *print_all - function that print according to a string parameter.
 *
 *@format: string paramater.
 *
 *Return: Void.
 */

void print_all(const char * const format, ...)
{
	Printer  Corr[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{0, NULL}
	};
	unsigned int i = 0, j = 0;
	va_list ap;
	char *separator = "";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (Corr[j].op)
		{
			if (Corr[j].op == format[i])
			{
				printf("%s", separator);
				Corr[j].f(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(ap);
	printf("\n");

}

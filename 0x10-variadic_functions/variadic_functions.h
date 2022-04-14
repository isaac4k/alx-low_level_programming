#ifndef VARIADIC_F
#define VARIADIC_F

#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_int(va_list arg);
void print_str(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);
/**
 *struct Printer - A structure -> Printer
 *
 *@op: character to recognize which function to use.
 *@f: Pointer to function to be executed according to op.
 *
 */
typedef struct  Printer
{
	char op;
	void (*f)(va_list arg);

} Printer;

#endif

#include "main.h"
/**
 * _isalpha - a function which checks a char is alpha or not
 * @c: a character in ASCII code
 * Return: 1 if @c is alpha 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

#include "main.h"
/**
 * _islower - check if the given ASCII code is lower or not
 * @c: a character in ASCII code
 * Description - check if the given char is lower case or not
 * Return: 1 if the input is lower else 0
 */
int _islower(int c)
{
	if (c >= 97  && c <= 122)
	{
		return (1);
	}
	return (0);
}

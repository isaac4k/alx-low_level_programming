#include "main.h"
#include "string.h"
/**
 * string_toupper - change any lower case letter to uppercase letter
 * @s: string
 * Return: return a char pointer
 */
char *string_toupper(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}

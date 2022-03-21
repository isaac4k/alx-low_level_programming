#include "main.h"
#include "string.h"
/**
 * rev_string - a function to reverse a string
 * @s: a string variable
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = strlen(s);
	for (i = 0; i < (len / 2); i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}

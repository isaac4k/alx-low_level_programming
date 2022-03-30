#include "main.h"
#include <string.h>
/**
 * palindromeChecker - check a given string is palindrome
 * @start: start index
 * @end: end index
 * @s: a character
 * Return: boolean
 */

int palindromeChecker(int start, int end, char *s)
{
	int a = start - end;

	if (a == 1 || a == 0)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindromeChecker(start + 1, end - 1, s));

}

/**
 * is_palindrome - recursively finding the palindrome
 * @s: a string
 * Return: a bolean
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);
	return (palindromeChecker(0, len - 1, s));
}

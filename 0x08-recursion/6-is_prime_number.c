#include "main.h"

/**
 * primenumber - cheeck a prime number
 * @n: a number to check
 * @c: checker
 * Return: boolean
 */

int primenumber(int n, int c)
{
	if (c == n)
		return (1);
	if (n % c == 0)
		return (0);
	return (primenumber(n, c + 1));
}

/**
 * is_prime_number - check whether a given number is a prime or not
 * @n: a number to check
 * Return: a boolean
 */
int is_prime_number(int n)
{
	if (n == 1 || n == 0)
		return (0);
	return (primenumber(n, 2));
}

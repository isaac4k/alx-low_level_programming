#include "main.h"
/**
 * BSTsqrt - calculate the square root of a given number using binary search
 * @start: index the half problem start
 * @end: large value the half problem not exceed
 * @m: the varaible we want to compute
 * Return: the square root of n
 */

int BSTsqrt(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
			return (mid);
		if (mid * mid > m)
			return (BSTsqrt(start, mid - 1, m));
		if (mid * mid < m)
			return (BSTsqrt(mid + 1, end, m));
	}
	return (-1);
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (BSTsqrt(2, n, n));
}

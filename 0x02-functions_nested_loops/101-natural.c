#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	int sum;

	n = 1024;
	while (n >= 3)
	{
		n--;
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	unsigned long int first;
	unsigned long int second;
	unsigned long int seq;
	unsigned long int sum;


	first = 1;
	second = 2;
	sum = 0;
	seq = 0;
	while (seq <= 4000000)
	{
		seq = first + second;
		first = second;
		second = seq;
		if (seq % 2 == 0)
		{
			sum = sum + seq;
		}
	}
	printf("%ld", (sum + 2));
	putchar('\n');
	return (0);
}

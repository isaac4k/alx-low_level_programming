#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int i;
	unsigned long int first;
	unsigned long int second;
	unsigned long int seq;

	i = 3;
	first = 1;
	second = 2;
	printf("%ld, %ld, ", first, second);
	while (i <= 50)
	{
		seq = first + second;
		first = second;
		second = seq;
		if (i != 50)
		{
			printf("%ld, ", seq);
		}
		else
			printf("%ld", seq);
		i++;
	}
	putchar('\n');
	return (0);
}

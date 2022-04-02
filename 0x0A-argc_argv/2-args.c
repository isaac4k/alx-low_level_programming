#include <stdio.h>
/**
* main - an entry point
* @argc: number of argument
* @argv: a string of argument
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		puts(argv[i]);
	}
	return (0);
}

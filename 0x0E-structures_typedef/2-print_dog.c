#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print the structure of dog
 * @d: a struct instance of dog
 * Return: always nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		puts("Name: (nil)");
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		puts("Owner: (nil)");
}

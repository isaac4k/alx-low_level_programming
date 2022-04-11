#include "dog.h"
/**
 * init_dog - intialize any structures given
 * @d: a struct for dog
 * @name: a string for the name of the dog
 * @age: a age of the dog
 * @owner: the name of the owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

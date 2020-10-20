#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - dog
 * @d: dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

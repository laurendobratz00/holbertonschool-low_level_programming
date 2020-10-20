#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - 
 *
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}

	my_dog->name = malloc((_strlen(name) + 1) * sizeof(char));

	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->name = _strcpy(my_dog->name, name);

	my_dog->age = age;

	my_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));

	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = _strcpy(my_dog->owner, owner);

	return (my_dog);
}

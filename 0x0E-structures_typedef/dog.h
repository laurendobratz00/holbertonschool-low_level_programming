#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct dog - struct dog
 * @name: char
 * @age: float
 * @owner: char
 *
 * description: struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

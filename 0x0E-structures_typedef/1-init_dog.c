#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a struct
 * @name: pointer to a string
 * @age: pointer to a float
 * @owner: pointer to string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

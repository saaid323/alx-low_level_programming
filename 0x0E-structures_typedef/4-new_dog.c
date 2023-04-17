#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner) 
{
	int name_len, owner_len;

	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return NULL;
	}
	name_len = strlen(name);
	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return NULL;
	}
	
	strcpy(new_dog->name, name);
	owner_len = strlen(owner);
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return NULL;
	}
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return new_dog;
}

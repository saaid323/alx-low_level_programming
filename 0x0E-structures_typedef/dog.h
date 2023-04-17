#ifndef DOG_H
#define DOG_H

/**
 * struct dog - details about dog
 * @name: the name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);




#endif

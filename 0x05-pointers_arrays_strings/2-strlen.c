#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: pointer to a strint
 * Return: returns the length of a string
 */

int _strlen(char *s)
{
	int a;

	for (; *s++ ;)
	{
		a++;
	}

	return (a);
}

#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: pointer to a strint
 * Return: returns the length of a string
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	for (; *s++;)
		a++;

	return (a);
}

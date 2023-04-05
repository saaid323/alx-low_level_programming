#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string
 * Return: returns the length of s
 */

int _strlen_recursion(char *s)
{
	int total = 1;

	if (*s == '\0')
		return (0);

	return (total + _strlen_recursion(s + 1));
}

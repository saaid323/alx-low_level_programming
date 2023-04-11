#include "main.h"
#include <string.h>

/**
 * str_concat -  concatenates two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return:  return NULL on failure, else pointer to str
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *c = malloc(sizeof(char) * (len1 + len2 + 1));
	int i;

	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		c[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		c[len1 + i] = s2[i];
	}
	c[len1 + len2] = '\0';
	return (c);
}

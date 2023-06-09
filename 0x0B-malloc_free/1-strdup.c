#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to a string
 * Return: Returns NULL if str = NULL  of ointer to a newly
 * allocated space
 */

char *_strdup(char *str)
{
	int len;
	int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}

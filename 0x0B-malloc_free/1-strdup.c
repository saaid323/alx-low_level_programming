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
	int len = strlen(str);
	int i;

	if (str == NULL)
		return (NULL);
	else
	{
		char *s = malloc(sizeof(char) * len);
		if (*s == '\0')
		{
			return (NULL);
		}

		for (i = 0; i < len; i++)
		{
			s[i] = str[i];
		}
		return (s);
	}
}

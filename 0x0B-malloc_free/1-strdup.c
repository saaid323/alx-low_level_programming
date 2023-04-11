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

	if (*str == 0)
	{
		return (NULL);
	}
	else
	{
		char *s = malloc(sizeof(char) * len);

		for (i = 0; i < len; i++)
		{
			s[i] = str[i];
		}
		return (s);
	}
}

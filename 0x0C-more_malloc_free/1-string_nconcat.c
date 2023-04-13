#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to a string
 * @n: number of bytes to be copied
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x;
	char *c;

	if (s1 == NULL)
		s1 = 0;
	else
		j = strlen(s1) + 1;
	if (s2 == NULL)
		s2 = 0;
	else
		x = strlen(s2);
	if (n >= x)
		n = x;

	c = malloc(sizeof(char) * j + n);

	if (c == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		c[i] = s1[i];
	}
	for (i = 0; i <= n; i++)
	{
		c[j + i] = s2[i];
	}
	c[strlen(s1) + n] = '\0';
	return (c);

}

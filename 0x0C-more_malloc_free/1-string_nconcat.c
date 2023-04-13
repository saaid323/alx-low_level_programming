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
	unsigned int i;
	char *c;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	if (strlen(s2) > n)
		n = strlen(s2);

	c = malloc(sizeof(char) * (strlen(s1) + 1) + n);

	if (c == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		c[i] = s1[i];
	}
	for (i = 0; i <= n; i++)
	{
		c[strlen(s1) + i] = s2[i];
	}
	c[strlen(s1) + n] = '\0';
	return (c);

}


/**
 * _strcmp - compares two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int s;

	if (*s1 == *s2)
	{
		s = *s1 - *s2;
	}
	else if (*s1 > *s2)
	{
		s = *s1 - *s2;
	}
	else if (*s1 < *s2)
	{
		s = *s1 - *s2;
	}
	return (s);
}

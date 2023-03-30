
/**
 * _strcmp - compares two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, s;

	i = 0;
	if (s1[i] == s2[i])
	{
		s = s1[i] - s2[i];
	}
	else if (s1[i] > s2[i])
	{
		s = s1[i] - s2[i];
	}
	else if (s1[i] < s2[i])
	{
		s = s1[i] - s2[i];
	}
	return (s);
}
